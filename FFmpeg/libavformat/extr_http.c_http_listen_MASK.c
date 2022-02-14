
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int proto ;
typedef int lower_url ;
typedef int hostname ;
struct TYPE_6__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {scalar_t__ listen; int reply_code; int chained_options; int handshake_step; int hd; } ;
typedef TYPE_2__ HTTPContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char*,scalar_t__,int ) ;
 int FUNC_2 (char*,int,int *,int ,char*,int,int*,int *,int ,char const*) ;
 int FUNC_3 (char*,int,char const*,int *,char*,int,int *) ;
 int FUNC_4 (int *,char*,int ,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_3, const char *VAR_4, int VAR_5,
                       AVDictionary **VAR_6) {
    HTTPContext *VAR_7 = VAR_3->priv_data;
    int VAR_8;
    char VAR_9[1024], VAR_10[10];
    char VAR_11[100];
    const char *VAR_12 = "tcp";
    int VAR_13;
    FUNC_2(VAR_10, sizeof(VAR_10), ((void*)0), 0, VAR_9, sizeof(VAR_9), &VAR_13,
                 ((void*)0), 0, VAR_4);
    if (!FUNC_6(VAR_10, "https"))
        VAR_12 = "tls";
    FUNC_3(VAR_11, sizeof(VAR_11), VAR_12, ((void*)0), VAR_9, VAR_13,
                ((void*)0));
    if ((VAR_8 = FUNC_1(VAR_6, "listen", VAR_7->listen, 0)) < 0)
        goto fail;
    if ((VAR_8 = FUNC_4(&VAR_7->hd, VAR_11, VAR_0,
                                    &VAR_3->interrupt_callback, VAR_6,
                                    VAR_3->protocol_whitelist, VAR_3->protocol_blacklist, VAR_3
                                   )) < 0)
        goto fail;
    VAR_7->handshake_step = VAR_2;
    if (VAR_7->listen == VAR_1) {
        VAR_7->reply_code = 200;
        while ((VAR_8 = FUNC_5(VAR_3)) > 0);
    }
fail:
    FUNC_0(&VAR_7->chained_options);
    return VAR_8;
}
