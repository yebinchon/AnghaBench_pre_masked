
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int is_disabled; TYPE_2__** outputs; TYPE_1__* priv; } ;
struct TYPE_10__ {TYPE_3__* dst; } ;
struct TYPE_9__ {int queue; int is_enabled; int * gain_history_smoothed; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,double*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_3__*,int *,int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    DynamicAudioNormalizerContext *VAR_3 = VAR_2->priv;
    AVFilterLink *VAR_4 = VAR_0->dst->outputs[0];
    int VAR_5 = 1;

    if (!FUNC_4(VAR_3->gain_history_smoothed[0])) {
        double VAR_6;
        AVFrame *VAR_7 = FUNC_7(&VAR_3->queue);

        FUNC_3(VAR_3->is_enabled, &VAR_6);

        FUNC_0(VAR_3, VAR_7, VAR_6 > 0.);
        VAR_5 = FUNC_8(VAR_4, VAR_7);
    }

    FUNC_2(VAR_1);
    FUNC_5(VAR_3->is_enabled, !VAR_2->is_disabled);
    FUNC_1(VAR_3, VAR_1);
    FUNC_6(VAR_2, &VAR_3->queue, VAR_1);

    return VAR_5;
}
