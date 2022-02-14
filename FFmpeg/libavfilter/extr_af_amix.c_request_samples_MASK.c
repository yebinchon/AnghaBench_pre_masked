
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * outputs; int * inputs; TYPE_1__* priv; } ;
struct TYPE_4__ {int nb_inputs; int* input_state; int * fifos; } ;
typedef TYPE_1__ MixContext ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_2, int VAR_3)
{
    MixContext *VAR_4 = VAR_2->priv;
    int VAR_5;

    FUNC_0(VAR_4->nb_inputs > 1);

    for (VAR_5 = 1; VAR_5 < VAR_4->nb_inputs; VAR_5++) {
        if (!(VAR_4->input_state[VAR_5] & VAR_1) ||
             (VAR_4->input_state[VAR_5] & VAR_0))
            continue;
        if (FUNC_1(VAR_4->fifos[VAR_5]) >= VAR_3)
            continue;
        FUNC_2(VAR_2->inputs[VAR_5]);
    }
    return FUNC_3(VAR_2->outputs[0]);
}
