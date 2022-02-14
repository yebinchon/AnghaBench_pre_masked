
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_13__ {scalar_t__ format; int sample_aspect_ratio; void* frame_pool; TYPE_7__* hw_frames_ctx; } ;
struct TYPE_12__ {int sample_aspect_ratio; } ;
struct TYPE_11__ {scalar_t__ format; } ;
typedef int FFFramePool ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_7__*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*,int*,int*,int*,int*) ;
 int FUNC_5 (int **) ;
 void* FUNC_6 (int ,int,int,scalar_t__,int) ;

AVFrame *FUNC_7(AVFilterLink *VAR_3, int VAR_4, int VAR_5)
{
    AVFrame *VAR_6 = ((void*)0);
    int VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9 = 0;
    enum AVPixelFormat VAR_10 = VAR_0;

    if (VAR_3->hw_frames_ctx &&
        ((AVHWFramesContext*)VAR_3->hw_frames_ctx->data)->format == VAR_3->format) {
        int VAR_11;
        AVFrame *VAR_12 = FUNC_0();

        if (!VAR_12)
            return ((void*)0);

        VAR_11 = FUNC_2(VAR_3->hw_frames_ctx, VAR_12, 0);
        if (VAR_11 < 0)
            FUNC_1(&VAR_12);

        return VAR_12;
    }

    if (!VAR_3->frame_pool) {
        VAR_3->frame_pool = FUNC_6(VAR_2, VAR_4, VAR_5,
                                                    VAR_3->format, VAR_1);
        if (!VAR_3->frame_pool)
            return ((void*)0);
    } else {
        if (FUNC_4(VAR_3->frame_pool,
                                           &VAR_7, &VAR_8,
                                           &VAR_10, &VAR_9) < 0) {
            return ((void*)0);
        }

        if (VAR_7 != VAR_4 || VAR_8 != VAR_5 ||
            VAR_10 != VAR_3->format || VAR_9 != VAR_1) {

            FUNC_5((FFFramePool **)&VAR_3->frame_pool);
            VAR_3->frame_pool = FUNC_6(VAR_2, VAR_4, VAR_5,
                                                        VAR_3->format, VAR_1);
            if (!VAR_3->frame_pool)
                return ((void*)0);
        }
    }

    VAR_6 = FUNC_3(VAR_3->frame_pool);
    if (!VAR_6)
        return ((void*)0);

    VAR_6->sample_aspect_ratio = VAR_3->sample_aspect_ratio;

    return VAR_6;
}
