
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ctx; struct TYPE_6__* priv_data; int const* filter; } ;
typedef TYPE_1__ BSFCompatContext ;
typedef TYPE_1__ AVBitStreamFilterContext ;
typedef int AVBitStreamFilter ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__**) ;
 TYPE_1__* FUNC_3 (int) ;

AVBitStreamFilterContext *FUNC_4(const char *VAR_0)
{
    AVBitStreamFilterContext *VAR_1 = ((void*)0);
    BSFCompatContext *VAR_2 = ((void*)0);
    const AVBitStreamFilter *VAR_3;

    VAR_3 = FUNC_1(VAR_0);
    if (!VAR_3)
        return ((void*)0);

    VAR_1 = FUNC_3(sizeof(*VAR_1));
    if (!VAR_1)
        return ((void*)0);

    VAR_2 = FUNC_3(sizeof(*VAR_2));
    if (!VAR_2)
        goto fail;


    VAR_1->filter = VAR_3;
    VAR_1->priv_data = VAR_2;

    return VAR_1;

fail:
    if (VAR_2)
        FUNC_0(&VAR_2->ctx);
    FUNC_2(&VAR_2);
    FUNC_2(&VAR_1);
    return ((void*)0);
}
