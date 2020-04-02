//
// Generated file, do not edit! Created by nedtool 5.3 from sm2Sign.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __SM2SIGN_M_H
#define __SM2SIGN_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0503
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "sign_util.h"
typedef const BIGNUM *cBIGNUM;
typedef unsigned char* pchar;
typedef EC_KEY* KEY;
// }}

/**
 * Class generated from <tt>sm2Sign.msg:41</tt> by nedtool.
 * <pre>
 * message sm2signMsg_t
 * {
 *     cBIGNUM sigR;
 *     cBIGNUM sigS;
 * 
 *     pchar dgst;
 *     string hashmsg;
 * 
 *     int siglen;
 *     int flag = 0;
 *     int received = 0;
 * }
 * </pre>
 */
class sm2signMsg_t : public ::omnetpp::cMessage
{
  protected:
    cBIGNUM sigR;
    cBIGNUM sigS;
    pchar dgst;
    ::omnetpp::opp_string hashmsg;
    int siglen;
    int flag;
    int received;

  private:
    void copy(const sm2signMsg_t& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const sm2signMsg_t&);

  public:
    sm2signMsg_t(const char *name=nullptr, short kind=0);
    sm2signMsg_t(const sm2signMsg_t& other);
    virtual ~sm2signMsg_t();
    sm2signMsg_t& operator=(const sm2signMsg_t& other);
    virtual sm2signMsg_t *dup() const override {return new sm2signMsg_t(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual cBIGNUM& getSigR();
    virtual const cBIGNUM& getSigR() const {return const_cast<sm2signMsg_t*>(this)->getSigR();}
    virtual void setSigR(const cBIGNUM& sigR);
    virtual cBIGNUM& getSigS();
    virtual const cBIGNUM& getSigS() const {return const_cast<sm2signMsg_t*>(this)->getSigS();}
    virtual void setSigS(const cBIGNUM& sigS);
    virtual pchar& getDgst();
    virtual const pchar& getDgst() const {return const_cast<sm2signMsg_t*>(this)->getDgst();}
    virtual void setDgst(const pchar& dgst);
    virtual const char * getHashmsg() const;
    virtual void setHashmsg(const char * hashmsg);
    virtual int getSiglen() const;
    virtual void setSiglen(int siglen);
    virtual int getFlag() const;
    virtual void setFlag(int flag);
    virtual int getReceived() const;
    virtual void setReceived(int received);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const sm2signMsg_t& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, sm2signMsg_t& obj) {obj.parsimUnpack(b);}


#endif // ifndef __SM2SIGN_M_H

