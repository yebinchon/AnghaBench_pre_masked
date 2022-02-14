
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int end_band; int intensity_stereo; } ;
struct TYPE_9__ {float avg_is_band; TYPE_1__* avctx; } ;
struct TYPE_8__ {int channels; } ;
typedef TYPE_2__ OpusPsyContext ;
typedef TYPE_3__ CeltFrame ;


 int VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,float*) ;

__attribute__((used)) static void FUNC_1(OpusPsyContext *VAR_2, CeltFrame *VAR_3)
{
    int VAR_4, VAR_5 = VAR_0 - 1;
    float VAR_6, VAR_7 = VAR_1;

    float VAR_8 = 0;

    if (VAR_2->avctx->channels < 2)
        return;

    for (VAR_4 = VAR_3->end_band; VAR_4 >= VAR_8; VAR_4--) {
        VAR_3->intensity_stereo = VAR_4;
        FUNC_0(VAR_2, VAR_3, &VAR_6);
        if (VAR_7 > VAR_6) {
            VAR_7 = VAR_6;
            VAR_5 = VAR_4;
        }
    }

    VAR_3->intensity_stereo = VAR_5;
    VAR_2->avg_is_band = (VAR_2->avg_is_band + VAR_3->intensity_stereo)/2.0f;
}
