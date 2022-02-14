
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {scalar_t__ data; } ;
struct TYPE_16__ {TYPE_1__* internal; } ;
struct TYPE_15__ {struct TYPE_15__* hwctx; struct TYPE_15__* internal; struct TYPE_15__* priv; TYPE_2__ const* hw_type; void* sw_format; void* format; TYPE_4__* device_ctx; TYPE_5__* device_ref; int * av_class; } ;
struct TYPE_14__ {int frames_priv_size; int frames_hwctx_size; } ;
struct TYPE_13__ {TYPE_2__* hw_type; } ;
typedef TYPE_2__ HWContextType ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVHWDeviceContext ;
typedef TYPE_5__ AVBufferRef ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_5__* FUNC_0 (int *,int,int ,int *,int ) ;
 TYPE_5__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__**) ;
 int FUNC_3 (TYPE_3__**) ;
 void* FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;

AVBufferRef *FUNC_5(AVBufferRef *VAR_4)
{
    AVHWDeviceContext *VAR_5 = (AVHWDeviceContext*)VAR_4->data;
    const HWContextType *VAR_6 = VAR_5->internal->hw_type;
    AVHWFramesContext *VAR_7;
    AVBufferRef *VAR_8, *VAR_9 = ((void*)0);

    VAR_7 = FUNC_4(sizeof(*VAR_7));
    if (!VAR_7)
        return ((void*)0);

    VAR_7->internal = FUNC_4(sizeof(*VAR_7->internal));
    if (!VAR_7->internal)
        goto fail;

    if (VAR_6->frames_priv_size) {
        VAR_7->internal->priv = FUNC_4(VAR_6->frames_priv_size);
        if (!VAR_7->internal->priv)
            goto fail;
    }

    if (VAR_6->frames_hwctx_size) {
        VAR_7->hwctx = FUNC_4(VAR_6->frames_hwctx_size);
        if (!VAR_7->hwctx)
            goto fail;
    }

    VAR_9 = FUNC_1(VAR_4);
    if (!VAR_9)
        goto fail;

    VAR_8 = FUNC_0((uint8_t*)VAR_7, sizeof(*VAR_7),
                           VAR_3, ((void*)0),
                           VAR_0);
    if (!VAR_8)
        goto fail;

    VAR_7->av_class = &VAR_2;
    VAR_7->device_ref = VAR_9;
    VAR_7->device_ctx = VAR_5;
    VAR_7->format = VAR_1;
    VAR_7->sw_format = VAR_1;

    VAR_7->internal->hw_type = VAR_6;

    return VAR_8;

fail:
    if (VAR_9)
        FUNC_2(&VAR_9);
    if (VAR_7->internal)
        FUNC_3(&VAR_7->internal->priv);
    FUNC_3(&VAR_7->internal);
    FUNC_3(&VAR_7->hwctx);
    FUNC_3(&VAR_7);
    return ((void*)0);
}
