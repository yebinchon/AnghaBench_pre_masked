
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int path ;
typedef int hostname ;
typedef int buf ;
typedef int auth ;
struct TYPE_7__ {int is_streamed; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int * hd; } ;
typedef TYPE_2__ GopherContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int,char*,int,int*,char*,int,char const*) ;
 int FUNC_1 (char*,int,char*,int *,char*,int,int *) ;
 int FUNC_2 (int **,char*,int ,int *,int *,int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_1, const char *VAR_2, int VAR_3)
{
    GopherContext *VAR_4 = VAR_1->priv_data;
    char VAR_5[1024], VAR_6[1024], VAR_7[1024], VAR_8[1024];
    int VAR_9, VAR_10;

    VAR_1->is_streamed = 1;


    FUNC_0(((void*)0), 0, VAR_6, sizeof(VAR_6), VAR_5, sizeof(VAR_5), &VAR_9,
                 VAR_7, sizeof(VAR_7), VAR_2);

    if (VAR_9 < 0)
        VAR_9 = 70;

    FUNC_1(VAR_8, sizeof(VAR_8), "tcp", ((void*)0), VAR_5, VAR_9, ((void*)0));

    VAR_4->hd = ((void*)0);
    VAR_10 = FUNC_2(&VAR_4->hd, VAR_8, VAR_0,
                               &VAR_1->interrupt_callback, ((void*)0), VAR_1->protocol_whitelist, VAR_1->protocol_blacklist, VAR_1);
    if (VAR_10 < 0)
        goto fail;

    if ((VAR_10 = FUNC_4(VAR_1, VAR_7)) < 0)
        goto fail;
    return 0;
 fail:
    FUNC_3(VAR_1);
    return VAR_10;
}
