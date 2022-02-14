
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int url ;
typedef int host ;
struct TYPE_6__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int stream; scalar_t__ tunneling; } ;
typedef TYPE_2__ RTMPEContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ,char*,int,int*,int *,int ,char const*) ;
 int FUNC_1 (char*,int,char*,int *,char*,int,int *) ;
 int FUNC_2 (int *,char*,int ,int *,int *,int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_1, const char *VAR_2, int VAR_3)
{
    RTMPEContext *VAR_4 = VAR_1->priv_data;
    char VAR_5[256], VAR_6[1024];
    int VAR_7, VAR_8;

    FUNC_0(((void*)0), 0, ((void*)0), 0, VAR_5, sizeof(VAR_5), &VAR_8, ((void*)0), 0, VAR_2);

    if (VAR_4->tunneling) {
        if (VAR_8 < 0)
            VAR_8 = 80;
        FUNC_1(VAR_6, sizeof(VAR_6), "ffrtmphttp", ((void*)0), VAR_5, VAR_8, ((void*)0));
    } else {
        if (VAR_8 < 0)
            VAR_8 = 1935;
        FUNC_1(VAR_6, sizeof(VAR_6), "tcp", ((void*)0), VAR_5, VAR_8, ((void*)0));
    }


    if ((VAR_7 = FUNC_2(&VAR_4->stream, VAR_6, VAR_0,
                                    &VAR_1->interrupt_callback, ((void*)0),
                                    VAR_1->protocol_whitelist, VAR_1->protocol_blacklist, VAR_1)) < 0) {
        FUNC_3(VAR_1);
        return VAR_7;
    }

    return 0;
}
