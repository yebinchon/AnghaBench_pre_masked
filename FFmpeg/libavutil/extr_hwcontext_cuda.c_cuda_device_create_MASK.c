
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* internal; int * stream; int cuda_ctx; } ;
struct TYPE_10__ {TYPE_4__* hwctx; } ;
struct TYPE_9__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxCreate ) (int *,int ,int ) ;int (* cuDeviceGet ) (int *,int) ;int (* cuInit ) (int ) ;} ;
struct TYPE_8__ {int is_allocated; TYPE_2__* cuda_dl; } ;
typedef TYPE_2__ CudaFunctions ;
typedef int CUdevice ;
typedef int CUcontext ;
typedef TYPE_3__ AVHWDeviceContext ;
typedef int AVDictionary ;
typedef TYPE_4__ AVCUDADeviceContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char const*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVHWDeviceContext *VAR_2,
                              const char *VAR_3,
                              AVDictionary *VAR_4, int VAR_5)
{
    AVCUDADeviceContext *VAR_6 = VAR_2->hwctx;
    CudaFunctions *VAR_7;
    CUdevice VAR_8;
    CUcontext VAR_9;
    int VAR_10, VAR_11 = 0;

    if (VAR_3)
        VAR_11 = FUNC_3(VAR_3, ((void*)0), 0);

    if (FUNC_1(VAR_2) < 0)
        goto error;

    VAR_7 = VAR_6->internal->cuda_dl;

    VAR_10 = FUNC_0(VAR_7->cuInit(0));
    if (VAR_10 < 0)
        goto error;

    VAR_10 = FUNC_0(VAR_7->cuDeviceGet(&VAR_8, VAR_11));
    if (VAR_10 < 0)
        goto error;

    VAR_10 = FUNC_0(VAR_7->cuCtxCreate(&VAR_6->cuda_ctx, VAR_1, VAR_8));
    if (VAR_10 < 0)
        goto error;


    VAR_6->stream = ((void*)0);

    FUNC_0(VAR_7->cuCtxPopCurrent(&VAR_9));

    VAR_6->internal->is_allocated = 1;

    return 0;

error:
    FUNC_2(VAR_2);
    return VAR_0;
}
