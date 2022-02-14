
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* noise_buf; } ;
struct TYPE_5__ {int channels; TYPE_4__* state; int ac_out; int ac_in; int s16_data; int flt_data; } ;
typedef TYPE_1__ DitherContext ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(DitherContext **VAR_0)
{
    DitherContext *VAR_1 = *VAR_0;
    int VAR_2;

    if (!VAR_1)
        return;
    FUNC_3(&VAR_1->flt_data);
    FUNC_3(&VAR_1->s16_data);
    FUNC_2(&VAR_1->ac_in);
    FUNC_2(&VAR_1->ac_out);
    for (VAR_2 = 0; VAR_2 < VAR_1->channels; VAR_2++)
        FUNC_0(VAR_1->state[VAR_2].noise_buf);
    FUNC_0(VAR_1->state);
    FUNC_1(VAR_0);
}
