
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int blocksize; int gb; int avctx; } ;
typedef int GetBitContext ;
typedef TYPE_1__ FLACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int,int ) ;

__attribute__((used)) static int FUNC_4(FLACContext *VAR_3, int32_t *VAR_4, int VAR_5)
{
    GetBitContext VAR_6 = VAR_3->gb;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;

    VAR_10 = FUNC_1(&VAR_6, 2);
    VAR_11 = FUNC_1(&VAR_6, 4);

    VAR_14 = VAR_3->blocksize >> VAR_11;
    VAR_12 = 4 + VAR_10;
    VAR_13 = (1 << VAR_12) - 1;

    VAR_4 += VAR_5;
    VAR_7 = VAR_5;

    if (VAR_10 > 1) {
        FUNC_0(VAR_3->avctx, VAR_1, "illegal residual coding method %d\n",
               VAR_10);
        return VAR_0;
    }

    if (VAR_14 << VAR_11 != VAR_3->blocksize) {
        FUNC_0(VAR_3->avctx, VAR_1, "invalid rice order: %i blocksize %i\n",
               VAR_11, VAR_3->blocksize);
        return VAR_0;
    }

    if (VAR_5 > VAR_14) {
        FUNC_0(VAR_3->avctx, VAR_1, "invalid predictor order: %i > %i\n",
               VAR_5, VAR_14);
        return VAR_0;
    }

    for (VAR_9 = 0; VAR_9 < (1 << VAR_11); VAR_9++) {
        VAR_8 = FUNC_1(&VAR_6, VAR_12);
        if (VAR_8 == VAR_13) {
            VAR_8 = FUNC_1(&VAR_6, 5);
            for (; VAR_7 < VAR_14; VAR_7++)
                *VAR_4++ = FUNC_2(&VAR_6, VAR_8);
        } else {
            int VAR_15 = VAR_8 ? (VAR_2 >> VAR_8) + 2 : VAR_2;
            for (; VAR_7 < VAR_14; VAR_7++) {
                int VAR_16 = FUNC_3(&VAR_6, VAR_8, VAR_15, 0);
                if (VAR_16 == 0x80000000){
                    FUNC_0(VAR_3->avctx, VAR_1, "invalid residual\n");
                    return VAR_0;
                }

                *VAR_4++ = VAR_16;
            }
        }
        VAR_7= 0;
    }

    VAR_3->gb = VAR_6;

    return 0;
}
