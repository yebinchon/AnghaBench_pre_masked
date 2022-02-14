
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int path ;
typedef int include_sources ;
typedef int hostname ;
typedef int exclude_sources ;
typedef int buf ;
struct TYPE_14__ {int is_streamed; int max_packet_size; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_16__ {int max_packet_size; } ;
struct TYPE_15__ {int rtcp_port; scalar_t__ ttl; int local_rtpport; int local_rtcpport; char* sources; char* block; char* fec_options_str; TYPE_4__* fec_hd; TYPE_4__* rtcp_hd; TYPE_4__* rtp_hd; void* rtcp_fd; void* rtp_fd; int filters; void* dscp; void* write_to_source; void* connect; void* pkt_size; } ;
typedef TYPE_2__ RTPContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int **,char const*,char*,char*,int ) ;
 int FUNC_3 (int **,char*,char*,int ) ;
 scalar_t__ FUNC_4 (char*,int,char*,char const*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const**,char*) ;
 int FUNC_7 (TYPE_1__*,int ,char*,...) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int *,int ,int *,int ,char*,int,int*,char*,int,char const*) ;
 int FUNC_10 (TYPE_2__*,char*,int,char*,int,int,char*,char*) ;
 int FUNC_11 (TYPE_1__*,char*,int *) ;
 int FUNC_12 (TYPE_1__*,char*,int *) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (char*,int,char*,int *,char*,int,int *) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__**) ;
 void* FUNC_17 (TYPE_4__*) ;
 scalar_t__ FUNC_18 (TYPE_4__**,char*,int,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_19 (char*,int,char*,scalar_t__) ;
 char* FUNC_20 (char const*,char) ;
 scalar_t__ FUNC_21 (char*,char*) ;
 int FUNC_22 (char*) ;
 void* FUNC_23 (char*,int *,int) ;

__attribute__((used)) static int FUNC_24(URLContext *VAR_3, const char *VAR_4, int VAR_5)
{
    RTPContext *VAR_6 = VAR_3->priv_data;
    AVDictionary *VAR_7 = ((void*)0);
    int VAR_8;
    char VAR_9[256], VAR_10[1024] = "", VAR_11[1024] = "";
    char *VAR_12 = VAR_10, *VAR_13 = VAR_11;
    char *VAR_14 = ((void*)0);
    char VAR_15[1024];
    char VAR_16[1024];
    const char *VAR_17;
    int VAR_18, VAR_19 = 3;
    int VAR_20;

    FUNC_9(((void*)0), 0, ((void*)0), 0, VAR_9, sizeof(VAR_9), &VAR_8,
                 VAR_16, sizeof(VAR_16), VAR_4);

    if (VAR_6->rtcp_port < 0)
        VAR_6->rtcp_port = VAR_8 + 1;

    VAR_17 = FUNC_20(VAR_4, '?');
    if (VAR_17) {
        if (FUNC_4(VAR_15, sizeof(VAR_15), "ttl", VAR_17)) {
            VAR_6->ttl = FUNC_23(VAR_15, ((void*)0), 10);
        }
        if (FUNC_4(VAR_15, sizeof(VAR_15), "rtcpport", VAR_17)) {
            VAR_6->rtcp_port = FUNC_23(VAR_15, ((void*)0), 10);
        }
        if (FUNC_4(VAR_15, sizeof(VAR_15), "localport", VAR_17)) {
            VAR_6->local_rtpport = FUNC_23(VAR_15, ((void*)0), 10);
        }
        if (FUNC_4(VAR_15, sizeof(VAR_15), "localrtpport", VAR_17)) {
            VAR_6->local_rtpport = FUNC_23(VAR_15, ((void*)0), 10);
        }
        if (FUNC_4(VAR_15, sizeof(VAR_15), "localrtcpport", VAR_17)) {
            VAR_6->local_rtcpport = FUNC_23(VAR_15, ((void*)0), 10);
        }
        if (FUNC_4(VAR_15, sizeof(VAR_15), "pkt_size", VAR_17)) {
            VAR_6->pkt_size = FUNC_23(VAR_15, ((void*)0), 10);
        }
        if (FUNC_4(VAR_15, sizeof(VAR_15), "connect", VAR_17)) {
            VAR_6->connect = FUNC_23(VAR_15, ((void*)0), 10);
        }
        if (FUNC_4(VAR_15, sizeof(VAR_15), "write_to_source", VAR_17)) {
            VAR_6->write_to_source = FUNC_23(VAR_15, ((void*)0), 10);
        }
        if (FUNC_4(VAR_15, sizeof(VAR_15), "dscp", VAR_17)) {
            VAR_6->dscp = FUNC_23(VAR_15, ((void*)0), 10);
        }
        if (FUNC_4(VAR_15, sizeof(VAR_15), "sources", VAR_17)) {
            FUNC_8(VAR_10, VAR_15, sizeof(VAR_10));
            FUNC_12(VAR_3, VAR_15, &VAR_6->filters);
        } else {
            FUNC_12(VAR_3, VAR_6->sources, &VAR_6->filters);
            VAR_12 = VAR_6->sources;
        }
        if (FUNC_4(VAR_15, sizeof(VAR_15), "block", VAR_17)) {
            FUNC_8(VAR_11, VAR_15, sizeof(VAR_11));
            FUNC_11(VAR_3, VAR_15, &VAR_6->filters);
        } else {
            FUNC_11(VAR_3, VAR_6->block, &VAR_6->filters);
            VAR_13 = VAR_6->block;
        }
    }

    if (VAR_6->fec_options_str) {
        VAR_17 = VAR_6->fec_options_str;

        if (!(VAR_14 = FUNC_6(&VAR_17, "="))) {
            FUNC_7(VAR_3, VAR_1, "Failed to parse the FEC protocol value\n");
            goto fail;
        }
        if (FUNC_21(VAR_14, "prompeg")) {
            FUNC_7(VAR_3, VAR_1, "Unsupported FEC protocol %s\n", VAR_14);
            goto fail;
        }

        VAR_17 = VAR_6->fec_options_str + FUNC_22(VAR_14);
        while (*VAR_17 && *VAR_17 == '=') VAR_17++;

        if (FUNC_2(&VAR_7, VAR_17, "=", ":", 0) < 0) {
            FUNC_7(VAR_3, VAR_1, "Failed to parse the FEC options\n");
            goto fail;
        }
        if (VAR_6->ttl > 0) {
            FUNC_19(VAR_15, sizeof (VAR_15), "%d", VAR_6->ttl);
            FUNC_3(&VAR_7, "ttl", VAR_15, 0);
        }
    }

    for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
        FUNC_10(VAR_6, VAR_15, sizeof(VAR_15),
                      VAR_9, VAR_8, VAR_6->local_rtpport,
                      VAR_12, VAR_13);
        if (FUNC_18(&VAR_6->rtp_hd, VAR_15, VAR_5, &VAR_3->interrupt_callback,
                                 ((void*)0), VAR_3->protocol_whitelist, VAR_3->protocol_blacklist, VAR_3) < 0)
            goto fail;
        VAR_6->local_rtpport = FUNC_13(VAR_6->rtp_hd);
        if(VAR_6->local_rtpport == 65535) {
            VAR_6->local_rtpport = -1;
            continue;
        }
        VAR_20 = VAR_5 | VAR_0;
        if (VAR_6->local_rtcpport < 0) {
            VAR_6->local_rtcpport = VAR_6->local_rtpport + 1;
            FUNC_10(VAR_6, VAR_15, sizeof(VAR_15),
                          VAR_9, VAR_6->rtcp_port, VAR_6->local_rtcpport,
                          VAR_12, VAR_13);
            if (FUNC_18(&VAR_6->rtcp_hd, VAR_15, VAR_20,
                                     &VAR_3->interrupt_callback, ((void*)0),
                                     VAR_3->protocol_whitelist, VAR_3->protocol_blacklist, VAR_3) < 0) {
                VAR_6->local_rtpport = VAR_6->local_rtcpport = -1;
                continue;
            }
            break;
        }
        FUNC_10(VAR_6, VAR_15, sizeof(VAR_15),
                      VAR_9, VAR_6->rtcp_port, VAR_6->local_rtcpport,
                      VAR_12, VAR_13);
        if (FUNC_18(&VAR_6->rtcp_hd, VAR_15, VAR_20, &VAR_3->interrupt_callback,
                                 ((void*)0), VAR_3->protocol_whitelist, VAR_3->protocol_blacklist, VAR_3) < 0)
            goto fail;
        break;
    }

    VAR_6->fec_hd = ((void*)0);
    if (VAR_14) {
        FUNC_14(VAR_15, sizeof(VAR_15), VAR_14, ((void*)0), VAR_9, VAR_8, ((void*)0));
        if (FUNC_18(&VAR_6->fec_hd, VAR_15, VAR_5, &VAR_3->interrupt_callback,
                             &VAR_7, VAR_3->protocol_whitelist, VAR_3->protocol_blacklist, VAR_3) < 0)
            goto fail;
    }



    VAR_6->rtp_fd = FUNC_17(VAR_6->rtp_hd);
    VAR_6->rtcp_fd = FUNC_17(VAR_6->rtcp_hd);

    VAR_3->max_packet_size = VAR_6->rtp_hd->max_packet_size;
    VAR_3->is_streamed = 1;

    FUNC_5(VAR_14);
    FUNC_1(&VAR_7);

    return 0;

 fail:
    if (VAR_6->rtp_hd)
        FUNC_15(VAR_6->rtp_hd);
    if (VAR_6->rtcp_hd)
        FUNC_15(VAR_6->rtcp_hd);
    FUNC_16(&VAR_6->fec_hd);
    FUNC_5(VAR_14);
    FUNC_1(&VAR_7);
    return FUNC_0(VAR_2);
}
