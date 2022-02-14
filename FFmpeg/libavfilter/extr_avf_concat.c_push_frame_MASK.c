
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct concat_in {int nb_frames; scalar_t__ pts; } ;
struct TYPE_12__ {unsigned int nb_outputs; TYPE_3__** outputs; TYPE_3__** inputs; TYPE_1__* priv; } ;
struct TYPE_11__ {int time_base; scalar_t__ sample_rate; } ;
struct TYPE_10__ {scalar_t__ pts; scalar_t__ nb_samples; } ;
struct TYPE_9__ {scalar_t__ delta_ts; struct concat_in* in; } ;
typedef TYPE_1__ ConcatContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0, unsigned VAR_1, AVFrame *VAR_2)
{
    ConcatContext *VAR_3 = VAR_0->priv;
    unsigned VAR_4 = VAR_1 % VAR_0->nb_outputs;
    AVFilterLink * VAR_5 = VAR_0-> inputs[ VAR_1];
    AVFilterLink *VAR_6 = VAR_0->outputs[VAR_4];
    struct concat_in *VAR_7 = &VAR_3->in[VAR_1];

    VAR_2->pts = FUNC_2(VAR_2->pts, VAR_5->time_base, VAR_6->time_base);
    VAR_7->pts = VAR_2->pts;
    VAR_7->nb_frames++;

    if (VAR_5->sample_rate)

        VAR_7->pts += FUNC_2(VAR_2->nb_samples,
                                FUNC_0(1, VAR_5->sample_rate),
                                VAR_6->time_base);
    else if (VAR_7->nb_frames >= 2)

        VAR_7->pts = FUNC_1(VAR_7->pts, VAR_7->nb_frames, VAR_7->nb_frames - 1);

    VAR_2->pts += VAR_3->delta_ts;
    return FUNC_3(VAR_6, VAR_2);
}
