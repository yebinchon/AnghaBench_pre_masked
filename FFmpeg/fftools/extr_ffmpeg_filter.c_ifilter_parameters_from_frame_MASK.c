
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hw_frames_ctx; int channel_layout; int channels; int sample_rate; int sample_aspect_ratio; int height; int width; int format; } ;
struct TYPE_5__ {int hw_frames_ctx; int channel_layout; int channels; int sample_rate; int sample_aspect_ratio; int height; int width; int format; } ;
typedef TYPE_1__ InputFilter ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

int FUNC_3(InputFilter *VAR_1, const AVFrame *VAR_2)
{
    FUNC_2(&VAR_1->hw_frames_ctx);

    VAR_1->format = VAR_2->format;

    VAR_1->width = VAR_2->width;
    VAR_1->height = VAR_2->height;
    VAR_1->sample_aspect_ratio = VAR_2->sample_aspect_ratio;

    VAR_1->sample_rate = VAR_2->sample_rate;
    VAR_1->channels = VAR_2->channels;
    VAR_1->channel_layout = VAR_2->channel_layout;

    if (VAR_2->hw_frames_ctx) {
        VAR_1->hw_frames_ctx = FUNC_1(VAR_2->hw_frames_ctx);
        if (!VAR_1->hw_frames_ctx)
            return FUNC_0(VAR_0);
    }

    return 0;
}
