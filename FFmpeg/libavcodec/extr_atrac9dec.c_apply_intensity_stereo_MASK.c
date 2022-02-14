
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t cpe_base_channel; int q_unit_cnt; int stereo_q_unit; int* is_signs; TYPE_1__* channel; } ;
struct TYPE_4__ {float* coeffs; } ;
typedef int ATRAC9Context ;
typedef TYPE_2__ ATRAC9BlockData ;


 int* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(ATRAC9Context *VAR_1, ATRAC9BlockData *VAR_2,
                                          const int VAR_3)
{
    float *VAR_4 = VAR_2->channel[ VAR_2->cpe_base_channel].coeffs;
    float *VAR_5 = VAR_2->channel[!VAR_2->cpe_base_channel].coeffs;

    if (!VAR_3)
        return;

    if (VAR_2->q_unit_cnt <= VAR_2->stereo_q_unit)
        return;

    for (int VAR_6 = VAR_2->stereo_q_unit; VAR_6 < VAR_2->q_unit_cnt; VAR_6++) {
        const int VAR_7 = VAR_2->is_signs[VAR_6];
        const int VAR_8 = VAR_0[VAR_6 + 0];
        const int VAR_9 = VAR_0[VAR_6 + 1];
        for (int VAR_10 = VAR_8; VAR_10 < VAR_9; VAR_10++)
            VAR_5[VAR_10] = VAR_7*VAR_4[VAR_10];
    }
}
