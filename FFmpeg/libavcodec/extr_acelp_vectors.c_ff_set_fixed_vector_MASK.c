
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int* x; int no_repeat_mask; float* y; scalar_t__ pitch_lag; float pitch_fac; } ;
typedef TYPE_1__ AMRFixed ;


 int FUNC_0 (int) ;

void FUNC_1(float *VAR_0, const AMRFixed *VAR_1, float VAR_2, int VAR_3)
{
    int VAR_4;

    for (VAR_4=0; VAR_4 < VAR_1->n; VAR_4++) {
        int VAR_5 = VAR_1->x[VAR_4], VAR_6 = !((VAR_1->no_repeat_mask >> VAR_4) & 1);
        float VAR_7 = VAR_1->y[VAR_4] * VAR_2;

        if (VAR_1->pitch_lag > 0)
            FUNC_0(VAR_5 < VAR_3);
            do {
                VAR_0[VAR_5] += VAR_7;
                VAR_7 *= VAR_1->pitch_fac;
                VAR_5 += VAR_1->pitch_lag;
            } while (VAR_5 < VAR_3 && VAR_6);
    }
}
