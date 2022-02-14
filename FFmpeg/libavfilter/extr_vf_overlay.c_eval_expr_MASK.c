
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int vsub; void** var_values; void* y; int hsub; void* x; int x_pexpr; int y_pexpr; } ;
typedef TYPE_1__ OverlayContext ;
typedef TYPE_2__ AVFilterContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int ,void**,int *) ;
 void* FUNC_1 (void*,int ) ;

__attribute__((used)) static void FUNC_2(AVFilterContext *VAR_2)
{
    OverlayContext *VAR_3 = VAR_2->priv;

    VAR_3->var_values[VAR_0] = FUNC_0(VAR_3->x_pexpr, VAR_3->var_values, ((void*)0));
    VAR_3->var_values[VAR_1] = FUNC_0(VAR_3->y_pexpr, VAR_3->var_values, ((void*)0));

    VAR_3->var_values[VAR_0] = FUNC_0(VAR_3->x_pexpr, VAR_3->var_values, ((void*)0));
    VAR_3->x = FUNC_1(VAR_3->var_values[VAR_0], VAR_3->hsub);
    VAR_3->y = FUNC_1(VAR_3->var_values[VAR_1], VAR_3->vsub);
}
