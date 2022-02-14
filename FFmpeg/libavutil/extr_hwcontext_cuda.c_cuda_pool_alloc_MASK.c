
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int cuda_ctx; TYPE_1__* internal; } ;
struct TYPE_10__ {TYPE_5__* hwctx; } ;
struct TYPE_9__ {TYPE_4__* device_ctx; } ;
struct TYPE_8__ {int (* cuCtxPopCurrent ) (int **) ;int (* cuMemFree ) (scalar_t__) ;int (* cuMemAlloc ) (scalar_t__*,int) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_7__ {TYPE_2__* cuda_dl; } ;
typedef TYPE_2__ CudaFunctions ;
typedef scalar_t__ CUdeviceptr ;
typedef int * CUcontext ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVHWDeviceContext ;
typedef TYPE_5__ AVCUDADeviceContext ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int,int ,TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int **) ;

__attribute__((used)) static AVBufferRef *FUNC_6(void *VAR_1, int VAR_2)
{
    AVHWFramesContext *VAR_3 = VAR_1;
    AVHWDeviceContext *VAR_4 = VAR_3->device_ctx;
    AVCUDADeviceContext *VAR_5 = VAR_4->hwctx;
    CudaFunctions *VAR_6 = VAR_5->internal->cuda_dl;

    AVBufferRef *VAR_7 = ((void*)0);
    CUcontext VAR_8 = ((void*)0);
    CUdeviceptr VAR_9;
    int VAR_10;

    VAR_10 = FUNC_0(VAR_6->cuCtxPushCurrent(VAR_5->cuda_ctx));
    if (VAR_10 < 0)
        return ((void*)0);

    VAR_10 = FUNC_0(VAR_6->cuMemAlloc(&VAR_9, VAR_2));
    if (VAR_10 < 0)
        goto fail;

    VAR_7 = FUNC_1((uint8_t*)VAR_9, VAR_2, VAR_0, VAR_3, 0);
    if (!VAR_7) {
        FUNC_0(VAR_6->cuMemFree(VAR_9));
        goto fail;
    }

fail:
    FUNC_0(VAR_6->cuCtxPopCurrent(&VAR_8));
    return VAR_7;
}
