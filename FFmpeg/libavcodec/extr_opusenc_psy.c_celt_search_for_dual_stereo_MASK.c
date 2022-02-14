
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int dual_stereo; } ;
struct TYPE_9__ {int dual_stereo_used; TYPE_1__* avctx; } ;
struct TYPE_8__ {int channels; } ;
typedef TYPE_2__ OpusPsyContext ;
typedef TYPE_3__ CeltFrame ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*,float*) ;

__attribute__((used)) static void FUNC_1(OpusPsyContext *VAR_0, CeltFrame *VAR_1)
{
    float VAR_2, VAR_3;
    VAR_1->dual_stereo = 0;

    if (VAR_0->avctx->channels < 2)
        return;

    FUNC_0(VAR_0, VAR_1, &VAR_2);
    VAR_1->dual_stereo = 1;
    FUNC_0(VAR_0, VAR_1, &VAR_3);

    VAR_1->dual_stereo = VAR_3 < VAR_2;
    VAR_0->dual_stereo_used += VAR_3 < VAR_2;
}
