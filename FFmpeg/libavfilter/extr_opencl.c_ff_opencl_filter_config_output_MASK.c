
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {int hw_device_ctx; TYPE_1__* priv; } ;
struct TYPE_14__ {int h; int w; TYPE_5__* hw_frames_ctx; TYPE_4__* src; } ;
struct TYPE_13__ {int height; int width; int sw_format; int format; } ;
struct TYPE_12__ {int output_height; int output_width; int output_format; int device_ref; } ;
typedef TYPE_1__ OpenCLFilterContext ;
typedef TYPE_2__ AVHWFramesContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;
typedef TYPE_5__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__**) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,int ,char*,...) ;
 int FUNC_5 (TYPE_4__*,int ) ;

int FUNC_6(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->src;
    OpenCLFilterContext *VAR_6 = VAR_5->priv;
    AVBufferRef *VAR_7 = ((void*)0);
    AVHWFramesContext *VAR_8;
    int VAR_9;

    FUNC_1(&VAR_4->hw_frames_ctx);

    if (!VAR_6->device_ref) {
        if (!VAR_5->hw_device_ctx) {
            FUNC_4(VAR_5, VAR_0, "OpenCL filtering requires an "
                   "OpenCL device.\n");
            return FUNC_0(VAR_2);
        }

        VAR_9 = FUNC_5(VAR_5, VAR_5->hw_device_ctx);
        if (VAR_9 < 0)
            return VAR_9;
    }

    VAR_7 = FUNC_2(VAR_6->device_ref);
    if (!VAR_7) {
        VAR_9 = FUNC_0(VAR_3);
        goto fail;
    }
    VAR_8 = (AVHWFramesContext*)VAR_7->data;

    VAR_8->format = VAR_1;
    VAR_8->sw_format = VAR_6->output_format;
    VAR_8->width = VAR_6->output_width;
    VAR_8->height = VAR_6->output_height;

    VAR_9 = FUNC_3(VAR_7);
    if (VAR_9 < 0) {
        FUNC_4(VAR_5, VAR_0, "Failed to initialise output "
               "frames: %d.\n", VAR_9);
        goto fail;
    }

    VAR_4->hw_frames_ctx = VAR_7;
    VAR_4->w = VAR_6->output_width;
    VAR_4->h = VAR_6->output_height;

    return 0;
fail:
    FUNC_1(&VAR_7);
    return VAR_9;
}
