
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int num; int den; } ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int sample_rate; int channels; TYPE_3__* dst; } ;
struct TYPE_6__ {int w; int rms_factor; int mode; int draw_persistent_duration; int persistent_max_frames; void* nb_frames_max_display; void* max_persistent; TYPE_5__ frame_rate; int meter; void* max; void* color_lut; void* values; scalar_t__ nb_samples; } ;
typedef TYPE_1__ ShowVolumeContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_2 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_5__) ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->dst;
    ShowVolumeContext *VAR_7 = VAR_6->priv;

    VAR_7->nb_samples = FUNC_1(1, FUNC_4(VAR_5->sample_rate, VAR_7->frame_rate.den, VAR_7->frame_rate.num));
    VAR_7->values = FUNC_2(VAR_5->channels * VAR_2, sizeof(double));
    if (!VAR_7->values)
        return FUNC_0(VAR_1);

    VAR_7->color_lut = FUNC_2(VAR_7->w, sizeof(*VAR_7->color_lut) * VAR_5->channels);
    if (!VAR_7->color_lut)
        return FUNC_0(VAR_1);

    VAR_7->max = FUNC_2(VAR_5->channels, sizeof(*VAR_7->max));
    if (!VAR_7->max)
        return FUNC_0(VAR_1);

    VAR_7->rms_factor = 10000. / VAR_5->sample_rate;

    switch (VAR_7->mode) {
    case 0: VAR_7->meter = VAR_3; break;
    case 1: VAR_7->meter = VAR_4; break;
    default: return VAR_0;
    }

    if (VAR_7->draw_persistent_duration > 0.) {
        VAR_7->persistent_max_frames = (int) FUNC_1(FUNC_3(VAR_7->frame_rate) * VAR_7->draw_persistent_duration, 1.);
        VAR_7->max_persistent = FUNC_2(VAR_5->channels * VAR_7->persistent_max_frames, sizeof(*VAR_7->max_persistent));
        VAR_7->nb_frames_max_display = FUNC_2(VAR_5->channels * VAR_7->persistent_max_frames, sizeof(*VAR_7->nb_frames_max_display));
    }
    return 0;
}
