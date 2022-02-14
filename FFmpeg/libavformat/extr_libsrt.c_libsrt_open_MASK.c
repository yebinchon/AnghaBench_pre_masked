
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {void* streamid; void* smoother; int transtype; void* messageapi; void* minversion; void* lossmaxttl; void* rcvbuf; void* sndbuf; int mode; void* payload_size; void* connect_timeout; void* nakreport; void* tlpktdrop; void* peerlatency; void* rcvlatency; void* latency; void* oheadbw; void* inputbw; void* iptos; void* ipttl; void* ffs; void* mss; int passphrase; void* pbkeylen; void* maxbw; } ;
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
 scalar_t__ FUNC_1 (char*,int,char*,char const*) ;
 int FUNC_2 (void**) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__*,char const*,int) ;
 scalar_t__ FUNC_6 () ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 void* FUNC_10 (char*,int *,int) ;
 void* FUNC_11 (char*,int *,int) ;

__attribute__((used)) static int FUNC_12(URLContext *VAR_9, const char *VAR_10, int VAR_11)
{
    SRTContext *VAR_12 = VAR_9->priv_data;
    const char * VAR_13;
    char VAR_14[256];
    int VAR_15 = 0;

    if (FUNC_6() < 0) {
        return VAR_0;
    }


    VAR_13 = FUNC_7(VAR_10, '?');
    if (VAR_13) {
        if (FUNC_1(VAR_14, sizeof(VAR_14), "maxbw", VAR_13)) {
            VAR_12->maxbw = FUNC_11(VAR_14, ((void*)0), 0);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "pbkeylen", VAR_13)) {
            VAR_12->pbkeylen = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "passphrase", VAR_13)) {
            VAR_12->passphrase = FUNC_4(VAR_14, FUNC_9(VAR_14));
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "mss", VAR_13)) {
            VAR_12->mss = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "ffs", VAR_13)) {
            VAR_12->ffs = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "ipttl", VAR_13)) {
            VAR_12->ipttl = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "iptos", VAR_13)) {
            VAR_12->iptos = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "inputbw", VAR_13)) {
            VAR_12->inputbw = FUNC_11(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "oheadbw", VAR_13)) {
            VAR_12->oheadbw = FUNC_11(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "latency", VAR_13)) {
            VAR_12->latency = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "tsbpddelay", VAR_13)) {
            VAR_12->latency = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "rcvlatency", VAR_13)) {
            VAR_12->rcvlatency = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "peerlatency", VAR_13)) {
            VAR_12->peerlatency = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "tlpktdrop", VAR_13)) {
            VAR_12->tlpktdrop = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "nakreport", VAR_13)) {
            VAR_12->nakreport = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "connect_timeout", VAR_13)) {
            VAR_12->connect_timeout = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "payload_size", VAR_13) ||
            FUNC_1(VAR_14, sizeof(VAR_14), "pkt_size", VAR_13)) {
            VAR_12->payload_size = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "mode", VAR_13)) {
            if (!FUNC_8(VAR_14, "caller")) {
                VAR_12->mode = VAR_6;
            } else if (!FUNC_8(VAR_14, "listener")) {
                VAR_12->mode = VAR_7;
            } else if (!FUNC_8(VAR_14, "rendezvous")) {
                VAR_12->mode = VAR_8;
            } else {
                return FUNC_0(VAR_2);
            }
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "sndbuf", VAR_13)) {
            VAR_12->sndbuf = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "rcvbuf", VAR_13)) {
            VAR_12->rcvbuf = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "lossmaxttl", VAR_13)) {
            VAR_12->lossmaxttl = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "minversion", VAR_13)) {
            VAR_12->minversion = FUNC_10(VAR_14, ((void*)0), 0);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "streamid", VAR_13)) {
            FUNC_2(&VAR_12->streamid);
            VAR_12->streamid = FUNC_3(VAR_14);
            if (!VAR_12->streamid) {
                VAR_15 = FUNC_0(VAR_3);
                goto err;
            }
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "smoother", VAR_13)) {
            FUNC_2(&VAR_12->smoother);
            VAR_12->smoother = FUNC_3(VAR_14);
            if(!VAR_12->smoother) {
                VAR_15 = FUNC_0(VAR_3);
                goto err;
            }
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "messageapi", VAR_13)) {
            VAR_12->messageapi = FUNC_10(VAR_14, ((void*)0), 10);
        }
        if (FUNC_1(VAR_14, sizeof(VAR_14), "transtype", VAR_13)) {
            if (!FUNC_8(VAR_14, "live")) {
                VAR_12->transtype = VAR_5;
            } else if (!FUNC_8(VAR_14, "file")) {
                VAR_12->transtype = VAR_4;
            } else {
                VAR_15 = FUNC_0(VAR_1);
                goto err;
            }
        }
    }
    return FUNC_5(VAR_9, VAR_10, VAR_11);
err:
    FUNC_2(&VAR_12->smoother);
    FUNC_2(&VAR_12->streamid);
    return VAR_15;
}
