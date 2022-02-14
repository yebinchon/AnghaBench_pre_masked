
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;
struct TYPE_9__ {TYPE_1__* fmode; } ;
typedef TYPE_3__ TwinVQModeTab ;
struct TYPE_10__ {float* gain_bits; float* sub_gain_bits; } ;
typedef TYPE_4__ TwinVQFrameData ;
struct TYPE_11__ {size_t cur_frame; TYPE_2__* avctx; TYPE_4__* bits; TYPE_3__* mtab; } ;
typedef TYPE_5__ TwinVQContext ;
struct TYPE_8__ {int channels; } ;
struct TYPE_7__ {int sub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 float FUNC_0 (float,int,int ) ;

__attribute__((used)) static void FUNC_1(TwinVQContext *VAR_6,
                     enum TwinVQFrameType VAR_7, float *VAR_8)
{
    const TwinVQModeTab *VAR_9 = VAR_6->mtab;
    const TwinVQFrameData *VAR_10 = &VAR_6->bits[VAR_6->cur_frame];
    int VAR_11, VAR_12;
    int VAR_13 = VAR_9->fmode[VAR_7].sub;
    float VAR_14 = VAR_0 / ((1 << VAR_2) - 1);
    float VAR_15 = VAR_4 / ((1 << VAR_5) - 1);

    if (VAR_7 == VAR_1) {
        for (VAR_11 = 0; VAR_11 < VAR_6->avctx->channels; VAR_11++)
            VAR_8[VAR_11] = (1.0 / (1 << 13)) *
                     FUNC_0(VAR_14 * 0.5 + VAR_14 * VAR_10->gain_bits[VAR_11],
                                     VAR_0, VAR_3);
    } else {
        for (VAR_11 = 0; VAR_11 < VAR_6->avctx->channels; VAR_11++) {
            float VAR_16 = (1.0 / (1 << 23)) *
                        FUNC_0(VAR_14 * 0.5 + VAR_14 * VAR_10->gain_bits[VAR_11],
                                        VAR_0, VAR_3);

            for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
                VAR_8[VAR_11 * VAR_13 + VAR_12] =
                    VAR_16 * FUNC_0(VAR_15 * 0.5 +
                                          VAR_15 * VAR_10->sub_gain_bits[VAR_11 * VAR_13 + VAR_12],
                                          VAR_4, VAR_3);
        }
    }
}
