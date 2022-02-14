
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_2__* priv; } ;
struct TYPE_18__ {int height; int width; int hw_frames_ctx; } ;
struct TYPE_17__ {TYPE_1__* planes_out; TYPE_3__* frame; TYPE_3__* tmp_frame; } ;
struct TYPE_16__ {int height; int width; } ;
typedef TYPE_2__ CUDAScaleContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0, AVFrame *VAR_1, AVFrame *VAR_2)
{
    CUDAScaleContext *VAR_3 = VAR_0->priv;
    AVFrame *VAR_4 = VAR_2;
    int VAR_5;

    VAR_5 = FUNC_3(VAR_0, VAR_3->frame, VAR_4);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_4 = VAR_3->frame;
    VAR_5 = FUNC_2(VAR_4->hw_frames_ctx, VAR_3->tmp_frame, 0);
    if (VAR_5 < 0)
        return VAR_5;

    FUNC_1(VAR_1, VAR_3->frame);
    FUNC_1(VAR_3->frame, VAR_3->tmp_frame);

    VAR_3->frame->width = VAR_3->planes_out[0].width;
    VAR_3->frame->height = VAR_3->planes_out[0].height;

    VAR_5 = FUNC_0(VAR_1, VAR_2);
    if (VAR_5 < 0)
        return VAR_5;

    return 0;
}
