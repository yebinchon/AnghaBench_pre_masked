
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_syms; int* weights; int upd_val; int till_rescale; scalar_t__ tot_weight; } ;
typedef TYPE_1__ Model ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(Model *VAR_0)
{
    int VAR_1;

    VAR_0->tot_weight = 0;
    for (VAR_1 = 0; VAR_1 < VAR_0->num_syms - 1; VAR_1++)
        VAR_0->weights[VAR_1] = 1;
    VAR_0->weights[VAR_0->num_syms - 1] = 0;

    VAR_0->upd_val = VAR_0->num_syms;
    VAR_0->till_rescale = 1;
    FUNC_0(VAR_0, VAR_0->num_syms - 1);
    VAR_0->till_rescale =
    VAR_0->upd_val = (VAR_0->num_syms + 6) >> 1;
}
