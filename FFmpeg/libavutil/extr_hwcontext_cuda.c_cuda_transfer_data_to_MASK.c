
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_22__ {int stream; int cuda_ctx; TYPE_2__* internal; } ;
struct TYPE_21__ {int height; int * linesize; scalar_t__* data; } ;
struct TYPE_20__ {TYPE_9__* hwctx; } ;
struct TYPE_19__ {TYPE_7__* device_ctx; TYPE_1__* internal; } ;
struct TYPE_18__ {int shift_height; } ;
struct TYPE_17__ {int Height; int WidthInBytes; int dstPitch; int srcPitch; int dstDevice; scalar_t__ srcHost; int dstMemoryType; int srcMemoryType; } ;
struct TYPE_16__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuMemcpy2DAsync ) (TYPE_4__*,int ) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_15__ {TYPE_3__* cuda_dl; } ;
struct TYPE_14__ {TYPE_5__* priv; } ;
typedef TYPE_3__ CudaFunctions ;
typedef int CUdeviceptr ;
typedef int CUcontext ;
typedef TYPE_4__ CUDA_MEMCPY2D ;
typedef TYPE_5__ CUDAFramesContext ;
typedef TYPE_6__ AVHWFramesContext ;
typedef TYPE_7__ AVHWDeviceContext ;
typedef TYPE_8__ AVFrame ;
typedef TYPE_9__ AVCUDADeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(AVHWFramesContext *VAR_2, AVFrame *VAR_3,
                                 const AVFrame *VAR_4)
{
    CUDAFramesContext *VAR_5 = VAR_2->internal->priv;
    AVHWDeviceContext *VAR_6 = VAR_2->device_ctx;
    AVCUDADeviceContext *VAR_7 = VAR_6->hwctx;
    CudaFunctions *VAR_8 = VAR_7->internal->cuda_dl;

    CUcontext VAR_9;
    int VAR_10, VAR_11;

    VAR_11 = FUNC_0(VAR_8->cuCtxPushCurrent(VAR_7->cuda_ctx));
    if (VAR_11 < 0)
        return VAR_11;

    for (VAR_10 = 0; VAR_10 < FUNC_2(VAR_4->data) && VAR_4->data[VAR_10]; VAR_10++) {
        CUDA_MEMCPY2D VAR_12 = {
            .srcMemoryType = VAR_1,
            .dstMemoryType = VAR_0,
            .srcHost = VAR_4->data[VAR_10],
            .dstDevice = (CUdeviceptr)VAR_3->data[VAR_10],
            .srcPitch = VAR_4->linesize[VAR_10],
            .dstPitch = VAR_3->linesize[VAR_10],
            .WidthInBytes = FUNC_1(VAR_4->linesize[VAR_10], VAR_3->linesize[VAR_10]),
            .Height = VAR_4->height >> (VAR_10 ? VAR_5->shift_height : 0),
        };

        VAR_11 = FUNC_0(VAR_8->cuMemcpy2DAsync(&VAR_12, VAR_7->stream));
        if (VAR_11 < 0)
            goto exit;
    }

exit:
    FUNC_0(VAR_8->cuCtxPopCurrent(&VAR_9));

    return 0;
}
