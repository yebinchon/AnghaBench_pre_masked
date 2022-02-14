
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tcpname ;
struct TYPE_11__ {int is_streamed; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_13__ {int header_parsed; int mms_hd; int stream_num; int asf_packet_len; } ;
struct TYPE_12__ {int packet_id; int header_packet_id; int incoming_flags; int host; int path; TYPE_3__ mms; } ;
typedef TYPE_2__ MMSTContext ;
typedef TYPE_3__ MMSContext ;


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
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (int *,int ,int *,int ,int ,int,int*,int ,int,char const*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,int,char*,int *,int ,int,int *) ;
 int FUNC_6 (int *,char*,int ,int *,int *,int ,int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,int *,int ) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_19, const char *VAR_20, int VAR_21)
{
    MMSTContext *VAR_22 = VAR_19->priv_data;
    MMSContext *VAR_23;
    int VAR_24, VAR_25;
    char VAR_26[256];

    VAR_19->is_streamed = 1;
    VAR_23 = &VAR_22->mms;


    FUNC_2(((void*)0), 0, ((void*)0), 0,
            VAR_22->host, sizeof(VAR_22->host), &VAR_24, VAR_22->path,
            sizeof(VAR_22->path), VAR_20);

    if(VAR_24<0)
        VAR_24 = 1755;


    FUNC_5(VAR_26, sizeof(VAR_26), "tcp", ((void*)0), VAR_22->host, VAR_24, ((void*)0));
    VAR_25 = FUNC_6(&VAR_23->mms_hd, VAR_26, VAR_0,
                               &VAR_19->interrupt_callback, ((void*)0),
                               VAR_19->protocol_whitelist, VAR_19->protocol_blacklist, VAR_19);
    if (VAR_25)
        goto fail;

    VAR_22->packet_id = 3;
    VAR_22->header_packet_id = 2;
    VAR_25 = FUNC_8(VAR_22, VAR_16, VAR_5);
    if (VAR_25)
        goto fail;
    VAR_25 = FUNC_8(VAR_22, VAR_18, VAR_11);
    if (VAR_25)
        goto fail;
    VAR_25 = FUNC_8(VAR_22, VAR_15, VAR_9);
    if (VAR_25)
        goto fail;
    VAR_25 = FUNC_8(VAR_22, VAR_12, VAR_7);
    if (VAR_25)
        goto fail;
    VAR_25 = FUNC_8(VAR_22, VAR_13, VAR_6);
    if (VAR_25)
        goto fail;
    VAR_25 = FUNC_8(VAR_22, ((void*)0), VAR_4);
    if (VAR_25)
        goto fail;
    if((VAR_22->incoming_flags != 0X08) && (VAR_22->incoming_flags != 0X0C)) {
        FUNC_1(VAR_19, VAR_1,
               "The server does not support MMST (try MMSH or RTSP)\n");
        VAR_25 = FUNC_0(VAR_3);
        goto fail;
    }
    VAR_25 = FUNC_4(VAR_23);
    if (VAR_25) {
        FUNC_1(VAR_19, VAR_2, "asf header parsed failed!\n");
        goto fail;
    }
    VAR_23->header_parsed = 1;

    if (!VAR_23->asf_packet_len || !VAR_23->stream_num)
        goto fail;

    FUNC_3(VAR_23);
    VAR_25 = FUNC_8(VAR_22, VAR_17, VAR_10);
    if (VAR_25)
        goto fail;

    VAR_25 = FUNC_8(VAR_22, VAR_14, VAR_8);
    if (VAR_25) {
        goto fail;
    }
    FUNC_1(VAR_19, VAR_2, "Leaving open (success)\n");
    return 0;
fail:
    FUNC_7(VAR_19);
    FUNC_1(VAR_23->mms_hd, VAR_2, "Leaving open (failure: %d)\n", VAR_25);
    return VAR_25;
}
