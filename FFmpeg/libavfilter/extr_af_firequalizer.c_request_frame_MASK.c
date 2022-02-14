
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * inputs; TYPE_1__* priv; } ;
struct TYPE_11__ {int channels; TYPE_4__* src; } ;
struct TYPE_10__ {scalar_t__ nb_samples; int pts; int format; int extended_data; } ;
struct TYPE_9__ {scalar_t__ remaining; scalar_t__ frame_nsamples_max; int next_pts; } ;
typedef TYPE_1__ FIREqualizerContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    FIREqualizerContext *VAR_4= VAR_3->priv;
    int VAR_5;

    VAR_5 = FUNC_4(VAR_3->inputs[0]);
    if (VAR_5 == VAR_0 && VAR_4->remaining > 0 && VAR_4->frame_nsamples_max > 0) {
        AVFrame *VAR_6 = FUNC_3(VAR_2, FUNC_1(VAR_4->remaining, VAR_4->frame_nsamples_max));

        if (!VAR_6)
            return FUNC_0(VAR_1);

        FUNC_2(VAR_6->extended_data, 0, VAR_6->nb_samples, VAR_2->channels, VAR_6->format);
        VAR_6->pts = VAR_4->next_pts;
        VAR_4->remaining -= VAR_6->nb_samples;
        VAR_5 = FUNC_5(VAR_3->inputs[0], VAR_6);
    }

    return VAR_5;
}
