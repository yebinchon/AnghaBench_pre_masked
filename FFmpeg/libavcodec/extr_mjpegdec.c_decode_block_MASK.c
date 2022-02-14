
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_7__ {int* permutated; } ;
struct TYPE_8__ {int* last_dc; int gb; TYPE_2__ scantable; int avctx; TYPE_1__** vlcs; } ;
struct TYPE_6__ {int table; } ;
typedef TYPE_3__ MJpegDecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int ,int *,int ,int,int) ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_2 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,char*,...) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(MJpegDecodeContext *VAR_4, int16_t *VAR_5, int VAR_6,
                        int VAR_7, int VAR_8, uint16_t *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;


    VAR_14 = FUNC_9(VAR_4, VAR_7);
    if (VAR_14 == 0xfffff) {
        FUNC_8(VAR_4->avctx, VAR_1, "error dc\n");
        return VAR_0;
    }
    VAR_14 = VAR_14 * (unsigned)VAR_9[0] + VAR_4->last_dc[VAR_6];
    VAR_14 = FUNC_7(VAR_14);
    VAR_4->last_dc[VAR_6] = VAR_14;
    VAR_5[0] = VAR_14;

    VAR_11 = 0;
    {FUNC_5(VAR_3, &VAR_4->gb);
    do {
        FUNC_6(VAR_3, &VAR_4->gb);
        FUNC_2(VAR_10, VAR_3, &VAR_4->gb, VAR_4->vlcs[1][VAR_8].table, 9, 2);

        VAR_11 += ((unsigned)VAR_10) >> 4;
            VAR_10 &= 0xf;
        if (VAR_10) {
            if (VAR_10 > VAR_2 - 16)
                FUNC_6(VAR_3, &VAR_4->gb);

            {
                int VAR_15 = FUNC_1(VAR_3, &VAR_4->gb);
                int VAR_16 = (~VAR_15) >> 31;
                VAR_13 = (FUNC_4(VAR_16 ^ VAR_15,VAR_10) ^ VAR_16) - VAR_16;
            }

            FUNC_3(VAR_3, &VAR_4->gb, VAR_10);

            if (VAR_11 > 63) {
                FUNC_8(VAR_4->avctx, VAR_1, "error count: %d\n", VAR_11);
                return VAR_0;
            }
            VAR_12 = VAR_4->scantable.permutated[VAR_11];
            VAR_5[VAR_12] = VAR_13 * VAR_9[VAR_11];
        }
    } while (VAR_11 < 63);
    FUNC_0(VAR_3, &VAR_4->gb);}

    return 0;
}
