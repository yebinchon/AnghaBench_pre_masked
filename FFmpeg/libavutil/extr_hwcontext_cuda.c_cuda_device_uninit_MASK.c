
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* cuda_dl; scalar_t__ is_allocated; } ;
struct TYPE_9__ {TYPE_6__* internal; int * cuda_ctx; } ;
struct TYPE_8__ {TYPE_3__* hwctx; } ;
struct TYPE_7__ {int (* cuCtxDestroy ) (int *) ;} ;
typedef TYPE_1__ CudaFunctions ;
typedef TYPE_2__ AVHWDeviceContext ;
typedef TYPE_3__ AVCUDADeviceContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__**) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(AVHWDeviceContext *VAR_0)
{
    AVCUDADeviceContext *VAR_1 = VAR_0->hwctx;

    if (VAR_1->internal) {
        CudaFunctions *VAR_2 = VAR_1->internal->cuda_dl;
        if (VAR_1->internal->is_allocated && VAR_1->cuda_ctx) {
            FUNC_0(VAR_2->cuCtxDestroy(VAR_1->cuda_ctx));
            VAR_1->cuda_ctx = ((void*)0);
        }
        FUNC_2(&VAR_1->internal->cuda_dl);
    }

    FUNC_1(&VAR_1->internal);
}
