
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** quant_matrixes; int* qscale; int avctx; int gb; } ;
typedef TYPE_1__ MJpegDecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(MJpegDecodeContext *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    VAR_4 = FUNC_2(&VAR_3->gb, 16) - 2;

    if (8*VAR_4 > FUNC_3(&VAR_3->gb)) {
        FUNC_1(VAR_3->avctx, VAR_2, "dqt: len %d is too large\n", VAR_4);
        return VAR_0;
    }

    while (VAR_4 >= 65) {
        int VAR_7 = FUNC_2(&VAR_3->gb, 4);
        if (VAR_7 > 1) {
            FUNC_1(VAR_3->avctx, VAR_2, "dqt: invalid precision\n");
            return VAR_0;
        }
        VAR_5 = FUNC_2(&VAR_3->gb, 4);
        if (VAR_5 >= 4)
            return -1;
        FUNC_1(VAR_3->avctx, VAR_1, "index=%d\n", VAR_5);

        for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
            VAR_3->quant_matrixes[VAR_5][VAR_6] = FUNC_2(&VAR_3->gb, VAR_7 ? 16 : 8);
            if (VAR_3->quant_matrixes[VAR_5][VAR_6] == 0) {
                FUNC_1(VAR_3->avctx, VAR_2, "dqt: 0 quant value\n");
                return VAR_0;
            }
        }


        VAR_3->qscale[VAR_5] = FUNC_0(VAR_3->quant_matrixes[VAR_5][1],
                                 VAR_3->quant_matrixes[VAR_5][8]) >> 1;
        FUNC_1(VAR_3->avctx, VAR_1, "qscale[%d]: %d\n",
               VAR_5, VAR_3->qscale[VAR_5]);
        VAR_4 -= 1 + 64 * (1+VAR_7);
    }
    return 0;
}
