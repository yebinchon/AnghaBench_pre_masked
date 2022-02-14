
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int q_unit_cnt; int* precision_fine; int * q_coeffs_fine; } ;
typedef int GetBitContext ;
typedef int ATRAC9Context ;
typedef TYPE_1__ ATRAC9ChannelData ;
typedef int ATRAC9BlockData ;


 int* VAR_0 ;
 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int const) ;

__attribute__((used)) static inline void FUNC_3(ATRAC9Context *VAR_1, ATRAC9BlockData *VAR_2,
                                    ATRAC9ChannelData *VAR_3, GetBitContext *VAR_4)
{
    FUNC_1(VAR_3->q_coeffs_fine, 0, sizeof(VAR_3->q_coeffs_fine));

    for (int VAR_5 = 0; VAR_5 < VAR_3->q_unit_cnt; VAR_5++) {
        const int VAR_6 = VAR_0[VAR_5 + 0];
        const int VAR_7 = VAR_0[VAR_5 + 1];
        const int VAR_8 = VAR_3->precision_fine[VAR_5] + 1;

        if (VAR_3->precision_fine[VAR_5] <= 0)
            continue;

        for (int VAR_9 = VAR_6; VAR_9 < VAR_7; VAR_9++)
            VAR_3->q_coeffs_fine[VAR_9] = FUNC_2(FUNC_0(VAR_4, VAR_8), VAR_8);
    }
}
