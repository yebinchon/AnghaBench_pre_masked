
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int bpp2; int avctx; int bigendian; } ;
typedef TYPE_1__ VmncContext ;
typedef int GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int,int *,int const,int ,int) ;
 int FUNC_4 (int *,int,int,int,int,int,int const,int) ;
 int FUNC_5 (int *,int const,int ) ;

__attribute__((used)) static int FUNC_6(VmncContext *VAR_7, uint8_t* VAR_8, GetByteContext *VAR_9,
                          int VAR_10, int VAR_11, int VAR_12)
{
    int VAR_13, VAR_14, VAR_15;
    int VAR_16 = 0, VAR_17 = 0, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    const int VAR_23 = VAR_7->bpp2;
    uint8_t *VAR_24;
    int VAR_25 = 16, VAR_26 = 16;

    for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14 += 16) {
        VAR_24 = VAR_8;
        VAR_25 = 16;
        if (VAR_14 + 16 > VAR_11)
            VAR_26 = VAR_11 - VAR_14;
        for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13 += 16, VAR_24 += 16 * VAR_23) {
            if (FUNC_2(VAR_9) <= 0) {
                FUNC_0(VAR_7->avctx, VAR_1, "Premature end of data!\n");
                return VAR_0;
            }
            if (VAR_13 + 16 > VAR_10)
                VAR_25 = VAR_10 - VAR_13;
            VAR_20 = FUNC_1(VAR_9);
            if (VAR_20 & VAR_5) {
                if (FUNC_2(VAR_9) < VAR_25 * VAR_26 * VAR_23) {
                    FUNC_0(VAR_7->avctx, VAR_1, "Premature end of data!\n");
                    return VAR_0;
                }
                FUNC_3(VAR_24, VAR_25, VAR_26, VAR_9, VAR_23, VAR_7->bigendian, VAR_12);
            } else {
                if (VAR_20 & VAR_2)
                    VAR_16 = FUNC_5(VAR_9, VAR_23, VAR_7->bigendian);
                if (VAR_20 & VAR_4)
                    VAR_17 = FUNC_5(VAR_9, VAR_23, VAR_7->bigendian);
                VAR_18 = 0;
                if (VAR_20 & VAR_6)
                    VAR_18 = FUNC_1(VAR_9);
                VAR_19 = !!(VAR_20 & VAR_3);

                FUNC_4(VAR_24, 0, 0, VAR_25, VAR_26, VAR_16, VAR_23, VAR_12);

                if (FUNC_2(VAR_9) < VAR_18 * (VAR_19 * VAR_23 + 2)) {
                    FUNC_0(VAR_7->avctx, VAR_1, "Premature end of data!\n");
                    return VAR_0;
                }
                for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++) {
                    int VAR_27, VAR_28, VAR_29, VAR_30;
                    if (VAR_19)
                        VAR_17 = FUNC_5(VAR_9, VAR_23, VAR_7->bigendian);
                    VAR_21 = FUNC_1(VAR_9);
                    VAR_22 = FUNC_1(VAR_9);

                    VAR_27 = VAR_21 >> 4;
                    VAR_28 = VAR_21 & 0xF;
                    VAR_29 = (VAR_22 >> 4) + 1;
                    VAR_30 = (VAR_22 & 0xF) + 1;

                    if (VAR_27 + VAR_29 > VAR_10 - VAR_13 || VAR_28 + VAR_30 > VAR_11 - VAR_14) {
                        FUNC_0(VAR_7->avctx, VAR_1, "Rectangle outside picture\n");
                        return VAR_0;
                    }

                    FUNC_4(VAR_24, VAR_27, VAR_28,
                               VAR_29, VAR_30, VAR_17, VAR_23, VAR_12);
                }
            }
        }
        VAR_8 += VAR_12 * 16;
    }
    return 0;
}
