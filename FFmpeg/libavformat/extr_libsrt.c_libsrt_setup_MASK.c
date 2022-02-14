
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct addrinfo {struct addrinfo* ai_next; int ai_addrlen; int ai_addr; int ai_socktype; int ai_family; int ai_flags; int member_0; } ;
typedef int proto ;
typedef int portstr ;
typedef int path ;
typedef int packet_size ;
typedef int hostname ;
typedef int buf ;
struct TYPE_11__ {int rw_timeout; int max_packet_size; int is_streamed; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_12__ {int eid; scalar_t__ rw_timeout; scalar_t__ mode; scalar_t__ recv_buffer_size; scalar_t__ send_buffer_size; int fd; void* listen_timeout; } ;
typedef TYPE_2__ SRTContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (char*,int,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;
 int FUNC_3 (char*,int,int *,int ,char*,int,int*,char*,int,char const*) ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (TYPE_1__*,int,int ,char*,int*,int*) ;
 int FUNC_8 (int,int,int ,int ,TYPE_1__*,int) ;
 int FUNC_9 (int,int,int ,int ,int,TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (char*,int,char*,int) ;
 int FUNC_14 (int,int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 (int,int ,int ,scalar_t__*,int) ;
 int FUNC_18 (int ,int ,int ) ;
 char* FUNC_19 (char const*,char) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 void* FUNC_21 (char*,int *,int) ;

__attribute__((used)) static int FUNC_22(URLContext *VAR_14, const char *VAR_15, int VAR_16)
{
    struct addrinfo VAR_17 = { 0 }, *VAR_18, *VAR_19;
    int VAR_20, VAR_21 = -1;
    SRTContext *VAR_22 = VAR_14->priv_data;
    const char *VAR_23;
    char VAR_24[256];
    int VAR_25;
    char VAR_26[1024],VAR_27[1024],VAR_28[1024];
    char VAR_29[10];
    int VAR_30 = 5000000;
    int VAR_31;

    VAR_31 = FUNC_16();
    if (VAR_31 < 0)
        return FUNC_10(VAR_14);
    VAR_22->eid = VAR_31;

    FUNC_3(VAR_27, sizeof(VAR_27), ((void*)0), 0, VAR_26, sizeof(VAR_26),
        &VAR_20, VAR_28, sizeof(VAR_28), VAR_15);
    if (FUNC_20(VAR_27, "srt"))
        return FUNC_0(VAR_5);
    if (VAR_20 <= 0 || VAR_20 >= 65536) {
        FUNC_2(VAR_14, VAR_4, "Port missing in uri\n");
        return FUNC_0(VAR_5);
    }
    VAR_23 = FUNC_19(VAR_15, '?');
    if (VAR_23) {
        if (FUNC_1(VAR_24, sizeof(VAR_24), "timeout", VAR_23)) {
            VAR_22->rw_timeout = FUNC_21(VAR_24, ((void*)0), 10);
        }
        if (FUNC_1(VAR_24, sizeof(VAR_24), "listen_timeout", VAR_23)) {
            VAR_22->listen_timeout = FUNC_21(VAR_24, ((void*)0), 10);
        }
    }
    if (VAR_22->rw_timeout >= 0) {
        VAR_30 = VAR_14->rw_timeout = VAR_22->rw_timeout;
    }
    VAR_17.ai_family = VAR_0;
    VAR_17.ai_socktype = VAR_7;
    FUNC_13(VAR_29, sizeof(VAR_29), "%d", VAR_20);
    if (VAR_22->mode == VAR_12)
        VAR_17.ai_flags |= VAR_1;
    VAR_25 = FUNC_6(VAR_26[0] ? VAR_26 : ((void*)0), VAR_29, &VAR_17, &VAR_18);
    if (VAR_25) {
        FUNC_2(VAR_14, VAR_4,
               "Failed to resolve hostname %s: %s\n",
               VAR_26, FUNC_5(VAR_25));
        return FUNC_0(VAR_6);
    }

    VAR_19 = VAR_18;

 restart:

    VAR_21 = FUNC_18(VAR_19->ai_family, VAR_19->ai_socktype, 0);
    if (VAR_21 < 0) {
        VAR_25 = FUNC_10(VAR_14);
        goto fail;
    }

    if ((VAR_25 = FUNC_12(VAR_14, VAR_21)) < 0) {
        goto fail;
    }



    if (VAR_22->recv_buffer_size > 0) {
        FUNC_17(VAR_21, VAR_8, VAR_10, &VAR_22->recv_buffer_size, sizeof (VAR_22->recv_buffer_size));
    }
    if (VAR_22->send_buffer_size > 0) {
        FUNC_17(VAR_21, VAR_8, VAR_11, &VAR_22->send_buffer_size, sizeof (VAR_22->send_buffer_size));
    }
    if (VAR_22->mode == VAR_12) {

        if ((VAR_25 = FUNC_8(VAR_22->eid, VAR_21, VAR_19->ai_addr, VAR_19->ai_addrlen, VAR_14, VAR_30 / 1000)) < 0)
            goto fail1;
        VAR_21 = VAR_25;
    } else {
        if (VAR_22->mode == VAR_13) {
            VAR_25 = FUNC_14(VAR_21, VAR_19->ai_addr, VAR_19->ai_addrlen);
            if (VAR_25)
                goto fail1;
        }

        if ((VAR_25 = FUNC_9(VAR_22->eid, VAR_21, VAR_19->ai_addr, VAR_19->ai_addrlen,
                                          VAR_30 / 1000, VAR_14, !!VAR_19->ai_next)) < 0) {
            if (VAR_25 == VAR_2)
                goto fail1;
            else
                goto fail;
        }
    }
    if ((VAR_25 = FUNC_11(VAR_14, VAR_21)) < 0) {
        goto fail;
    }

    if (VAR_16 & VAR_3) {
        int VAR_32 = 0;
        int VAR_33 = sizeof(VAR_32);
        VAR_25 = FUNC_7(VAR_14, VAR_21, VAR_9, "SRTO_PAYLOADSIZE", &VAR_32, &VAR_33);
        if (VAR_25 < 0)
            goto fail1;
        if (VAR_32 > 0)
            VAR_14->max_packet_size = VAR_32;
    }

    VAR_14->is_streamed = 1;
    VAR_22->fd = VAR_21;

    FUNC_4(VAR_18);
    return 0;

 fail:
    if (VAR_19->ai_next) {

        VAR_19 = VAR_19->ai_next;
        if (VAR_21 >= 0)
            FUNC_15(VAR_21);
        VAR_25 = 0;
        goto restart;
    }
 fail1:
    if (VAR_21 >= 0)
        FUNC_15(VAR_21);
    FUNC_4(VAR_18);
    return VAR_25;
}
