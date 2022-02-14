
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float size; int ppc_period_bit; float ppc_shape_len; int pgain_bit; } ;
typedef TYPE_2__ TwinVQModeTab ;
struct TYPE_7__ {TYPE_1__* avctx; TYPE_2__* mtab; } ;
typedef TYPE_3__ TwinVQContext ;
struct TYPE_5__ {int sample_rate; int bit_rate; int channels; } ;


 int VAR_0 ;
 int FUNC_0 (float,int,float const*,float,float*,float) ;
 float FUNC_1 (int) ;
 float FUNC_2 (double,float) ;
 double FUNC_3 (float,float,int ) ;

__attribute__((used)) static void FUNC_4(TwinVQContext *VAR_1, int VAR_2, int VAR_3,
                       const float *VAR_4, float *VAR_5)
{
    const TwinVQModeTab *VAR_6 = VAR_1->mtab;
    int VAR_7 = VAR_1->avctx->sample_rate / 1000;
    int VAR_8 = VAR_1->avctx->bit_rate / (1000 * VAR_1->avctx->channels);
    int VAR_9;

    float VAR_10 = (float)VAR_6->size / VAR_7;
    float VAR_11, VAR_12, VAR_13, VAR_14;
    float VAR_15;

    float VAR_16, VAR_17, VAR_18;

    if (VAR_1->avctx->channels == 1) {
        VAR_11 = FUNC_1(VAR_10 * 0.2);
        VAR_12 = VAR_11 + FUNC_1(6);
    } else {
        VAR_11 = (int)(VAR_10 * 0.2 * 400 + 0.5) / 400.0;
        VAR_12 = (int)(VAR_10 * 0.2 * 400 * 6 + 0.5) / 400.0;
    }
    VAR_13 = VAR_12 - VAR_11;
    VAR_14 = VAR_11 + VAR_2 * VAR_13 /
                   ((1 << VAR_6->ppc_period_bit) - 1);
    if (VAR_1->avctx->channels == 1)
        VAR_14 = FUNC_2(2.0, VAR_14);
    else
        VAR_14 = (int)(VAR_14 * 400 + 0.5) / 400.0;

    switch (VAR_7) {
    case 8: VAR_15 = 2.0; break;
    case 11: VAR_15 = 3.0; break;
    case 16: VAR_15 = 3.0; break;
    case 22: VAR_15 = VAR_8 == 32 ? 2.0 : 4.0; break;
    case 44: VAR_15 = 8.0; break;
    default: VAR_15 = 4.0;
    }

    VAR_9 = (int)(VAR_15 / (VAR_6->size / VAR_14) * VAR_6->ppc_shape_len);
    if (VAR_7 == 22 && VAR_8 == 32)
        VAR_9 = (int)((2.0 / VAR_14 + 1) * VAR_9 + 0.5);

    VAR_16 = VAR_1->avctx->channels == 2 ? 25000.0 : 20000.0;
    VAR_17 = VAR_16 / ((1 << VAR_6->pgain_bit) - 1);
    VAR_18 = 1.0 / 8192 *
                 FUNC_3(VAR_17 * VAR_3 + VAR_17 / 2,
                                 VAR_16, VAR_0);

    FUNC_0(VAR_14, VAR_9, VAR_4, VAR_18, VAR_5, VAR_6->ppc_shape_len);
}
