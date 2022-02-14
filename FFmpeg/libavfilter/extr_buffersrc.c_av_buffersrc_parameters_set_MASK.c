
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int den; int num; } ;
struct TYPE_14__ {int den; int num; } ;
struct TYPE_11__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_18__ {int channel_layout; int sample_rate; int format; int hw_frames_ctx; TYPE_5__ frame_rate; TYPE_4__ sample_aspect_ratio; int height; int width; TYPE_1__ time_base; } ;
struct TYPE_17__ {TYPE_3__* filter; TYPE_6__* priv; } ;
struct TYPE_16__ {int got_format_from_params; int channel_layout; int sample_rate; int sample_fmt; int hw_frames_ctx; TYPE_5__ frame_rate; TYPE_4__ pixel_aspect; int h; int w; int pix_fmt; TYPE_1__ time_base; } ;
struct TYPE_13__ {TYPE_2__* outputs; } ;
struct TYPE_12__ {int type; } ;
typedef TYPE_6__ BufferSourceContext ;
typedef TYPE_7__ AVFilterContext ;
typedef TYPE_8__ AVBufferSrcParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(AVFilterContext *VAR_4, AVBufferSrcParameters *VAR_5)
{
    BufferSourceContext *VAR_6 = VAR_4->priv;

    if (VAR_5->time_base.num > 0 && VAR_5->time_base.den > 0)
        VAR_6->time_base = VAR_5->time_base;

    switch (VAR_4->filter->outputs[0].type) {
    case 128:
        if (VAR_5->format != VAR_1) {
            VAR_6->got_format_from_params = 1;
            VAR_6->pix_fmt = VAR_5->format;
        }
        if (VAR_5->width > 0)
            VAR_6->w = VAR_5->width;
        if (VAR_5->height > 0)
            VAR_6->h = VAR_5->height;
        if (VAR_5->sample_aspect_ratio.num > 0 && VAR_5->sample_aspect_ratio.den > 0)
            VAR_6->pixel_aspect = VAR_5->sample_aspect_ratio;
        if (VAR_5->frame_rate.num > 0 && VAR_5->frame_rate.den > 0)
            VAR_6->frame_rate = VAR_5->frame_rate;
        if (VAR_5->hw_frames_ctx) {
            FUNC_2(&VAR_6->hw_frames_ctx);
            VAR_6->hw_frames_ctx = FUNC_1(VAR_5->hw_frames_ctx);
            if (!VAR_6->hw_frames_ctx)
                return FUNC_0(VAR_3);
        }
        break;
    case 129:
        if (VAR_5->format != VAR_2) {
            VAR_6->got_format_from_params = 1;
            VAR_6->sample_fmt = VAR_5->format;
        }
        if (VAR_5->sample_rate > 0)
            VAR_6->sample_rate = VAR_5->sample_rate;
        if (VAR_5->channel_layout)
            VAR_6->channel_layout = VAR_5->channel_layout;
        break;
    default:
        return VAR_0;
    }

    return 0;
}
