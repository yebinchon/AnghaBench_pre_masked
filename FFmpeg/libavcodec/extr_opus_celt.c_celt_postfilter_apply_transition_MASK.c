
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pf_period_old; int pf_period; double* pf_gains; double* pf_gains_old; } ;
typedef TYPE_1__ CeltBlock ;


 int VAR_0 ;
 float* VAR_1 ;

__attribute__((used)) static void FUNC_0(CeltBlock *VAR_2, float *VAR_3)
{
    const int VAR_4 = VAR_2->pf_period_old;
    const int VAR_5 = VAR_2->pf_period;

    float VAR_6, VAR_7, VAR_8;
    float VAR_9, VAR_10, VAR_11;

    float VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

    int VAR_17;

    if (VAR_2->pf_gains[0] == 0.0 &&
        VAR_2->pf_gains_old[0] == 0.0)
        return;

    VAR_6 = VAR_2->pf_gains_old[0];
    VAR_7 = VAR_2->pf_gains_old[1];
    VAR_8 = VAR_2->pf_gains_old[2];
    VAR_9 = VAR_2->pf_gains[0];
    VAR_10 = VAR_2->pf_gains[1];
    VAR_11 = VAR_2->pf_gains[2];

    VAR_13 = VAR_3[-VAR_5 + 1];
    VAR_14 = VAR_3[-VAR_5];
    VAR_15 = VAR_3[-VAR_5 - 1];
    VAR_16 = VAR_3[-VAR_5 - 2];

    for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
        float VAR_18 = VAR_1[VAR_17];
        VAR_12 = VAR_3[VAR_17 - VAR_5 + 2];

        VAR_3[VAR_17] += (1.0 - VAR_18) * VAR_6 * VAR_3[VAR_17 - VAR_4] +
                    (1.0 - VAR_18) * VAR_7 * (VAR_3[VAR_17 - VAR_4 - 1] + VAR_3[VAR_17 - VAR_4 + 1]) +
                    (1.0 - VAR_18) * VAR_8 * (VAR_3[VAR_17 - VAR_4 - 2] + VAR_3[VAR_17 - VAR_4 + 2]) +
                    VAR_18 * VAR_9 * VAR_14 +
                    VAR_18 * VAR_10 * (VAR_13 + VAR_15) +
                    VAR_18 * VAR_11 * (VAR_12 + VAR_16);
        VAR_16 = VAR_15;
        VAR_15 = VAR_14;
        VAR_14 = VAR_13;
        VAR_13 = VAR_12;
    }
}
