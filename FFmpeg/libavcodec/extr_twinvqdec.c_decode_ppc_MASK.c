
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int pgain_bit; int ppc_period_bit; int peak_per2wid; int ppc_shape_len; } ;
typedef TYPE_2__ TwinVQModeTab ;
struct TYPE_7__ {TYPE_1__* avctx; TYPE_2__* mtab; } ;
typedef TYPE_3__ TwinVQContext ;
struct TYPE_5__ {int sample_rate; int bit_rate; int channels; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,float const*,float,float*,int ) ;
 double FUNC_2 (float,double,int ) ;

__attribute__((used)) static void FUNC_3(TwinVQContext *VAR_1, int VAR_2, int VAR_3,
                       const float *VAR_4, float *VAR_5)
{
    const TwinVQModeTab *VAR_6 = VAR_1->mtab;
    int VAR_7 = VAR_1->avctx->sample_rate / 1000;
    int VAR_8 = VAR_1->avctx->bit_rate / (1000 * VAR_1->avctx->channels);
    int VAR_9 = FUNC_0(40 * 2 * VAR_6->size, VAR_7);
    int VAR_10 = FUNC_0(40 * 2 * VAR_6->size * 6, VAR_7);
    int VAR_11 = VAR_10 - VAR_9;
    float VAR_12 = 25000.0 / ((1 << VAR_6->pgain_bit) - 1);
    float VAR_13 = 1.0 / 8192 *
                       FUNC_2(VAR_12 * VAR_3 +
                                           VAR_12 / 2,
                                       25000.0, VAR_0);



    int VAR_14 = VAR_9 +
                 FUNC_0(VAR_2 * VAR_11,
                             (1 << VAR_6->ppc_period_bit) - 1);
    int VAR_15;

    if (VAR_7 == 22 && VAR_8 == 32) {

        VAR_15 = FUNC_0((VAR_14 + 800) * VAR_6->peak_per2wid,
                            400 * VAR_6->size);
    } else
        VAR_15 = VAR_14 * VAR_6->peak_per2wid / (400 * VAR_6->size);

    FUNC_1(VAR_14, VAR_15, VAR_4, VAR_13, VAR_5, VAR_6->ppc_shape_len);
}
