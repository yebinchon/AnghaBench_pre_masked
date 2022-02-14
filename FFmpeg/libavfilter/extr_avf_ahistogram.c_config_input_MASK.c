
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int channels; int sample_rate; TYPE_4__* dst; } ;
struct TYPE_6__ {int num; int den; } ;
struct TYPE_7__ {int dchannels; scalar_t__ dmode; void* achistogram; int w; void* shistogram; TYPE_1__ frame_rate; int nb_samples; } ;
typedef TYPE_2__ AudioHistogramContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    AudioHistogramContext *VAR_4 = VAR_3->priv;

    VAR_4->nb_samples = FUNC_1(1, FUNC_3(VAR_2->sample_rate, VAR_4->frame_rate.den, VAR_4->frame_rate.num));
    VAR_4->dchannels = VAR_4->dmode == VAR_1 ? 1 : VAR_2->channels;
    VAR_4->shistogram = FUNC_2(VAR_4->w, VAR_4->dchannels * sizeof(*VAR_4->shistogram));
    if (!VAR_4->shistogram)
        return FUNC_0(VAR_0);

    VAR_4->achistogram = FUNC_2(VAR_4->w, VAR_4->dchannels * sizeof(*VAR_4->achistogram));
    if (!VAR_4->achistogram)
        return FUNC_0(VAR_0);

    return 0;
}
