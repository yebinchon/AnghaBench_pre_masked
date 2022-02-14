
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {float* mdct_out; TYPE_1__* avctx; } ;
struct TYPE_7__ {scalar_t__ trellis; } ;
typedef int PutBitContext ;
typedef TYPE_2__ NellyMoserEncodeContext ;


 int FUNC_0 (double,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (float) ;
 int* VAR_6 ;
 scalar_t__* VAR_7 ;
 float* VAR_8 ;
 int FUNC_4 (float*,int*) ;
 int* VAR_9 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,float*,int*) ;
 int FUNC_7 (TYPE_2__*,float*,int*) ;
 int FUNC_8 (int *,unsigned char*,int) ;
 double FUNC_9 (int ) ;
 int FUNC_10 (int,int ,unsigned char*) ;
 int* VAR_10 ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int* VAR_11 ;
 scalar_t__* VAR_12 ;
 float* VAR_13 ;
 scalar_t__* VAR_14 ;

__attribute__((used)) static void FUNC_14(NellyMoserEncodeContext *VAR_15, unsigned char *VAR_16, int VAR_17)
{
    PutBitContext VAR_18;
    int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24 = 0;
    float VAR_25, VAR_26, VAR_27;
    float VAR_28[VAR_3];
    int VAR_29[VAR_1], VAR_30[VAR_0];
    float VAR_31[VAR_0];

    FUNC_1(VAR_15);

    FUNC_8(&VAR_18, VAR_16, VAR_17);

    VAR_19 = 0;
    for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
        VAR_27 = 0;
        for (VAR_20 = 0; VAR_20 < VAR_6[VAR_21]; VAR_19++, VAR_20++) {
            VAR_27 += VAR_15->mdct_out[VAR_19 ] * VAR_15->mdct_out[VAR_19 ]
                       + VAR_15->mdct_out[VAR_19 + VAR_1] * VAR_15->mdct_out[VAR_19 + VAR_1];
        }
        VAR_31[VAR_21] =
            FUNC_9(FUNC_0(1.0, VAR_27 / (VAR_6[VAR_21] << 7))) * 1024.0;
    }

    if (VAR_15->avctx->trellis) {
        FUNC_6(VAR_15, VAR_31, VAR_30);
    } else {
        FUNC_7(VAR_15, VAR_31, VAR_30);
    }

    VAR_19 = 0;
    for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
        if (VAR_21) {
            VAR_24 += VAR_7[VAR_30[VAR_21]];
            FUNC_11(&VAR_18, 5, VAR_30[VAR_21]);
        } else {
            VAR_24 = VAR_9[VAR_30[0]];
            FUNC_11(&VAR_18, 6, VAR_30[0]);
        }
        VAR_25 = VAR_10[VAR_24 & 0x7FF] / (1 << ((VAR_24 >> 11) + VAR_5));
        for (VAR_20 = 0; VAR_20 < VAR_6[VAR_21]; VAR_19++, VAR_20++) {
            VAR_15->mdct_out[VAR_19] *= VAR_25;
            VAR_15->mdct_out[VAR_19 + VAR_1] *= VAR_25;
            VAR_28[VAR_19] = VAR_24;
        }
    }

    FUNC_4(VAR_28, VAR_29);

    for (VAR_22 = 0; VAR_22 < 2; VAR_22++) {
        for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++) {
            if (VAR_29[VAR_19] > 0) {
                const float *VAR_32 = VAR_8 + (1 << VAR_29[VAR_19]) - 1;
                VAR_26 = VAR_15->mdct_out[VAR_22 * VAR_1 + VAR_19];
                VAR_23 =
                    VAR_11[FUNC_2 (
                            VAR_26 * VAR_13[VAR_29[VAR_19]] + VAR_12[VAR_29[VAR_19]],
                            VAR_14[VAR_29[VAR_19]],
                            VAR_14[VAR_29[VAR_19]+1] - 1
                            )];
                if (FUNC_3(VAR_26 - VAR_32[VAR_23]) > FUNC_3(VAR_26 - VAR_32[VAR_23 + 1]))
                    VAR_23++;

                FUNC_11(&VAR_18, VAR_29[VAR_19], VAR_23);
            }
        }
        if (!VAR_22)
            FUNC_11(&VAR_18, VAR_4 + VAR_2 - FUNC_12(&VAR_18), 0);
    }

    FUNC_5(&VAR_18);
    FUNC_10(FUNC_13(&VAR_18), 0, VAR_16 + VAR_17 - FUNC_13(&VAR_18));
}
