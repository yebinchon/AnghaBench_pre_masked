
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_16__ {int * inputs; scalar_t__ nb_inputs; TYPE_1__* priv; } ;
struct TYPE_15__ {TYPE_4__* src; } ;
struct TYPE_14__ {int pts; int sample_rate; int nb_samples; } ;
struct TYPE_13__ {scalar_t__ duration; scalar_t__ nb_samples; int pts; int sample_rate; int instance; } ;
typedef TYPE_1__ LV2Context ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->src;
    LV2Context *VAR_5 = VAR_4->priv;
    AVFrame *VAR_6;
    int64_t VAR_7;

    if (VAR_4->nb_inputs)
        return FUNC_5(VAR_4->inputs[0]);

    VAR_7 = FUNC_1(VAR_5->pts, VAR_1, VAR_5->sample_rate);
    if (VAR_5->duration >= 0 && VAR_7 >= VAR_5->duration)
        return VAR_0;

    VAR_6 = FUNC_4(VAR_3, VAR_5->nb_samples);
    if (!VAR_6)
        return FUNC_0(VAR_2);

    FUNC_2(VAR_5, VAR_6, VAR_6);

    FUNC_6(VAR_5->instance, VAR_6->nb_samples);

    VAR_6->sample_rate = VAR_5->sample_rate;
    VAR_6->pts = VAR_5->pts;
    VAR_5->pts += VAR_5->nb_samples;

    return FUNC_3(VAR_3, VAR_6);
}
