
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct addrinfo {int ai_flags; int member_0; } ;
typedef int proxy_host ;
typedef int proxy_auth ;
typedef int opts ;
typedef int dest ;
typedef int buf ;
struct TYPE_7__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int listen; char* underlying_host; int numerichost; int tcp; scalar_t__ host; } ;
typedef TYPE_2__ TLSShared ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int *) ;
 int FUNC_4 (int *,int ,char*,int,char*,int,int*,int *,int ,char const*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,char*,char*,int,char*,...) ;
 int FUNC_7 (int *,char*,int ,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_8 (struct addrinfo*) ;
 int FUNC_9 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*,char const*) ;
 int FUNC_12 (char*,int,char*) ;
 char* FUNC_13 (char const*,char) ;

int FUNC_14(TLSShared *VAR_3, URLContext *VAR_4, const char *VAR_5, AVDictionary **VAR_6)
{
    int VAR_7;
    const char *VAR_8;
    char VAR_9[200], VAR_10[50] = "";
    struct addrinfo VAR_11 = { 0 }, *VAR_12 = ((void*)0);
    const char *VAR_13;
    int VAR_14;

    FUNC_11(VAR_3, VAR_5);

    if (VAR_3->listen)
        FUNC_12(VAR_10, sizeof(VAR_10), "?listen=1");

    FUNC_4(((void*)0), 0, ((void*)0), 0, VAR_3->underlying_host, sizeof(VAR_3->underlying_host), &VAR_7, ((void*)0), 0, VAR_5);

    VAR_8 = FUNC_13(VAR_5, '?');

    if (!VAR_8) {
        VAR_8 = VAR_10;
    } else {
        if (FUNC_1(VAR_10, sizeof(VAR_10), "listen", VAR_8))
            VAR_3->listen = 1;
    }

    FUNC_6(VAR_9, sizeof(VAR_9), "tcp", ((void*)0), VAR_3->underlying_host, VAR_7, "%s", VAR_8);

    VAR_11.ai_flags = VAR_0;
    if (!FUNC_9(VAR_3->underlying_host, ((void*)0), &VAR_11, &VAR_12)) {
        VAR_3->numerichost = 1;
        FUNC_8(VAR_12);
    }

    if (!VAR_3->host && !(VAR_3->host = FUNC_2(VAR_3->underlying_host)))
        return FUNC_0(VAR_2);

    VAR_13 = FUNC_10("http_proxy");
    VAR_14 = !FUNC_5(FUNC_10("no_proxy"), VAR_3->underlying_host) &&
                VAR_13 && FUNC_3(VAR_13, "http://", ((void*)0));

    if (VAR_14) {
        char VAR_15[200], VAR_16[200], VAR_17[200];
        int VAR_18;
        FUNC_4(((void*)0), 0, VAR_16, sizeof(VAR_16),
                     VAR_15, sizeof(VAR_15), &VAR_18, ((void*)0), 0,
                     VAR_13);
        FUNC_6(VAR_17, sizeof(VAR_17), ((void*)0), ((void*)0), VAR_3->underlying_host, VAR_7, ((void*)0));
        FUNC_6(VAR_9, sizeof(VAR_9), "httpproxy", VAR_16, VAR_15,
                    VAR_18, "/%s", VAR_17);
    }

    return FUNC_7(&VAR_3->tcp, VAR_9, VAR_1,
                                &VAR_4->interrupt_callback, VAR_6,
                                VAR_4->protocol_whitelist, VAR_4->protocol_blacklist, VAR_4);
}
