
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int cuda_ctx; TYPE_1__* internal; } ;
struct TYPE_9__ {TYPE_5__* hwctx; } ;
struct TYPE_8__ {TYPE_4__* device_ctx; } ;
struct TYPE_7__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuMemFree ) (int ) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_6__ {TYPE_2__* cuda_dl; } ;
typedef TYPE_2__ CudaFunctions ;
typedef int CUdeviceptr ;
typedef int CUcontext ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVHWDeviceContext ;
typedef TYPE_5__ AVCUDADeviceContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, uint8_t *VAR_1)
{
    AVHWFramesContext *VAR_2 = VAR_0;
    AVHWDeviceContext *VAR_3 = VAR_2->device_ctx;
    AVCUDADeviceContext *VAR_4 = VAR_3->hwctx;
    CudaFunctions *VAR_5 = VAR_4->internal->cuda_dl;

    CUcontext VAR_6;

    FUNC_0(VAR_5->cuCtxPushCurrent(VAR_4->cuda_ctx));

    FUNC_0(VAR_5->cuMemFree((CUdeviceptr)VAR_1));

    FUNC_0(VAR_5->cuCtxPopCurrent(&VAR_6));
}
