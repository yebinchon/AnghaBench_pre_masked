
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {TYPE_6__* hw_frames_ctx; int coded_height; int coded_width; int sw_pix_fmt; TYPE_1__* opaque; } ;
struct TYPE_10__ {int format; int initial_pool_size; void* height; void* width; int sw_format; TYPE_2__* hwctx; } ;
struct TYPE_9__ {int frame_type; } ;
struct TYPE_8__ {int hw_device_ref; } ;
typedef TYPE_1__ DecodeContext ;
typedef TYPE_2__ AVQSVFramesContext ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVCodecContext ;


 int const VAR_0 ;
 int const VAR_1 ;
 void* FUNC_0 (int ,int) ;
 int VAR_2 ;
 TYPE_6__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_4, const enum AVPixelFormat *VAR_5)
{
    while (*VAR_5 != VAR_0) {
        if (*VAR_5 == VAR_1) {
            DecodeContext *VAR_6 = VAR_4->opaque;
            AVHWFramesContext *VAR_7;
            AVQSVFramesContext *VAR_8;
            int VAR_9;


            VAR_4->hw_frames_ctx = FUNC_1(VAR_6->hw_device_ref);
            if (!VAR_4->hw_frames_ctx)
                return VAR_0;
            VAR_7 = (AVHWFramesContext*)VAR_4->hw_frames_ctx->data;
            VAR_8 = VAR_7->hwctx;

            VAR_7->format = VAR_1;
            VAR_7->sw_format = VAR_4->sw_pix_fmt;
            VAR_7->width = FUNC_0(VAR_4->coded_width, 32);
            VAR_7->height = FUNC_0(VAR_4->coded_height, 32);
            VAR_7->initial_pool_size = 32;

            VAR_8->frame_type = VAR_2;

            VAR_9 = FUNC_2(VAR_4->hw_frames_ctx);
            if (VAR_9 < 0)
                return VAR_0;

            return VAR_1;
        }

        VAR_5++;
    }

    FUNC_3(VAR_3, "The QSV pixel format not offered in get_format()\n");

    return VAR_0;
}
