
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int q_unit_cnt; int grad_mode; scalar_t__* gradient; int grad_boundary; } ;
struct TYPE_5__ {scalar_t__* precision_mask; scalar_t__* scalefactors; scalar_t__* precision_coarse; int* precision_fine; } ;
typedef int ATRAC9Context ;
typedef TYPE_1__ ATRAC9ChannelData ;
typedef TYPE_2__ ATRAC9BlockData ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (int const,int) ;
 int FUNC_3 (scalar_t__*,int ,int) ;

__attribute__((used)) static inline void FUNC_4(ATRAC9Context *VAR_0, ATRAC9BlockData *VAR_1,
                                  ATRAC9ChannelData *VAR_2)
{
    FUNC_3(VAR_2->precision_mask, 0, sizeof(VAR_2->precision_mask));
    for (int VAR_3 = 1; VAR_3 < VAR_1->q_unit_cnt; VAR_3++) {
        const int VAR_4 = FUNC_0(VAR_2->scalefactors[VAR_3] - VAR_2->scalefactors[VAR_3 - 1]) - 1;
        if (VAR_4 > 0) {
            const int VAR_5 = VAR_2->scalefactors[VAR_3 - 1] > VAR_2->scalefactors[VAR_3];
            VAR_2->precision_mask[VAR_3 - VAR_5] += FUNC_2(VAR_4, 5);
        }
    }

    if (VAR_1->grad_mode) {
        for (int VAR_6 = 0; VAR_6 < VAR_1->q_unit_cnt; VAR_6++) {
            VAR_2->precision_coarse[VAR_6] = VAR_2->scalefactors[VAR_6];
            VAR_2->precision_coarse[VAR_6] += VAR_2->precision_mask[VAR_6] - VAR_1->gradient[VAR_6];
            if (VAR_2->precision_coarse[VAR_6] < 0)
                continue;
            switch (VAR_1->grad_mode) {
            case 1:
                VAR_2->precision_coarse[VAR_6] >>= 1;
                break;
            case 2:
                VAR_2->precision_coarse[VAR_6] = (3 * VAR_2->precision_coarse[VAR_6]) >> 3;
                break;
            case 3:
                VAR_2->precision_coarse[VAR_6] >>= 2;
                break;
            }
        }
    } else {
        for (int VAR_7 = 0; VAR_7 < VAR_1->q_unit_cnt; VAR_7++)
            VAR_2->precision_coarse[VAR_7] = VAR_2->scalefactors[VAR_7] - VAR_1->gradient[VAR_7];
    }


    for (int VAR_8 = 0; VAR_8 < VAR_1->q_unit_cnt; VAR_8++)
        VAR_2->precision_coarse[VAR_8] = FUNC_1(VAR_2->precision_coarse[VAR_8], 1);

    for (int VAR_9 = 0; VAR_9 < VAR_1->grad_boundary; VAR_9++)
        VAR_2->precision_coarse[VAR_9]++;

    for (int VAR_10 = 0; VAR_10 < VAR_1->q_unit_cnt; VAR_10++) {
        VAR_2->precision_fine[VAR_10] = 0;
        if (VAR_2->precision_coarse[VAR_10] > 15) {
            VAR_2->precision_fine[VAR_10] = VAR_2->precision_coarse[VAR_10] - 15;
            VAR_2->precision_coarse[VAR_10] = 15;
        }
    }
}
