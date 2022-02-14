
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int type; int frame_rate; int time_base; int channel_layout; int hw_frames_ctx; int sample_aspect_ratio; int h; int w; TYPE_1__* src; } ;
struct TYPE_6__ {int frame_rate; int time_base; int channel_layout; int hw_frames_ctx; int pixel_aspect; int h; int w; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_2__ BufferSourceContext ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_2)
{
    BufferSourceContext *VAR_3 = VAR_2->src->priv;

    switch (VAR_2->type) {
    case 128:
        VAR_2->w = VAR_3->w;
        VAR_2->h = VAR_3->h;
        VAR_2->sample_aspect_ratio = VAR_3->pixel_aspect;

        if (VAR_3->hw_frames_ctx) {
            VAR_2->hw_frames_ctx = FUNC_1(VAR_3->hw_frames_ctx);
            if (!VAR_2->hw_frames_ctx)
                return FUNC_0(VAR_1);
        }
        break;
    case 129:
        if (!VAR_3->channel_layout)
            VAR_3->channel_layout = VAR_2->channel_layout;
        break;
    default:
        return FUNC_0(VAR_0);
    }

    VAR_2->time_base = VAR_3->time_base;
    VAR_2->frame_rate = VAR_3->frame_rate;
    return 0;
}
