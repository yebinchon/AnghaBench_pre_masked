
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int devmgr; } ;
struct TYPE_12__ {int nb_surfaces; scalar_t__ decoder_to_release; } ;
struct TYPE_11__ {TYPE_2__* internal; TYPE_5__* hwctx; TYPE_1__* device_ctx; } ;
struct TYPE_10__ {scalar_t__ device_handle; int * service; scalar_t__* surfaces_internal; } ;
struct TYPE_9__ {TYPE_3__* priv; } ;
struct TYPE_8__ {TYPE_6__* hwctx; } ;
typedef TYPE_3__ DXVA2FramesContext ;
typedef TYPE_4__ AVHWFramesContext ;
typedef TYPE_5__ AVDXVA2FramesContext ;
typedef TYPE_6__ AVDXVA2DeviceContext ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__**) ;

__attribute__((used)) static void FUNC_5(AVHWFramesContext *VAR_1)
{
    AVDXVA2DeviceContext *VAR_2 = VAR_1->device_ctx->hwctx;
    AVDXVA2FramesContext *VAR_3 = VAR_1->hwctx;
    DXVA2FramesContext *VAR_4 = VAR_1->internal->priv;
    int VAR_5;

    if (VAR_3->decoder_to_release)
        FUNC_3(VAR_3->decoder_to_release);

    if (VAR_4->surfaces_internal) {
        for (VAR_5 = 0; VAR_5 < VAR_3->nb_surfaces; VAR_5++) {
            if (VAR_4->surfaces_internal[VAR_5])
                FUNC_1(VAR_4->surfaces_internal[VAR_5]);
        }
    }
    FUNC_4(&VAR_4->surfaces_internal);

    if (VAR_4->service) {
        FUNC_2(VAR_4->service);
        VAR_4->service = ((void*)0);
    }

    if (VAR_4->device_handle != VAR_0) {
        FUNC_0(VAR_2->devmgr, VAR_4->device_handle);
        VAR_4->device_handle = VAR_0;
    }
}
