
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yes ;
typedef int rcvlatency ;
typedef int peerlatency ;
typedef int latency ;
typedef int connect_timeout ;
struct TYPE_5__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int latency; int rcvlatency; int peerlatency; int connect_timeout; scalar_t__ mode; scalar_t__ transtype; scalar_t__ maxbw; scalar_t__ pbkeylen; int* passphrase; scalar_t__ mss; scalar_t__ ffs; scalar_t__ ipttl; scalar_t__ iptos; scalar_t__ tlpktdrop; scalar_t__ nakreport; scalar_t__ sndbuf; scalar_t__ rcvbuf; scalar_t__ lossmaxttl; scalar_t__ minversion; int* streamid; int* smoother; scalar_t__ messageapi; scalar_t__ payload_size; } ;
typedef TYPE_2__ SRTContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int ,char*,int*,int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_28, int VAR_29)
{
    SRTContext *VAR_30 = VAR_28->priv_data;
    int VAR_31 = 1;
    int VAR_32 = VAR_30->latency / 1000;
    int VAR_33 = VAR_30->rcvlatency / 1000;
    int VAR_34 = VAR_30->peerlatency / 1000;
    int VAR_35 = VAR_30->connect_timeout;

    if ((VAR_30->mode == VAR_27 && FUNC_1(VAR_28, VAR_29, VAR_19, "SRTO_RENDEZVOUS", &VAR_31, sizeof(VAR_31)) < 0) ||
        (VAR_30->transtype != VAR_26 && FUNC_1(VAR_28, VAR_29, VAR_25, "SRTO_TRANSTYPE", &VAR_30->transtype, sizeof(VAR_30->transtype)) < 0) ||
        (VAR_30->maxbw >= 0 && FUNC_1(VAR_28, VAR_29, VAR_8, "SRTO_MAXBW", &VAR_30->maxbw, sizeof(VAR_30->maxbw)) < 0) ||
        (VAR_30->pbkeylen >= 0 && FUNC_1(VAR_28, VAR_29, VAR_15, "SRTO_PBKEYLEN", &VAR_30->pbkeylen, sizeof(VAR_30->pbkeylen)) < 0) ||
        (VAR_30->passphrase && FUNC_1(VAR_28, VAR_29, VAR_13, "SRTO_PASSPHRASE", VAR_30->passphrase, FUNC_2(VAR_30->passphrase)) < 0) ||
        (VAR_30->mss >= 0 && FUNC_1(VAR_28, VAR_29, VAR_11, "SRTO_MMS", &VAR_30->mss, sizeof(VAR_30->mss)) < 0) ||
        (VAR_30->ffs >= 0 && FUNC_1(VAR_28, VAR_29, VAR_3, "SRTO_FC", &VAR_30->ffs, sizeof(VAR_30->ffs)) < 0) ||
        (VAR_30->ipttl >= 0 && FUNC_1(VAR_28, VAR_29, VAR_5, "SRTO_UPTTL", &VAR_30->ipttl, sizeof(VAR_30->ipttl)) < 0) ||
        (VAR_30->iptos >= 0 && FUNC_1(VAR_28, VAR_29, VAR_4, "SRTO_IPTOS", &VAR_30->iptos, sizeof(VAR_30->iptos)) < 0) ||
        (VAR_30->latency >= 0 && FUNC_1(VAR_28, VAR_29, VAR_6, "SRTO_LATENCY", &VAR_32, sizeof(VAR_32)) < 0) ||
        (VAR_30->rcvlatency >= 0 && FUNC_1(VAR_28, VAR_29, VAR_18, "SRTO_RCVLATENCY", &VAR_33, sizeof(VAR_33)) < 0) ||
        (VAR_30->peerlatency >= 0 && FUNC_1(VAR_28, VAR_29, VAR_16, "SRTO_PEERLATENCY", &VAR_34, sizeof(VAR_34)) < 0) ||
        (VAR_30->tlpktdrop >= 0 && FUNC_1(VAR_28, VAR_29, VAR_24, "SRTO_TLPKDROP", &VAR_30->tlpktdrop, sizeof(VAR_30->tlpktdrop)) < 0) ||
        (VAR_30->nakreport >= 0 && FUNC_1(VAR_28, VAR_29, VAR_12, "SRTO_NAKREPORT", &VAR_30->nakreport, sizeof(VAR_30->nakreport)) < 0) ||
        (VAR_35 >= 0 && FUNC_1(VAR_28, VAR_29, VAR_2, "SRTO_CONNTIMEO", &VAR_35, sizeof(VAR_35)) <0 ) ||
        (VAR_30->sndbuf >= 0 && FUNC_1(VAR_28, VAR_29, VAR_22, "SRTO_SNDBUF", &VAR_30->sndbuf, sizeof(VAR_30->sndbuf)) < 0) ||
        (VAR_30->rcvbuf >= 0 && FUNC_1(VAR_28, VAR_29, VAR_17, "SRTO_RCVBUF", &VAR_30->rcvbuf, sizeof(VAR_30->rcvbuf)) < 0) ||
        (VAR_30->lossmaxttl >= 0 && FUNC_1(VAR_28, VAR_29, VAR_7, "SRTO_LOSSMAXTTL", &VAR_30->lossmaxttl, sizeof(VAR_30->lossmaxttl)) < 0) ||
        (VAR_30->minversion >= 0 && FUNC_1(VAR_28, VAR_29, VAR_10, "SRTO_MINVERSION", &VAR_30->minversion, sizeof(VAR_30->minversion)) < 0) ||
        (VAR_30->streamid && FUNC_1(VAR_28, VAR_29, VAR_23, "SRTO_STREAMID", VAR_30->streamid, FUNC_2(VAR_30->streamid)) < 0) ||
        (VAR_30->smoother && FUNC_1(VAR_28, VAR_29, VAR_21, "SRTO_SMOOTHER", VAR_30->smoother, FUNC_2(VAR_30->smoother)) < 0) ||
        (VAR_30->messageapi >= 0 && FUNC_1(VAR_28, VAR_29, VAR_9, "SRTO_MESSAGEAPI", &VAR_30->messageapi, sizeof(VAR_30->messageapi)) < 0) ||
        (VAR_30->payload_size >= 0 && FUNC_1(VAR_28, VAR_29, VAR_14, "SRTO_PAYLOADSIZE", &VAR_30->payload_size, sizeof(VAR_30->payload_size)) < 0) ||
        ((VAR_28->flags & VAR_0) && FUNC_1(VAR_28, VAR_29, VAR_20, "SRTO_SENDER", &VAR_31, sizeof(VAR_31)) < 0)) {
        return FUNC_0(VAR_1);
    }
    return 0;
}
