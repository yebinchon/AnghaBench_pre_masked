
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
struct TYPE_5__ {int pitch; int height; int frm1_size; int frm2_size; int avctx; int gb; int * frm2; int * frm1; scalar_t__ frm0; scalar_t__ rotate_code; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int* VAR_4 ;
 int FUNC_10 (int *,int *,int,int,int,int) ;
 int FUNC_11 (int *,int *,int,int,int) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (TYPE_1__*,int *,int) ;
 int FUNC_14 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_15(SANMVideoContext *VAR_5, int VAR_6,
                       int VAR_7, int VAR_8, int VAR_9)
{
    ptrdiff_t VAR_10 = VAR_5->pitch;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    uint8_t *VAR_15, *VAR_16;
    int VAR_17 = 0;
    int VAR_18 = FUNC_4(&VAR_5->gb);
    int VAR_19 = FUNC_4(&VAR_5->gb);
    int VAR_20 = FUNC_7(&VAR_5->gb);
    uint32_t VAR_21 = FUNC_8(&VAR_5->gb);
    int VAR_22;

    FUNC_9(&VAR_5->gb, 4);
    VAR_22 = FUNC_4(&VAR_5->gb);
    FUNC_9(&VAR_5->gb, 3);

    if (VAR_21 > VAR_5->height * VAR_10 - VAR_7 - VAR_6 * VAR_10) {
        VAR_21 = VAR_5->height * VAR_10 - VAR_7 - VAR_6 * VAR_10;
        FUNC_0(VAR_5->avctx, VAR_3, "Decoded size is too large.\n");
    }

    VAR_5->rotate_code = 0;

    if (((VAR_20 & 1) || !(VAR_22 & 1)) && (VAR_18 && VAR_18 != 2))
        FUNC_14(VAR_5, 1);

    VAR_15 = ((uint8_t*)VAR_5->frm0) + VAR_7 + VAR_6 * VAR_10;
    VAR_16 = ((uint8_t*)VAR_5->frm2) + VAR_7 + VAR_6 * VAR_10;

    if (VAR_19 > 2) {
        FUNC_0(VAR_5->avctx, VAR_2, "Invalid motion base value %d.\n", VAR_19);
        return VAR_0;
    }

    switch (VAR_18) {
    case 0:
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            FUNC_2(&VAR_5->gb, VAR_15, VAR_8);
            VAR_15 += VAR_10;
        }
        FUNC_12(VAR_5->frm1, 0, VAR_5->height * VAR_10);
        FUNC_12(VAR_5->frm2, 0, VAR_5->height * VAR_10);
        break;
    case 2:
        if (FUNC_13(VAR_5, VAR_15, VAR_21))
            return VAR_0;
        FUNC_12(VAR_5->frm1, 0, VAR_5->frm1_size);
        FUNC_12(VAR_5->frm2, 0, VAR_5->frm2_size);
        break;
    case 3:
    case 4:
        if (VAR_22 & 4) {
            for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12 += 4) {
                for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11 += 4) {
                    int VAR_23;
                    if (VAR_17) {
                        VAR_17--;
                        FUNC_11(VAR_15 + VAR_11, VAR_16 + VAR_11, VAR_10, VAR_10, 4);
                        continue;
                    }
                    if (FUNC_5(&VAR_5->gb) < 1)
                        return VAR_0;
                    VAR_23 = FUNC_6(&VAR_5->gb);
                    switch (VAR_23) {
                    case 0xFF:
                        if (FUNC_5(&VAR_5->gb) < 16)
                            return VAR_0;
                        for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
                            FUNC_3(&VAR_5->gb, VAR_15 + VAR_11 + VAR_13 * VAR_10, 4);
                        break;
                    case 0xFE:
                        if (FUNC_5(&VAR_5->gb) < 4)
                            return VAR_0;
                        for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
                            FUNC_12(VAR_15 + VAR_11 + VAR_13 * VAR_10, FUNC_6(&VAR_5->gb), 4);
                        break;
                    case 0xFD:
                        if (FUNC_5(&VAR_5->gb) < 1)
                            return VAR_0;
                        VAR_14 = FUNC_6(&VAR_5->gb);
                        for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
                            FUNC_12(VAR_15 + VAR_11 + VAR_13 * VAR_10, VAR_14, 4);
                        break;
                    default:
                        if (VAR_18 == 4 && !VAR_23) {
                            if (FUNC_5(&VAR_5->gb) < 1)
                                return VAR_0;
                            VAR_17 = FUNC_6(&VAR_5->gb) + 1;
                            VAR_11 -= 4;
                        } else {
                            int VAR_24, VAR_25;

                            VAR_24 = VAR_4[(VAR_19 * 255 + VAR_23) * 2];
                            VAR_25 = VAR_4[(VAR_19 * 255 + VAR_23) * 2 + 1];
                            FUNC_10(VAR_15 + VAR_11, VAR_16 + VAR_11 + VAR_24 + VAR_25 * VAR_10,
                                       VAR_5->height, VAR_10, VAR_11 + VAR_24, VAR_12 + VAR_25);
                        }
                    }
                }
                VAR_15 += VAR_10 * 4;
                VAR_16 += VAR_10 * 4;
            }
        } else {
            for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12 += 4) {
                for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11 += 4) {
                    int VAR_26;
                    if (VAR_17) {
                        VAR_17--;
                        FUNC_11(VAR_15 + VAR_11, VAR_16 + VAR_11, VAR_10, VAR_10, 4);
                        continue;
                    }
                    VAR_26 = FUNC_4(&VAR_5->gb);
                    if (VAR_26 == 0xFF) {
                        if (FUNC_5(&VAR_5->gb) < 16)
                            return VAR_0;
                        for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
                            FUNC_3(&VAR_5->gb, VAR_15 + VAR_11 + VAR_13 * VAR_10, 4);
                    } else if (VAR_18 == 4 && !VAR_26) {
                        if (FUNC_5(&VAR_5->gb) < 1)
                            return VAR_0;
                        VAR_17 = FUNC_6(&VAR_5->gb) + 1;
                        VAR_11 -= 4;
                    } else {
                        int VAR_27, VAR_28;

                        VAR_27 = VAR_4[(VAR_19 * 255 + VAR_26) * 2];
                        VAR_28 = VAR_4[(VAR_19 * 255 + VAR_26) * 2 + 1];
                        FUNC_10(VAR_15 + VAR_11, VAR_16 + VAR_11 + VAR_27 + VAR_28 * VAR_10,
                                   VAR_5->height, VAR_10, VAR_11 + VAR_27, VAR_12 + VAR_28);
                    }
                }
                VAR_15 += VAR_10 * 4;
                VAR_16 += VAR_10 * 4;
            }
        }
        break;
    default:
        FUNC_1(VAR_5->avctx,
                                      "Subcodec 37 compression %d", VAR_18);
        return VAR_1;
    }

    return 0;
}
