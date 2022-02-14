
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uri ;
typedef int tcpname ;
typedef int rbuf ;
typedef int proto ;
typedef int path ;
typedef int method ;
typedef int host ;
typedef enum RTSPMethod { ____Placeholder_RTSPMethod } RTSPMethod ;
typedef int auth ;
struct TYPE_12__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; int url; TYPE_1__* priv_data; } ;
struct TYPE_11__ {int initial_timeout; int rtsp_hd; int state; int rtsp_hd_out; int control_uri; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ AVFormatContext ;


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
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (char*,int,char*,int,char*,int,int*,char*,int,int ) ;
 int FUNC_2 (char*,int,char const*,int *,char*,int,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ,int *,int *,int ,int ,int *) ;
 int FUNC_5 (TYPE_2__*,unsigned char*,int,char*,int,unsigned char*,int,int*) ;
 int FUNC_6 (TYPE_2__*,unsigned char*,int,int*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char*,char*) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_11)
{
    RTSPState *VAR_12 = VAR_11->priv_data;
    char VAR_13[128], VAR_14[128], VAR_15[512], VAR_16[128];
    char VAR_17[500];
    int VAR_18;
    int VAR_19 = VAR_7;
    char VAR_20[500];
    const char *VAR_21 = "tcp";
    unsigned char VAR_22[4096];
    unsigned char VAR_23[10];
    int VAR_24 = 0;
    int VAR_25;
    enum RTSPMethod VAR_26;


    FUNC_1(VAR_13, sizeof(VAR_13), VAR_16, sizeof(VAR_16), VAR_14, sizeof(VAR_14),
                 &VAR_18, VAR_15, sizeof(VAR_15), VAR_11->url);


    FUNC_2(VAR_12->control_uri, sizeof(VAR_12->control_uri), VAR_13, ((void*)0), VAR_14,
                VAR_18, "%s", VAR_15);

    if (!FUNC_11(VAR_13, "rtsps")) {
        VAR_21 = "tls";
        VAR_19 = VAR_6;
    }

    if (VAR_18 < 0)
        VAR_18 = VAR_19;


    FUNC_2(VAR_20, sizeof(VAR_20), VAR_21, ((void*)0), VAR_14, VAR_18,
                "?listen&listen_timeout=%d", VAR_12->initial_timeout * 1000);

    if ((VAR_25 = FUNC_4(&VAR_12->rtsp_hd, VAR_20, VAR_2,
                                   &VAR_11->interrupt_callback, ((void*)0),
                                   VAR_11->protocol_whitelist, VAR_11->protocol_blacklist, ((void*)0)))) {
        FUNC_0(VAR_11, VAR_3, "Unable to open RTSP for listening\n");
        return VAR_25;
    }
    VAR_12->state = VAR_8;
    VAR_12->rtsp_hd_out = VAR_12->rtsp_hd;
    for (;;) {
        VAR_25 = FUNC_6(VAR_11, VAR_22, sizeof(VAR_22), &VAR_24);
        if (VAR_25 < 0)
            return VAR_25;
        VAR_25 = FUNC_5(VAR_11, VAR_22, VAR_24, VAR_17, sizeof(VAR_17), VAR_23,
                                 sizeof(VAR_23), &VAR_26);
        if (VAR_25) {
            FUNC_0(VAR_11, VAR_3, "RTSP: Unexpected Command\n");
            return VAR_25;
        }

        if (VAR_26 == VAR_0) {
            VAR_25 = FUNC_7(VAR_11);
            VAR_12->state = VAR_9;
        } else if (VAR_26 == VAR_4) {
            VAR_25 = FUNC_8(VAR_11);
        } else if (VAR_26 == VAR_5) {
            VAR_25 = FUNC_9(VAR_11);
            if (!VAR_25)
                return 0;
        } else if (VAR_26 == VAR_10)
            VAR_25 = FUNC_10(VAR_11, VAR_14, VAR_17);
        if (VAR_25) {
            FUNC_3(VAR_12->rtsp_hd);
            return VAR_1;
        }
    }
}
