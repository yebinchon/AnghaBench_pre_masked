
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; scalar_t__ ai_addr; struct addrinfo* ai_next; int ai_protocol; int ai_socktype; int ai_flags; int member_0; } ;
typedef int proto ;
typedef int portstr ;
typedef int path ;
typedef int hostname ;
typedef int buf ;
struct TYPE_10__ {int rw_timeout; int is_streamed; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {int open_timeout; int listen; scalar_t__ rw_timeout; int fd; void* listen_timeout; } ;
typedef TYPE_2__ TCPContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (char*,int,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;
 int FUNC_3 (char*,int,int *,int ,char*,int,int*,char*,int,char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (struct addrinfo*,int,int,TYPE_1__*,int*,int (*) (TYPE_2__*,int),TYPE_2__*) ;
 int FUNC_7 (int,scalar_t__,int ) ;
 int FUNC_8 (int,scalar_t__,int ,void*,TYPE_1__*) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (struct addrinfo*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (char*,int,char*,int) ;
 char* FUNC_16 (char const*,char) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 void* FUNC_18 (char*,char**,int) ;

__attribute__((used)) static int FUNC_19(URLContext *VAR_7, const char *VAR_8, int VAR_9)
{
    struct addrinfo VAR_10 = { 0 }, *VAR_11, *VAR_12;
    int VAR_13, VAR_14 = -1;
    TCPContext *VAR_15 = VAR_7->priv_data;
    const char *VAR_16;
    char VAR_17[256];
    int VAR_18;
    char VAR_19[1024],VAR_20[1024],VAR_21[1024];
    char VAR_22[10];
    VAR_15->open_timeout = 5000000;

    FUNC_3(VAR_20, sizeof(VAR_20), ((void*)0), 0, VAR_19, sizeof(VAR_19),
        &VAR_13, VAR_21, sizeof(VAR_21), VAR_8);
    if (FUNC_17(VAR_20, "tcp"))
        return FUNC_0(VAR_4);
    if (VAR_13 <= 0 || VAR_13 >= 65536) {
        FUNC_2(VAR_7, VAR_3, "Port missing in uri\n");
        return FUNC_0(VAR_4);
    }
    VAR_16 = FUNC_16(VAR_8, '?');
    if (VAR_16) {
        if (FUNC_1(VAR_17, sizeof(VAR_17), "listen", VAR_16)) {
            char *VAR_23 = ((void*)0);
            VAR_15->listen = FUNC_18(VAR_17, &VAR_23, 10);

            if (VAR_17 == VAR_23)
                VAR_15->listen = 1;
        }
        if (FUNC_1(VAR_17, sizeof(VAR_17), "timeout", VAR_16)) {
            VAR_15->rw_timeout = FUNC_18(VAR_17, ((void*)0), 10);
        }
        if (FUNC_1(VAR_17, sizeof(VAR_17), "listen_timeout", VAR_16)) {
            VAR_15->listen_timeout = FUNC_18(VAR_17, ((void*)0), 10);
        }
    }
    if (VAR_15->rw_timeout >= 0) {
        VAR_15->open_timeout =
        VAR_7->rw_timeout = VAR_15->rw_timeout;
    }
    VAR_10.ai_family = VAR_1;
    VAR_10.ai_socktype = VAR_6;
    FUNC_15(VAR_22, sizeof(VAR_22), "%d", VAR_13);
    if (VAR_15->listen)
        VAR_10.ai_flags |= VAR_2;
    if (!VAR_19[0])
        VAR_18 = FUNC_13(((void*)0), VAR_22, &VAR_10, &VAR_11);
    else
        VAR_18 = FUNC_13(VAR_19, VAR_22, &VAR_10, &VAR_11);
    if (VAR_18) {
        FUNC_2(VAR_7, VAR_3,
               "Failed to resolve hostname %s: %s\n",
               VAR_19, FUNC_12(VAR_18));
        return FUNC_0(VAR_5);
    }

    VAR_12 = VAR_11;
    if (VAR_15->listen > 0) {
        while (VAR_12 && VAR_14 < 0) {
            VAR_14 = FUNC_10(VAR_12->ai_family,
                           VAR_12->ai_socktype,
                           VAR_12->ai_protocol);
            if (VAR_14 < 0) {
                VAR_18 = FUNC_9();
                VAR_12 = VAR_12->ai_next;
            }
        }
        if (VAR_14 < 0)
            goto fail1;
        FUNC_5(VAR_15, VAR_14);
    }

    if (VAR_15->listen == 2) {

        if ((VAR_18 = FUNC_7(VAR_14, VAR_12->ai_addr, VAR_12->ai_addrlen)) < 0)
            goto fail1;
    } else if (VAR_15->listen == 1) {

        if ((VAR_18 = FUNC_8(VAR_14, VAR_12->ai_addr, VAR_12->ai_addrlen,
                                  VAR_15->listen_timeout, VAR_7)) < 0)
            goto fail1;

        VAR_14 = VAR_18;
    } else {
        VAR_18 = FUNC_6(VAR_11, VAR_15->open_timeout / 1000, 3, VAR_7, &VAR_14, FUNC_5, VAR_15);
        if (VAR_18 < 0)
            goto fail1;
    }

    VAR_7->is_streamed = 1;
    VAR_15->fd = VAR_14;

    FUNC_11(VAR_11);
    return 0;

 fail1:
    if (VAR_14 >= 0)
        FUNC_4(VAR_14);
    FUNC_11(VAR_11);
    return VAR_18;
}
