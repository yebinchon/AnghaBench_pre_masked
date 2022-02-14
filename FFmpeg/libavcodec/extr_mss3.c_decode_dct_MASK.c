
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prev_dc_stride; int* prev_dc; int* qmat; int sign_model; int ac_model; int dc_model; } ;
typedef int RangeCoder ;
typedef TYPE_1__ DCTBlockCoder ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int* VAR_0 ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(RangeCoder *VAR_1, DCTBlockCoder *VAR_2, int *VAR_3,
                      int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9 = 1, VAR_10, VAR_11;
    int VAR_12 = VAR_4 + VAR_5 * VAR_2->prev_dc_stride;

    FUNC_2(VAR_3, 0, sizeof(*VAR_3) * 64);

    VAR_11 = FUNC_1(VAR_1, &VAR_2->dc_model);
    if (VAR_5) {
        if (VAR_4) {
            int VAR_13, VAR_14, VAR_15;

            VAR_13 = VAR_2->prev_dc[VAR_12 - 1];
            VAR_14 = VAR_2->prev_dc[VAR_12 - 1 - VAR_2->prev_dc_stride];
            VAR_15 = VAR_2->prev_dc[VAR_12 - VAR_2->prev_dc_stride];

            if (FUNC_0(VAR_15 - VAR_14) <= FUNC_0(VAR_13 - VAR_14))
                VAR_11 += VAR_13;
            else
                VAR_11 += VAR_15;
        } else {
            VAR_11 += VAR_2->prev_dc[VAR_12 - VAR_2->prev_dc_stride];
        }
    } else if (VAR_4) {
        VAR_11 += VAR_2->prev_dc[VAR_4 - 1];
    }
    VAR_2->prev_dc[VAR_12] = VAR_11;
    VAR_3[0] = VAR_11 * VAR_2->qmat[0];

    while (VAR_9 < 64) {
        VAR_7 = FUNC_4(VAR_1, &VAR_2->ac_model);
        if (!VAR_7)
            return 0;
        if (VAR_7 == 0xF0) {
            VAR_9 += 16;
            continue;
        }
        VAR_6 = VAR_7 >> 4;
        VAR_7 = VAR_7 & 0xF;
        if (!VAR_7)
            return -1;
        VAR_9 += VAR_6;
        if (VAR_9 >= 64)
            return -1;

        VAR_8 = FUNC_5(VAR_1, &VAR_2->sign_model);
        if (VAR_7 > 1) {
            VAR_7--;
            VAR_7 = (1 << VAR_7) + FUNC_3(VAR_1, VAR_7);
        }
        if (!VAR_8)
            VAR_7 = -VAR_7;

        VAR_10 = VAR_0[VAR_9];
        VAR_3[VAR_10] = VAR_7 * VAR_2->qmat[VAR_10];
        VAR_9++;
    }

    return VAR_9 == 64 ? 0 : -1;
}
