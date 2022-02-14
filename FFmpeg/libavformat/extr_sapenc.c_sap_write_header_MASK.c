
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int url ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct addrinfo {scalar_t__ ai_family; int member_0; } ;
struct SAPState {int ann_size; int* ann; TYPE_1__* ann_fd; } ;
typedef int socklen_t ;
typedef int path ;
typedef int localaddr ;
typedef int host ;
typedef int buf ;
typedef int announce_addr ;
struct TYPE_20__ {int max_packet_size; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_22__ {int value; } ;
struct TYPE_21__ {int nb_streams; scalar_t__ start_time_realtime; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; int metadata; TYPE_10__** streams; int url; struct SAPState* priv_data; } ;
struct TYPE_19__ {int time_base; TYPE_2__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVDictionaryEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_2 (int ,char*,int *,int ) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (TYPE_2__**) ;
 int FUNC_6 (TYPE_2__***) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (TYPE_2__*,int ,char*,...) ;
 int* FUNC_10 (int) ;
 TYPE_2__** FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (TYPE_2__**,int,char*,int) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int *,int ,int *,int ,char*,int,int*,char*,int,int ) ;
 int FUNC_16 (TYPE_2__*,char*) ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_2__**,TYPE_2__*,TYPE_10__*,TYPE_1__*,int ,int) ;
 int FUNC_19 (char*,int,char*,int *,char*,int,char*,int) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__**,char*,int ,int *,int *,int ,int ,int *) ;
 int FUNC_22 (struct addrinfo*) ;
 scalar_t__ FUNC_23 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_24 (int,struct sockaddr*,int*) ;
 int FUNC_25 (int*,int *,int) ;
 int FUNC_26 (TYPE_2__*) ;
 scalar_t__ FUNC_27 (char*) ;
 char* FUNC_28 (char*,char) ;
 int FUNC_29 (char*,int *,int) ;

__attribute__((used)) static int FUNC_30(AVFormatContext *VAR_10)
{
    struct SAPState *VAR_11 = VAR_10->priv_data;
    char VAR_12[1024], VAR_13[1024], VAR_14[1024], VAR_15[50] = "";
    char *VAR_16;
    int VAR_17 = 9875, VAR_18 = 5004, VAR_19, VAR_20 = 0, VAR_21 = 0, VAR_22 = 255;
    AVFormatContext **VAR_23 = ((void*)0);
    int VAR_24 = 0;
    struct sockaddr_storage VAR_25;
    socklen_t VAR_26 = sizeof(VAR_25);
    int VAR_27;
    AVDictionaryEntry* VAR_28 = FUNC_2(VAR_10->metadata, "title", ((void*)0), 0);

    if (!FUNC_17())
        return FUNC_0(VAR_8);


    FUNC_15(((void*)0), 0, ((void*)0), 0, VAR_12, sizeof(VAR_12), &VAR_18,
                 VAR_13, sizeof(VAR_13), VAR_10->url);
    if (VAR_18 < 0)
        VAR_18 = 5004;


    VAR_16 = FUNC_28(VAR_13, '?');
    if (VAR_16) {
        char VAR_29[50];
        if (FUNC_4(VAR_29, sizeof(VAR_29), "announce_port", VAR_16)) {
            VAR_17 = FUNC_29(VAR_29, ((void*)0), 10);
        }
        if (FUNC_4(VAR_29, sizeof(VAR_29), "same_port", VAR_16)) {
            VAR_21 = FUNC_29(VAR_29, ((void*)0), 10);
        }
        if (FUNC_4(VAR_29, sizeof(VAR_29), "ttl", VAR_16)) {
            VAR_22 = FUNC_29(VAR_29, ((void*)0), 10);
        }
        if (FUNC_4(VAR_29, sizeof(VAR_29), "announce_addr", VAR_16)) {
            FUNC_14(VAR_15, VAR_29, sizeof(VAR_15));
        }
    }

    if (!VAR_15[0]) {
        struct addrinfo VAR_30 = { 0 }, *VAR_31 = ((void*)0);
        VAR_30.ai_family = VAR_2;
        if (FUNC_23(VAR_12, ((void*)0), &VAR_30, &VAR_31)) {
            FUNC_9(VAR_10, VAR_5, "Unable to resolve %s\n", VAR_12);
            VAR_24 = FUNC_0(VAR_8);
            goto fail;
        }
        if (VAR_31->ai_family == VAR_0) {

            FUNC_14(VAR_15, "224.2.127.254", sizeof(VAR_15));







        } else {
            FUNC_22(VAR_31);
            FUNC_9(VAR_10, VAR_5, "Host %s resolved to unsupported "
                                    "address family\n", VAR_12);
            VAR_24 = FUNC_0(VAR_8);
            goto fail;
        }
        FUNC_22(VAR_31);
    }

    VAR_23 = FUNC_11(VAR_10->nb_streams, sizeof(AVFormatContext*));
    if (!VAR_23) {
        VAR_24 = FUNC_0(VAR_9);
        goto fail;
    }

    if (VAR_10->start_time_realtime == 0 || VAR_10->start_time_realtime == VAR_7)
        VAR_10->start_time_realtime = FUNC_8();
    for (VAR_19 = 0; VAR_19 < VAR_10->nb_streams; VAR_19++) {
        URLContext *VAR_32;
        char *VAR_33;

        FUNC_19(VAR_14, sizeof(VAR_14), "rtp", ((void*)0), VAR_12, VAR_18,
                    "?ttl=%d", VAR_22);
        if (!VAR_21)
            VAR_18 += 2;
        VAR_24 = FUNC_21(&VAR_32, VAR_14, VAR_4,
                                   &VAR_10->interrupt_callback, ((void*)0),
                                   VAR_10->protocol_whitelist, VAR_10->protocol_blacklist, ((void*)0));
        if (VAR_24) {
            VAR_24 = FUNC_0(VAR_8);
            goto fail;
        }
        VAR_24 = FUNC_18(&VAR_23[VAR_19], VAR_10, VAR_10->streams[VAR_19], VAR_32, 0, VAR_19);
        if (VAR_24 < 0)
            goto fail;
        VAR_10->streams[VAR_19]->priv_data = VAR_23[VAR_19];
        VAR_10->streams[VAR_19]->time_base = VAR_23[VAR_19]->streams[0]->time_base;
        VAR_33 = FUNC_13(VAR_14);
        if (!VAR_33) {
            VAR_24 = FUNC_0(VAR_9);
            goto fail;
        }
        FUNC_16(VAR_23[VAR_19], VAR_33);
    }

    if (VAR_10->nb_streams > 0 && VAR_28)
        FUNC_3(&VAR_23[0]->metadata, "title", VAR_28->value, 0);

    FUNC_19(VAR_14, sizeof(VAR_14), "udp", ((void*)0), VAR_15, VAR_17,
                "?ttl=%d&connect=1", VAR_22);
    VAR_24 = FUNC_21(&VAR_11->ann_fd, VAR_14, VAR_4,
                               &VAR_10->interrupt_callback, ((void*)0),
                               VAR_10->protocol_whitelist, VAR_10->protocol_blacklist, ((void*)0));
    if (VAR_24) {
        VAR_24 = FUNC_0(VAR_8);
        goto fail;
    }

    VAR_27 = FUNC_20(VAR_11->ann_fd);
    if (FUNC_24(VAR_27, (struct sockaddr*) &VAR_25, &VAR_26)) {
        VAR_24 = FUNC_0(VAR_8);
        goto fail;
    }
    if (VAR_25.ss_family != VAR_0



        ) {
        FUNC_9(VAR_10, VAR_5, "Unsupported protocol family\n");
        VAR_24 = FUNC_0(VAR_8);
        goto fail;
    }
    VAR_11->ann_size = 8192;
    VAR_11->ann = FUNC_10(VAR_11->ann_size);
    if (!VAR_11->ann) {
        VAR_24 = FUNC_0(VAR_8);
        goto fail;
    }
    VAR_11->ann[VAR_20] = (1 << 5);




    VAR_20++;
    VAR_11->ann[VAR_20++] = 0;
    FUNC_1(&VAR_11->ann[VAR_20], FUNC_7());
    VAR_20 += 2;
    if (VAR_25.ss_family == VAR_0) {
        FUNC_25(&VAR_11->ann[VAR_20], &((struct sockaddr_in*)&VAR_25)->sin_addr,
               sizeof(struct in_addr));
        VAR_20 += sizeof(struct in_addr);






    }

    FUNC_14(&VAR_11->ann[VAR_20], "application/sdp", VAR_11->ann_size - VAR_20);
    VAR_20 += FUNC_27(&VAR_11->ann[VAR_20]) + 1;

    if (FUNC_12(VAR_23, VAR_10->nb_streams, &VAR_11->ann[VAR_20],
                      VAR_11->ann_size - VAR_20)) {
        VAR_24 = VAR_3;
        goto fail;
    }
    FUNC_6(&VAR_23);
    FUNC_9(VAR_10, VAR_6, "SDP:\n%s\n", &VAR_11->ann[VAR_20]);
    VAR_20 += FUNC_27(&VAR_11->ann[VAR_20]);
    VAR_11->ann_size = VAR_20;

    if (VAR_11->ann_size > VAR_11->ann_fd->max_packet_size) {
        FUNC_9(VAR_10, VAR_5, "Announcement too large to send in one "
                                "packet\n");
        goto fail;
    }

    return 0;

fail:
    FUNC_5(VAR_23);
    FUNC_26(VAR_10);
    return VAR_24;
}
