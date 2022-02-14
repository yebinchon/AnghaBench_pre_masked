
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_inputs; int* input_state; int active_inputs; scalar_t__ duration_mode; } ;
typedef TYPE_1__ MixContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(MixContext *VAR_4)
{
    int VAR_5;
    int VAR_6 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_4->nb_inputs; VAR_5++)
        VAR_6 += !!(VAR_4->input_state[VAR_5] & VAR_3);
    VAR_4->active_inputs = VAR_6;

    if (!VAR_6 ||
        (VAR_4->duration_mode == VAR_1 && !(VAR_4->input_state[0] & VAR_3)) ||
        (VAR_4->duration_mode == VAR_2 && VAR_6 != VAR_4->nb_inputs))
        return VAR_0;
    return 0;
}
