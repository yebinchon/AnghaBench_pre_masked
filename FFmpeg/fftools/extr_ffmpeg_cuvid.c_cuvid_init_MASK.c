
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {int height; int width; int sw_pix_fmt; TYPE_1__* opaque; } ;
struct TYPE_10__ {int height; int width; int sw_format; int format; } ;
struct TYPE_9__ {int hwaccel_uninit; TYPE_6__* hw_frames_ctx; int hwaccel_device; } ;
typedef TYPE_1__ InputStream ;
typedef TYPE_2__ AVHWFramesContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_6__**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int *,int ) ;
 TYPE_6__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_3__*,int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_7(AVCodecContext *VAR_8)
{
    InputStream *VAR_9 = VAR_8->opaque;
    AVHWFramesContext *VAR_10;
    int VAR_11;

    FUNC_6(VAR_8, VAR_3, "Initializing cuvid hwaccel\n");

    if (!VAR_7) {
        VAR_11 = FUNC_3(&VAR_7, VAR_0,
                                     VAR_9->hwaccel_device, ((void*)0), 0);
        if (VAR_11 < 0) {
            FUNC_6(VAR_8, VAR_2, "Error creating a CUDA device\n");
            return VAR_11;
        }
    }

    FUNC_1(&VAR_9->hw_frames_ctx);
    VAR_9->hw_frames_ctx = FUNC_4(VAR_7);
    if (!VAR_9->hw_frames_ctx) {
        FUNC_6(VAR_8, VAR_2, "Error creating a CUDA frames context\n");
        return FUNC_0(VAR_5);
    }

    VAR_10 = (AVHWFramesContext*)VAR_9->hw_frames_ctx->data;

    VAR_10->format = VAR_4;
    VAR_10->sw_format = VAR_8->sw_pix_fmt;
    VAR_10->width = VAR_8->width;
    VAR_10->height = VAR_8->height;

    FUNC_6(VAR_8, VAR_1, "Initializing CUDA frames context: sw_format = %s, width = %d, height = %d\n",
           FUNC_2(VAR_10->sw_format), VAR_10->width, VAR_10->height);

    VAR_11 = FUNC_5(VAR_9->hw_frames_ctx);
    if (VAR_11 < 0) {
        FUNC_6(VAR_8, VAR_2, "Error initializing a CUDA frame pool\n");
        return VAR_11;
    }

    VAR_9->hwaccel_uninit = VAR_6;

    return 0;
}
