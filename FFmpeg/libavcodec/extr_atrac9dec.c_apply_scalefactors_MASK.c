
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int q_unit_cnt; TYPE_1__* channel; } ;
struct TYPE_4__ {float* coeffs; int* scalefactors; } ;
typedef int ATRAC9Context ;
typedef TYPE_2__ ATRAC9BlockData ;


 int* VAR_0 ;
 float* VAR_1 ;

__attribute__((used)) static inline void FUNC_0(ATRAC9Context *VAR_2, ATRAC9BlockData *VAR_3,
                                      const int VAR_4)
{
    for (int VAR_5 = 0; VAR_5 <= VAR_4; VAR_5++) {
        float *VAR_6 = VAR_3->channel[VAR_5].coeffs;
        for (int VAR_7 = 0; VAR_7 < VAR_3->q_unit_cnt; VAR_7++) {
            const int VAR_8 = VAR_0[VAR_7 + 0];
            const int VAR_9 = VAR_0[VAR_7 + 1];
            const int VAR_10 = VAR_3->channel[VAR_5].scalefactors[VAR_7];
            const float VAR_11 = VAR_1[VAR_10];
            for (int VAR_12 = VAR_8; VAR_12 < VAR_9; VAR_12++)
                VAR_6[VAR_12] *= VAR_11;
        }
    }
}
