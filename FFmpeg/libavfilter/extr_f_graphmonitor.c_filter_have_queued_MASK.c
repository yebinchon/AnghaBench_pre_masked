
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_inputs; int nb_outputs; int ** outputs; int ** inputs; } ;
typedef int AVFilterLink ;
typedef TYPE_1__ AVFilterContext ;


 size_t FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->nb_inputs; VAR_1++) {
        AVFilterLink *VAR_2 = VAR_0->inputs[VAR_1];
        size_t VAR_3 = FUNC_0(VAR_2);

        if (VAR_3)
            return 1;
    }

    for (int VAR_4 = 0; VAR_4 < VAR_0->nb_outputs; VAR_4++) {
        AVFilterLink *VAR_5 = VAR_0->outputs[VAR_4];
        size_t VAR_6 = FUNC_0(VAR_5);

        if (VAR_6)
            return 1;
    }

    return 0;
}
