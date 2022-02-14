
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_6__ {int type; struct TYPE_6__* hwctx; struct TYPE_6__* internal; struct TYPE_6__* priv; TYPE_1__ const* hw_type; int * av_class; } ;
struct TYPE_5__ {int type; int device_priv_size; int device_hwctx_size; } ;
typedef TYPE_1__ HWContextType ;
typedef TYPE_2__ AVHWDeviceContext ;
typedef int AVBufferRef ;


 int VAR_0 ;
 int * FUNC_0 (int *,int,int ,int *,int ) ;
 int FUNC_1 (TYPE_2__**) ;
 void* FUNC_2 (int) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

AVBufferRef *FUNC_3(enum AVHWDeviceType VAR_4)
{
    AVHWDeviceContext *VAR_5;
    AVBufferRef *VAR_6;
    const HWContextType *VAR_7 = ((void*)0);
    int VAR_8;

    for (VAR_8 = 0; VAR_1[VAR_8]; VAR_8++) {
        if (VAR_1[VAR_8]->type == VAR_4) {
            VAR_7 = VAR_1[VAR_8];
            break;
        }
    }
    if (!VAR_7)
        return ((void*)0);

    VAR_5 = FUNC_2(sizeof(*VAR_5));
    if (!VAR_5)
        return ((void*)0);

    VAR_5->internal = FUNC_2(sizeof(*VAR_5->internal));
    if (!VAR_5->internal)
        goto fail;

    if (VAR_7->device_priv_size) {
        VAR_5->internal->priv = FUNC_2(VAR_7->device_priv_size);
        if (!VAR_5->internal->priv)
            goto fail;
    }

    if (VAR_7->device_hwctx_size) {
        VAR_5->hwctx = FUNC_2(VAR_7->device_hwctx_size);
        if (!VAR_5->hwctx)
            goto fail;
    }

    VAR_6 = FUNC_0((uint8_t*)VAR_5, sizeof(*VAR_5),
                           VAR_3, ((void*)0),
                           VAR_0);
    if (!VAR_6)
        goto fail;

    VAR_5->type = VAR_4;
    VAR_5->av_class = &VAR_2;

    VAR_5->internal->hw_type = VAR_7;

    return VAR_6;

fail:
    if (VAR_5->internal)
        FUNC_1(&VAR_5->internal->priv);
    FUNC_1(&VAR_5->internal);
    FUNC_1(&VAR_5->hwctx);
    FUNC_1(&VAR_5);
    return ((void*)0);
}
