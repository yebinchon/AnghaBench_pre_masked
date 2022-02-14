
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* priv_data; int interrupt_callback; int flags; int filename; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_10__ {int is_multi_client; TYPE_1__* hd; int listen; } ;
typedef TYPE_2__ HTTPContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__**,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__**) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_0, URLContext **VAR_1)
{
    int VAR_2;
    HTTPContext *VAR_3 = VAR_0->priv_data;
    HTTPContext *VAR_4;
    URLContext *VAR_5 = VAR_3->hd;
    URLContext *VAR_6 = ((void*)0);

    FUNC_0(VAR_3->listen);
    if ((VAR_2 = FUNC_2(VAR_1, VAR_0->filename, VAR_0->flags, &VAR_5->interrupt_callback)) < 0)
        goto fail;
    VAR_4 = (*VAR_1)->priv_data;
    if ((VAR_2 = FUNC_1(VAR_5, &VAR_6)) < 0)
        goto fail;
    VAR_4->hd = VAR_6;
    VAR_4->is_multi_client = 1;
    return 0;
fail:
    if (VAR_1) {
        FUNC_3(VAR_1);
    }
    return VAR_2;
}
