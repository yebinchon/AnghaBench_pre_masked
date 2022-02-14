
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int urlbuf ;
typedef int proxyauth ;
typedef int proto ;
typedef int path1 ;
typedef int hoststr ;
typedef int hostname ;
typedef int buf ;
typedef int auth ;
struct TYPE_6__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {char const* location; char* http_proxy; int hd; } ;
typedef TYPE_2__ HTTPContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int *) ;
 int FUNC_1 (char*,int,char*,int,char*,int,int*,char*,int,char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char const*,int *,char*,int,char*,...) ;
 int FUNC_4 (int *,char*,int ,int *,int **,int ,int ,TYPE_1__*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,char const*,char const*,char*,char*,char*,int*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(URLContext *VAR_2, AVDictionary **VAR_3)
{
    const char *VAR_4, *VAR_5, *VAR_6 = "tcp", *VAR_7;
    char VAR_8[1024], VAR_9[1024], VAR_10[10];
    char VAR_11[1024], VAR_12[1024] = "";
    char VAR_13[VAR_1];
    char VAR_14[1024], VAR_15[VAR_1];
    int VAR_16, VAR_17, VAR_18, VAR_19 = 0;
    HTTPContext *VAR_20 = VAR_2->priv_data;

    FUNC_1(VAR_10, sizeof(VAR_10), VAR_11, sizeof(VAR_11),
                 VAR_8, sizeof(VAR_8), &VAR_16,
                 VAR_13, sizeof(VAR_13), VAR_20->location);
    FUNC_3(VAR_9, sizeof(VAR_9), ((void*)0), ((void*)0), VAR_8, VAR_16, ((void*)0));

    VAR_5 = VAR_20->http_proxy ? VAR_20->http_proxy : FUNC_5("http_proxy");
    VAR_17 = !FUNC_2(FUNC_5("no_proxy"), VAR_8) &&
                 VAR_5 && FUNC_0(VAR_5, "http://", ((void*)0));

    if (!FUNC_7(VAR_10, "https")) {
        VAR_6 = "tls";
        VAR_17 = 0;
        if (VAR_16 < 0)
            VAR_16 = 443;
    }
    if (VAR_16 < 0)
        VAR_16 = 80;

    if (VAR_13[0] == '\0')
        VAR_4 = "/";
    else
        VAR_4 = VAR_13;
    VAR_7 = VAR_4;
    if (VAR_17) {


        FUNC_3(VAR_15, sizeof(VAR_15), VAR_10, ((void*)0), VAR_8, VAR_16, "%s",
                    VAR_13);
        VAR_4 = VAR_15;
        FUNC_1(((void*)0), 0, VAR_12, sizeof(VAR_12),
                     VAR_8, sizeof(VAR_8), &VAR_16, ((void*)0), 0, VAR_5);
    }

    FUNC_3(VAR_14, sizeof(VAR_14), VAR_6, ((void*)0), VAR_8, VAR_16, ((void*)0));

    if (!VAR_20->hd) {
        VAR_18 = FUNC_4(&VAR_20->hd, VAR_14, VAR_0,
                                   &VAR_2->interrupt_callback, VAR_3,
                                   VAR_2->protocol_whitelist, VAR_2->protocol_blacklist, VAR_2);
        if (VAR_18 < 0)
            return VAR_18;
    }

    VAR_18 = FUNC_6(VAR_2, VAR_4, VAR_7, VAR_9,
                       VAR_11, VAR_12, &VAR_19);
    if (VAR_18 < 0)
        return VAR_18;

    return VAR_19;
}
