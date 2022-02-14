
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int ctx; } ;
typedef TYPE_1__ BSFCompatContext ;
typedef TYPE_2__ AVBitStreamFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__**) ;

void FUNC_3(AVBitStreamFilterContext *VAR_0)
{
    BSFCompatContext *VAR_1;

    if (!VAR_0)
        return;

    VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->ctx);
    FUNC_2(&VAR_0->priv_data);
    FUNC_1(VAR_0);
}
