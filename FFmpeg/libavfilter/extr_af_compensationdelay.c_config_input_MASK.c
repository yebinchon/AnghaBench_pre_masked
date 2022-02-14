
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {unsigned int nb_samples; int channel_layout; int format; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int sample_rate; int channel_layout; int format; TYPE_3__* dst; } ;
struct TYPE_7__ {int delay; int distance_m; int distance_cm; double distance_mm; unsigned int buf_size; TYPE_5__* delay_frame; int temp; } ;
typedef TYPE_1__ CompensationDelayContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    CompensationDelayContext *VAR_4 = VAR_3->priv;
    unsigned VAR_5, VAR_6 = 1;

    VAR_4->delay = (VAR_4->distance_m * 100. + VAR_4->distance_cm * 1. + VAR_4->distance_mm * .1) *
               FUNC_1(VAR_4->temp) * VAR_2->sample_rate;
    VAR_5 = VAR_2->sample_rate * VAR_0;

    while (VAR_6 < VAR_5)
        VAR_6 <<= 1;

    VAR_4->delay_frame = FUNC_2();
    if (!VAR_4->delay_frame)
        return FUNC_0(VAR_1);

    VAR_4->buf_size = VAR_6;
    VAR_4->delay_frame->format = VAR_2->format;
    VAR_4->delay_frame->nb_samples = VAR_6;
    VAR_4->delay_frame->channel_layout = VAR_2->channel_layout;

    return FUNC_3(VAR_4->delay_frame, 32);
}
