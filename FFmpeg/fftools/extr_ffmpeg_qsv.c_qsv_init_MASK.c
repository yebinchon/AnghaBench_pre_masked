
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_13__ {scalar_t__ extra_hw_frames; int sw_pix_fmt; int coded_height; int coded_width; TYPE_1__* opaque; } ;
struct TYPE_12__ {scalar_t__ initial_pool_size; int sw_format; int format; void* height; void* width; TYPE_2__* hwctx; } ;
struct TYPE_11__ {int frame_type; } ;
struct TYPE_10__ {int hwaccel_uninit; int hwaccel_get_buffer; TYPE_7__* hw_frames_ctx; } ;
typedef TYPE_1__ InputStream ;
typedef TYPE_2__ AVQSVFramesContext ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_7__**) ;
 TYPE_7__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int *,int ,char*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_7(AVCodecContext *VAR_7)
{
    InputStream *VAR_8 = VAR_7->opaque;
    AVHWFramesContext *VAR_9;
    AVQSVFramesContext *VAR_10;
    int VAR_11;

    if (!VAR_4) {
        VAR_11 = FUNC_6(VAR_8);
        if (VAR_11 < 0)
            return VAR_11;
    }

    FUNC_2(&VAR_8->hw_frames_ctx);
    VAR_8->hw_frames_ctx = FUNC_3(VAR_4);
    if (!VAR_8->hw_frames_ctx)
        return FUNC_0(VAR_2);

    VAR_9 = (AVHWFramesContext*)VAR_8->hw_frames_ctx->data;
    VAR_10 = VAR_9->hwctx;

    VAR_9->width = FUNC_1(VAR_7->coded_width, 32);
    VAR_9->height = FUNC_1(VAR_7->coded_height, 32);
    VAR_9->format = VAR_1;
    VAR_9->sw_format = VAR_7->sw_pix_fmt;
    VAR_9->initial_pool_size = 64 + VAR_7->extra_hw_frames;
    VAR_10->frame_type = VAR_3;

    VAR_11 = FUNC_4(VAR_8->hw_frames_ctx);
    if (VAR_11 < 0) {
        FUNC_5(((void*)0), VAR_0, "Error initializing a QSV frame pool\n");
        return VAR_11;
    }

    VAR_8->hwaccel_get_buffer = VAR_5;
    VAR_8->hwaccel_uninit = VAR_6;

    return 0;
}
