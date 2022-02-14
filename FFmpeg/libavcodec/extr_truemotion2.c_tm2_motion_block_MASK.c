
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {unsigned int* D; scalar_t__ CD; TYPE_3__* avctx; } ;
typedef TYPE_1__ TM2Context ;
typedef int AVFrame ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,int,scalar_t__,scalar_t__) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 unsigned int* VAR_8 ;
 unsigned int* VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 scalar_t__ VAR_11 ;
 unsigned int* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static inline void FUNC_5(TM2Context *VAR_16, AVFrame *VAR_17, int VAR_18, int VAR_19)
{
    int VAR_20, VAR_21;
    int VAR_22, VAR_23;
    FUNC_1();

    VAR_22 = FUNC_0(VAR_16, VAR_1);
    VAR_23 = FUNC_0(VAR_16, VAR_1);
    VAR_22 = FUNC_3(VAR_22, -(VAR_18 * 4 + 4), VAR_16->avctx->width - VAR_18 * 4);
    VAR_23 = FUNC_3(VAR_23, -(VAR_19 * 4 + 4), VAR_16->avctx->height - VAR_19 * 4);

    if (4*VAR_18+VAR_22<0 || 4*VAR_19+VAR_23<0 || 4*VAR_18+VAR_22+4 > VAR_16->avctx->width || 4*VAR_19+VAR_23+4 > VAR_16->avctx->height) {
        FUNC_4(VAR_16->avctx, VAR_0, "MV out of picture\n");
        return;
    }

    VAR_9 += VAR_23 * VAR_15 + VAR_22;
    VAR_3 += (VAR_23 >> 1) * VAR_13 + (VAR_22 >> 1);
    VAR_6 += (VAR_23 >> 1) * VAR_14 + (VAR_22 >> 1);


    for (VAR_21 = 0; VAR_21 < 2; VAR_21++) {
        for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {
            VAR_2[VAR_20] = VAR_3[VAR_20];
            VAR_5[VAR_20] = VAR_6[VAR_20];
        }
        VAR_2 += VAR_4;
        VAR_5 += VAR_7;
        VAR_3 += VAR_13;
        VAR_6 += VAR_14;
    }
    VAR_2 -= VAR_4 * 2;
    VAR_5 -= VAR_7 * 2;
    FUNC_2(VAR_2, VAR_4, VAR_11, VAR_16->CD);
    FUNC_2(VAR_5, VAR_7, (VAR_11 + 2), (VAR_16->CD + 2));


    for (VAR_21 = 0; VAR_21 < 4; VAR_21++) {
        for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
            VAR_8[VAR_20] = VAR_9[VAR_20];
        }
        VAR_8 += VAR_10;
        VAR_9 += VAR_15;
    }

    VAR_8 -= VAR_10 * 4;
    VAR_16->D[0] = (unsigned)VAR_8[3] - VAR_12[3];
    VAR_16->D[1] = (unsigned)VAR_8[3 + VAR_10] - VAR_8[3];
    VAR_16->D[2] = (unsigned)VAR_8[3 + VAR_10 * 2] - VAR_8[3 + VAR_10];
    VAR_16->D[3] = (unsigned)VAR_8[3 + VAR_10 * 3] - VAR_8[3 + VAR_10 * 2];
    for (VAR_20 = 0; VAR_20 < 4; VAR_20++)
        VAR_12[VAR_20] = VAR_8[VAR_20 + VAR_10 * 3];
}
