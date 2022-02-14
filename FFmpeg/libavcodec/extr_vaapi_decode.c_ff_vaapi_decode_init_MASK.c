
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ VAStatus ;
struct TYPE_22__ {scalar_t__ va_config; int have_old_context; void* va_context; TYPE_4__* hwfc; TYPE_3__* hwctx; TYPE_6__* frames; TYPE_7__* device; TYPE_2__* old_context; TYPE_15__* device_ref; } ;
typedef TYPE_5__ VAAPIDecodeContext ;
struct TYPE_25__ {int coded_height; int coded_width; TYPE_10__* hw_frames_ctx; TYPE_2__* hwaccel_context; TYPE_1__* internal; } ;
struct TYPE_24__ {TYPE_3__* hwctx; } ;
struct TYPE_23__ {int device_ref; TYPE_7__* device_ctx; TYPE_4__* hwctx; } ;
struct TYPE_21__ {int nb_surfaces; int surface_ids; } ;
struct TYPE_20__ {int display; int driver_quirks; } ;
struct TYPE_19__ {scalar_t__ config_id; void* context_id; int display; } ;
struct TYPE_18__ {TYPE_5__* hwaccel_priv_data; } ;
struct TYPE_17__ {scalar_t__ data; } ;
struct TYPE_16__ {scalar_t__ data; } ;
typedef TYPE_6__ AVHWFramesContext ;
typedef TYPE_7__ AVHWDeviceContext ;
typedef TYPE_8__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_15__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_8__*,int ,char*,...) ;
 int FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (TYPE_8__*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ,int ,int ,int ,int ,void**) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_8__*,int ,scalar_t__*,TYPE_10__*) ;

int FUNC_8(AVCodecContext *VAR_10)
{
    VAAPIDecodeContext *VAR_11 = VAR_10->internal->hwaccel_priv_data;
    VAStatus VAR_12;
    int VAR_13;

    VAR_11->va_config = VAR_7;
    VAR_11->va_context = VAR_7;
    VAR_13 = FUNC_3(VAR_10, VAR_0);
    if (VAR_13 < 0)
        goto fail;

    VAR_11->frames = (AVHWFramesContext*)VAR_10->hw_frames_ctx->data;
    VAR_11->hwfc = VAR_11->frames->hwctx;
    VAR_11->device = VAR_11->frames->device_ctx;
    VAR_11->hwctx = VAR_11->device->hwctx;

    VAR_13 = FUNC_7(VAR_10, VAR_11->frames->device_ref,
                                   &VAR_11->va_config, VAR_10->hw_frames_ctx);
    if (VAR_13)
        goto fail;

    VAR_12 = FUNC_5(VAR_11->hwctx->display, VAR_11->va_config,
                          VAR_10->coded_width, VAR_10->coded_height,
                          VAR_8,
                          VAR_11->hwfc->surface_ids,
                          VAR_11->hwfc->nb_surfaces,
                          &VAR_11->va_context);
    if (VAR_12 != VAR_9) {
        FUNC_2(VAR_10, VAR_2, "Failed to create decode "
               "context: %d (%s).\n", VAR_12, FUNC_6(VAR_12));
        VAR_13 = FUNC_0(VAR_5);
        goto fail;
    }

    FUNC_2(VAR_10, VAR_1, "Decode context initialised: "
           "%#x/%#x.\n", VAR_11->va_config, VAR_11->va_context);




    return 0;

fail:
    FUNC_4(VAR_10);
    return VAR_13;
}
