
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_14__ {scalar_t__ format; int height; int width; TYPE_5__* hw_frames_ctx; } ;
struct TYPE_13__ {int height; int width; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (int**) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__ const*,int) ;
 int FUNC_7 (TYPE_5__*,int ,int**,int ) ;

__attribute__((used)) static int FUNC_8(AVFrame *VAR_2, const AVFrame *VAR_3, int VAR_4)
{
    AVHWFramesContext *VAR_5 = (AVHWFramesContext*)VAR_3->hw_frames_ctx->data;
    AVFrame *VAR_6;
    int VAR_7 = 0;

    VAR_6 = FUNC_1();
    if (!VAR_6)
        return FUNC_0(VAR_1);



    if (VAR_2->format >= 0) {
        VAR_6->format = VAR_2->format;
    } else {
        enum AVPixelFormat *VAR_8;

        VAR_7 = FUNC_7(VAR_3->hw_frames_ctx,
                                              VAR_0,
                                              &VAR_8, 0);
        if (VAR_7 < 0)
            goto fail;
        VAR_6->format = VAR_8[0];
        FUNC_5(&VAR_8);
    }
    VAR_6->width = VAR_5->width;
    VAR_6->height = VAR_5->height;

    VAR_7 = FUNC_3(VAR_6, 32);
    if (VAR_7 < 0)
        goto fail;

    VAR_7 = FUNC_6(VAR_6, VAR_3, VAR_4);
    if (VAR_7 < 0)
        goto fail;

    VAR_6->width = VAR_3->width;
    VAR_6->height = VAR_3->height;

    FUNC_4(VAR_2, VAR_6);

fail:
    FUNC_2(&VAR_6);
    return VAR_7;
}
