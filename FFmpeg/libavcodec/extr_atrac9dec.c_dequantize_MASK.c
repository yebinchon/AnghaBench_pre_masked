
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* coeffs; int q_unit_cnt; size_t* precision_coarse; size_t* precision_fine; float const* q_coeffs_coarse; float const* q_coeffs_fine; } ;
typedef int ATRAC9Context ;
typedef TYPE_1__ ATRAC9ChannelData ;
typedef int ATRAC9BlockData ;


 int* VAR_0 ;
 float* VAR_1 ;
 float* VAR_2 ;
 int FUNC_0 (float*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(ATRAC9Context *VAR_3, ATRAC9BlockData *VAR_4,
                              ATRAC9ChannelData *VAR_5)
{
    FUNC_0(VAR_5->coeffs, 0, sizeof(VAR_5->coeffs));

    for (int VAR_6 = 0; VAR_6 < VAR_5->q_unit_cnt; VAR_6++) {
        const int VAR_7 = VAR_0[VAR_6 + 0];
        const int VAR_8 = VAR_0[VAR_6 + 1];

        const float VAR_9 = VAR_1[VAR_5->precision_coarse[VAR_6]];
        const float VAR_10 = VAR_2[VAR_5->precision_fine[VAR_6]];

        for (int VAR_11 = VAR_7; VAR_11 < VAR_8; VAR_11++) {
            const float VAR_12 = VAR_5->q_coeffs_coarse[VAR_11] * VAR_9;
            const float VAR_13 = VAR_5->q_coeffs_fine[VAR_11] * VAR_10;
            VAR_5->coeffs[VAR_11] = VAR_12 + VAR_13;
        }
    }
}
