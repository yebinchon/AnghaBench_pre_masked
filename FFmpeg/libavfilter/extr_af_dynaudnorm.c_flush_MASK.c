
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_16__ {int * inputs; TYPE_1__* priv; } ;
struct TYPE_15__ {TYPE_4__* src; } ;
struct TYPE_14__ {int pts; } ;
struct TYPE_12__ {scalar_t__ available; } ;
struct TYPE_13__ {TYPE_11__ queue; scalar_t__ delay; int pts; int * gain_history_smoothed; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    DynamicAudioNormalizerContext *VAR_2 = VAR_1->priv;
    int VAR_3 = 0;

    if (!FUNC_0(VAR_2->gain_history_smoothed[0])) {
        VAR_3 = FUNC_3(VAR_2, VAR_1->inputs[0], VAR_0);
    } else if (VAR_2->queue.available) {
        AVFrame *VAR_4 = FUNC_1(&VAR_2->queue);

        VAR_2->pts = VAR_4->pts;
        VAR_3 = FUNC_2(VAR_0, VAR_4);
        VAR_2->delay = VAR_2->queue.available;
    }

    return VAR_3;
}
