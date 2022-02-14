
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;
struct TYPE_5__ {int*** motion_val; int * mb_type; } ;
struct TYPE_6__ {int* error_status_table; int mb_stride; TYPE_1__ cur_pic; } ;
typedef TYPE_2__ ERContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_3 (TYPE_2__*,int*,int*) ;

__attribute__((used)) static void FUNC_4(ERContext *VAR_3, uint8_t *VAR_4, int VAR_5,
                           int VAR_6, ptrdiff_t VAR_7, int VAR_8)
{
    int VAR_9, VAR_10;
    ptrdiff_t VAR_11, VAR_12;
    const uint8_t *VAR_13 = VAR_2 + VAR_1;
    FUNC_3(VAR_3, &VAR_11, &VAR_12);
    VAR_11 >>= VAR_8;
    VAR_12 *= VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
        for (VAR_9 = 0; VAR_9 < VAR_5 - 1; VAR_9++) {
            int VAR_14;
            int VAR_15 = VAR_3->error_status_table[( VAR_9 >> VAR_8) + (VAR_10 >> VAR_8) * VAR_3->mb_stride];
            int VAR_16 = VAR_3->error_status_table[((VAR_9 + 1) >> VAR_8) + (VAR_10 >> VAR_8) * VAR_3->mb_stride];
            int VAR_17 = FUNC_2(VAR_3->cur_pic.mb_type[( VAR_9 >> VAR_8) + (VAR_10 >> VAR_8) * VAR_3->mb_stride]);
            int VAR_18 = FUNC_2(VAR_3->cur_pic.mb_type[((VAR_9 + 1) >> VAR_8) + (VAR_10 >> VAR_8) * VAR_3->mb_stride]);
            int VAR_19 = VAR_15 & VAR_0;
            int VAR_20 = VAR_16 & VAR_0;
            int VAR_21 = VAR_9 * 8 + VAR_10 * VAR_7 * 8;
            int16_t *VAR_22 = VAR_3->cur_pic.motion_val[0][VAR_12 * VAR_10 + VAR_11 * VAR_9];
            int16_t *VAR_23 = VAR_3->cur_pic.motion_val[0][VAR_12 * VAR_10 + VAR_11 * (VAR_9 + 1)];
            if (!(VAR_19 || VAR_20))
                continue;
            if ((!VAR_17) && (!VAR_18) &&
                FUNC_0(VAR_22[0] - VAR_23[0]) +
                FUNC_0(VAR_22[1] + VAR_23[1]) < 2)
                continue;

            for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
                int VAR_24, VAR_25, VAR_26, VAR_27;

                VAR_24 = VAR_4[VAR_21 + 7 + VAR_14 * VAR_7] - VAR_4[VAR_21 + 6 + VAR_14 * VAR_7];
                VAR_25 = VAR_4[VAR_21 + 8 + VAR_14 * VAR_7] - VAR_4[VAR_21 + 7 + VAR_14 * VAR_7];
                VAR_26 = VAR_4[VAR_21 + 9 + VAR_14 * VAR_7] - VAR_4[VAR_21 + 8 + VAR_14 * VAR_7];

                VAR_27 = FUNC_0(VAR_25) - ((FUNC_0(VAR_24) + FUNC_0(VAR_26) + 1) >> 1);
                VAR_27 = FUNC_1(VAR_27, 0);
                if (VAR_25 < 0)
                    VAR_27 = -VAR_27;

                if (VAR_27 == 0)
                    continue;

                if (!(VAR_19 && VAR_20))
                    VAR_27 = VAR_27 * 16 / 9;

                if (VAR_19) {
                    VAR_4[VAR_21 + 7 + VAR_14 * VAR_7] = VAR_13[VAR_4[VAR_21 + 7 + VAR_14 * VAR_7] + ((VAR_27 * 7) >> 4)];
                    VAR_4[VAR_21 + 6 + VAR_14 * VAR_7] = VAR_13[VAR_4[VAR_21 + 6 + VAR_14 * VAR_7] + ((VAR_27 * 5) >> 4)];
                    VAR_4[VAR_21 + 5 + VAR_14 * VAR_7] = VAR_13[VAR_4[VAR_21 + 5 + VAR_14 * VAR_7] + ((VAR_27 * 3) >> 4)];
                    VAR_4[VAR_21 + 4 + VAR_14 * VAR_7] = VAR_13[VAR_4[VAR_21 + 4 + VAR_14 * VAR_7] + ((VAR_27 * 1) >> 4)];
                }
                if (VAR_20) {
                    VAR_4[VAR_21 + 8 + VAR_14 * VAR_7] = VAR_13[VAR_4[VAR_21 + 8 + VAR_14 * VAR_7] - ((VAR_27 * 7) >> 4)];
                    VAR_4[VAR_21 + 9 + VAR_14 * VAR_7] = VAR_13[VAR_4[VAR_21 + 9 + VAR_14 * VAR_7] - ((VAR_27 * 5) >> 4)];
                    VAR_4[VAR_21 + 10+ VAR_14 * VAR_7] = VAR_13[VAR_4[VAR_21 + 10 + VAR_14 * VAR_7] - ((VAR_27 * 3) >> 4)];
                    VAR_4[VAR_21 + 11+ VAR_14 * VAR_7] = VAR_13[VAR_4[VAR_21 + 11 + VAR_14 * VAR_7] - ((VAR_27 * 1) >> 4)];
                }
            }
        }
    }
}
