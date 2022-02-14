
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int (* idct ) (int*) ;} ;
struct TYPE_6__ {int (* clear_blocks ) (int*) ;} ;
struct TYPE_8__ {int* prev_dc; int** block; TYPE_2__ idsp; TYPE_1__ bdsp; int buf; } ;
typedef TYPE_3__ JPGContext ;
typedef int GetBitContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_3__*,int *,int,int*) ;
 int FUNC_4 (int const*,int,int ,int*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int *,int const,int,int,int) ;

__attribute__((used)) static int FUNC_10(JPGContext *VAR_1, int VAR_2, int VAR_3,
                           const uint8_t *VAR_4, int VAR_5,
                           uint8_t *VAR_6, int VAR_7,
                           const uint8_t *VAR_8, int VAR_9, int VAR_10,
                           int VAR_11)
{
    GetBitContext VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    int VAR_19, VAR_20;
    int VAR_21;
    int VAR_22;
    const int VAR_23 = VAR_11 ? 2 : 0;

    if ((VAR_22 = FUNC_1(&VAR_1->buf,
                           VAR_5 + VAR_0)) < 0)
        return VAR_22;
    FUNC_4(VAR_4, VAR_5, VAR_1->buf, &VAR_21);
    FUNC_5(VAR_1->buf + VAR_21, 0, VAR_0);
    if((VAR_22 = FUNC_2(&VAR_12, VAR_1->buf, VAR_21)) < 0)
        return VAR_22;

    VAR_2 = FUNC_0(VAR_2, 16);
    VAR_13 = VAR_2 >> 4;
    VAR_14 = (VAR_3 + 15) >> 4;

    if (!VAR_10)
        VAR_10 = VAR_13 * VAR_14 * 4;

    for (VAR_17 = 0; VAR_17 < 3; VAR_17++)
        VAR_1->prev_dc[VAR_17] = 1024;
    VAR_19 =
    VAR_20 = 0;
    VAR_1->bdsp.clear_blocks(VAR_1->block[0]);
    for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
        for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
            if (VAR_8 && !VAR_8[VAR_15 * 2] && !VAR_8[VAR_15 * 2 + 1] &&
                !VAR_8[VAR_15 * 2 + VAR_9] &&
                !VAR_8[VAR_15 * 2 + 1 + VAR_9]) {
                VAR_19 += 16;
                continue;
            }
            for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
                for (VAR_17 = 0; VAR_17 < 2; VAR_17++) {
                    if (VAR_8 && !VAR_8[VAR_15 * 2 + VAR_17 + VAR_18 * VAR_9])
                        continue;
                    VAR_10--;
                    if ((VAR_22 = FUNC_3(VAR_1, &VAR_12, 0,
                                                VAR_1->block[VAR_17 + VAR_18 * 2])) != 0)
                        return VAR_22;
                    VAR_1->idsp.idct(VAR_1->block[VAR_17 + VAR_18 * 2]);
                }
            }
            for (VAR_17 = 1; VAR_17 < 3; VAR_17++) {
                if ((VAR_22 = FUNC_3(VAR_1, &VAR_12, VAR_17, VAR_1->block[VAR_17 + 3])) != 0)
                    return VAR_22;
                VAR_1->idsp.idct(VAR_1->block[VAR_17 + 3]);
            }

            for (VAR_18 = 0; VAR_18 < 16; VAR_18++) {
                uint8_t *VAR_24 = VAR_6 + VAR_19 * 3 + (VAR_20 + VAR_18) * VAR_7;
                for (VAR_17 = 0; VAR_17 < 16; VAR_17++) {
                    int VAR_25, VAR_26, VAR_27;

                    VAR_25 = VAR_1->block[(VAR_18 >> 3) * 2 + (VAR_17 >> 3)][(VAR_17 & 7) + (VAR_18 & 7) * 8];
                    VAR_26 = VAR_1->block[4][(VAR_17 >> 1) + (VAR_18 >> 1) * 8] - 128;
                    VAR_27 = VAR_1->block[5][(VAR_17 >> 1) + (VAR_18 >> 1) * 8] - 128;
                    FUNC_9(VAR_24 + VAR_17 * 3, VAR_23, VAR_25, VAR_26, VAR_27);
                }
            }

            if (!VAR_10)
                return 0;
            VAR_19 += 16;
        }
        VAR_19 = 0;
        VAR_20 += 16;
        if (VAR_8)
            VAR_8 += VAR_9 * 2;
    }

    return 0;
}
