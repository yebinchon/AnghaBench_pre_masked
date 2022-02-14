
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int* x; int no_repeat_mask; scalar_t__ pitch_lag; } ;
typedef TYPE_1__ AMRFixed ;



void FUNC_0(float *VAR_0, const AMRFixed *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3=0; VAR_3 < VAR_1->n; VAR_3++) {
        int VAR_4 = VAR_1->x[VAR_3], VAR_5 = !((VAR_1->no_repeat_mask >> VAR_3) & 1);

        if (VAR_1->pitch_lag > 0)
            do {
                VAR_0[VAR_4] = 0.0;
                VAR_4 += VAR_1->pitch_lag;
            } while (VAR_4 < VAR_2 && VAR_5);
    }
}
