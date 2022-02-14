
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;


typedef scalar_t__ mfxMemId ;
typedef scalar_t__ VADisplay ;
struct TYPE_35__ {int * devmgr; scalar_t__ display; } ;
struct TYPE_34__ {int frame_type; scalar_t__ surface_type; scalar_t__* surfaces; scalar_t__ surface_ids; } ;
struct TYPE_33__ {int child_pix_fmt; scalar_t__ handle; int child_device_type; } ;
struct TYPE_32__ {TYPE_15__* child_frames_ref; TYPE_5__* surfaces_internal; } ;
struct TYPE_30__ {scalar_t__ MemId; } ;
struct TYPE_31__ {TYPE_4__ Data; } ;
struct TYPE_29__ {TYPE_2__* internal; } ;
struct TYPE_28__ {TYPE_7__* priv; } ;
struct TYPE_27__ {TYPE_6__* priv; } ;
struct TYPE_26__ {scalar_t__ data; } ;
struct TYPE_25__ {scalar_t__ type; TYPE_9__* hwctx; } ;
struct TYPE_24__ {int initial_pool_size; TYPE_8__* hwctx; void* height; void* width; int sw_format; int format; TYPE_3__* device_ctx; TYPE_1__* internal; } ;
typedef TYPE_6__ QSVFramesContext ;
typedef TYPE_7__ QSVDeviceContext ;
typedef int IDirect3DDeviceManager9 ;
typedef TYPE_8__ AVVAAPIFramesContext ;
typedef TYPE_9__ AVVAAPIDeviceContext ;
typedef TYPE_8__ AVQSVFramesContext ;
typedef TYPE_11__ AVHWFramesContext ;
typedef TYPE_12__ AVHWDeviceContext ;
typedef TYPE_8__ AVDXVA2FramesContext ;
typedef TYPE_9__ AVDXVA2DeviceContext ;
typedef TYPE_15__ AVBufferRef ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (void*,int) ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_15__**) ;
 TYPE_15__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_15__*) ;
 TYPE_15__* FUNC_5 (TYPE_15__*) ;
 int FUNC_6 (TYPE_15__*) ;
 int FUNC_7 (TYPE_11__*,int ,char*) ;

__attribute__((used)) static int FUNC_8(AVHWFramesContext *VAR_9)
{
    AVQSVFramesContext *VAR_10 = VAR_9->hwctx;
    QSVFramesContext *VAR_11 = VAR_9->internal->priv;
    QSVDeviceContext *VAR_12 = VAR_9->device_ctx->internal->priv;

    AVBufferRef *VAR_13 = ((void*)0);
    AVBufferRef *VAR_14 = ((void*)0);

    AVHWDeviceContext *VAR_15;
    AVHWFramesContext *VAR_16;

    int VAR_17, VAR_18 = 0;

    if (!VAR_12->handle) {
        FUNC_7(VAR_9, VAR_2,
               "Cannot create a non-opaque internal surface pool without "
               "a hardware handle\n");
        return FUNC_0(VAR_5);
    }

    VAR_13 = FUNC_3(VAR_12->child_device_type);
    if (!VAR_13)
        return FUNC_0(VAR_6);
    VAR_15 = (AVHWDeviceContext*)VAR_13->data;
    VAR_18 = FUNC_4(VAR_13);
    if (VAR_18 < 0) {
        FUNC_7(VAR_9, VAR_2, "Error initializing a child device context\n");
        goto fail;
    }

    VAR_14 = FUNC_5(VAR_13);
    if (!VAR_14) {
        VAR_18 = FUNC_0(VAR_6);
        goto fail;
    }
    VAR_16 = (AVHWFramesContext*)VAR_14->data;

    VAR_16->format = VAR_12->child_pix_fmt;
    VAR_16->sw_format = VAR_9->sw_format;
    VAR_16->initial_pool_size = VAR_9->initial_pool_size;
    VAR_16->width = FUNC_1(VAR_9->width, 16);
    VAR_16->height = FUNC_1(VAR_9->height, 16);
    VAR_18 = FUNC_6(VAR_14);
    if (VAR_18 < 0) {
        FUNC_7(VAR_9, VAR_2, "Error initializing a child frames context\n");
        goto fail;
    }
    VAR_11->child_frames_ref = VAR_14;
    VAR_14 = ((void*)0);

fail:
    FUNC_2(&VAR_13);
    FUNC_2(&VAR_14);
    return VAR_18;
}
