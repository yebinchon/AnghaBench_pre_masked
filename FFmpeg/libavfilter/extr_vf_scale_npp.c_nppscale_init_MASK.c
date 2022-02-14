
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void* frame; } ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {scalar_t__ format; void* tmp_frame; TYPE_5__* stages; int format_str; } ;
typedef TYPE_1__ NPPScaleContext ;
typedef TYPE_2__ AVFilterContext ;


 int AVERROR (int ) ;
 int AV_LOG_ERROR ;
 scalar_t__ AV_PIX_FMT_NONE ;
 int EINVAL ;
 int ENOMEM ;
 int FF_ARRAY_ELEMS (TYPE_5__*) ;
 void* av_frame_alloc () ;
 scalar_t__ av_get_pix_fmt (int ) ;
 int av_log (TYPE_2__*,int ,char*,int ) ;
 int strcmp (int ,char*) ;

__attribute__((used)) static int nppscale_init(AVFilterContext *ctx)
{
    NPPScaleContext *s = ctx->priv;
    int i;

    if (!strcmp(s->format_str, "same")) {
        s->format = AV_PIX_FMT_NONE;
    } else {
        s->format = av_get_pix_fmt(s->format_str);
        if (s->format == AV_PIX_FMT_NONE) {
            av_log(ctx, AV_LOG_ERROR, "Unrecognized pixel format: %s\n", s->format_str);
            return AVERROR(EINVAL);
        }
    }

    for (i = 0; i < FF_ARRAY_ELEMS(s->stages); i++) {
        s->stages[i].frame = av_frame_alloc();
        if (!s->stages[i].frame)
            return AVERROR(ENOMEM);
    }
    s->tmp_frame = av_frame_alloc();
    if (!s->tmp_frame)
        return AVERROR(ENOMEM);

    return 0;
}
