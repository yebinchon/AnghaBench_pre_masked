
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_21__ {size_t n; size_t n_frames; int cu_stream; scalar_t__ data; TYPE_4__* hwctx; TYPE_3__* frames; TYPE_2__* hw_frames_ctx; } ;
typedef TYPE_5__ ThumbnailCudaContext ;
struct TYPE_25__ {TYPE_10__* dst; } ;
struct TYPE_24__ {scalar_t__ sw_format; } ;
struct TYPE_23__ {int* dstHost; int srcPitch; int dstPitch; int WidthInBytes; int Height; scalar_t__ srcDevice; int dstMemoryType; int srcMemoryType; int member_0; } ;
struct TYPE_22__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuMemcpy2DAsync ) (TYPE_7__*,int ) ;int (* cuMemsetD8Async ) (scalar_t__,int ,int,int ) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_20__ {int cuda_ctx; TYPE_1__* internal; } ;
struct TYPE_19__ {int* histogram; int * buf; } ;
struct TYPE_18__ {scalar_t__ data; } ;
struct TYPE_17__ {TYPE_6__* cuda_dl; } ;
struct TYPE_16__ {TYPE_9__** outputs; TYPE_5__* priv; } ;
typedef TYPE_6__ CudaFunctions ;
typedef int CUcontext ;
typedef TYPE_7__ CUDA_MEMCPY2D ;
typedef TYPE_8__ AVHWFramesContext ;
typedef int AVFrame ;
typedef TYPE_9__ AVFilterLink ;
typedef TYPE_10__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_9__*,int ) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int,int ) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_10__*,int*,int *) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_7, AVFrame *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_7->dst;
    ThumbnailCudaContext *VAR_10 = VAR_9->priv;
    CudaFunctions *VAR_11 = VAR_10->hwctx->internal->cuda_dl;
    AVFilterLink *VAR_12 = VAR_9->outputs[0];
    int *VAR_13 = VAR_10->frames[VAR_10->n].histogram;
    AVHWFramesContext *VAR_14 = (AVHWFramesContext*)VAR_10->hw_frames_ctx->data;
    CUcontext VAR_15;
    CUDA_MEMCPY2D VAR_16 = { 0 };
    int VAR_17 = 0;


    VAR_10->frames[VAR_10->n].buf = VAR_8;

    VAR_17 = FUNC_0(VAR_11->cuCtxPushCurrent(VAR_10->hwctx->cuda_ctx));
    if (VAR_17 < 0)
        return VAR_17;

    FUNC_0(VAR_11->cuMemsetD8Async(VAR_10->data, 0, VAR_6 * sizeof(int), VAR_10->cu_stream));

    FUNC_7(VAR_9, (int*)VAR_10->data, VAR_8);

    VAR_16.srcMemoryType = VAR_4;
    VAR_16.dstMemoryType = VAR_5;
    VAR_16.srcDevice = VAR_10->data;
    VAR_16.dstHost = VAR_13;
    VAR_16.srcPitch = VAR_6 * sizeof(int);
    VAR_16.dstPitch = VAR_6 * sizeof(int);
    VAR_16.WidthInBytes = VAR_6 * sizeof(int);
    VAR_16.Height = 1;

    VAR_17 = FUNC_0(VAR_11->cuMemcpy2DAsync(&VAR_16, VAR_10->cu_stream));
    if (VAR_17 < 0)
        return VAR_17;

    if (VAR_14->sw_format == VAR_0 || VAR_14->sw_format == VAR_3 ||
        VAR_14->sw_format == VAR_1 || VAR_14->sw_format == VAR_2)
    {
        int VAR_18;
        for (VAR_18 = 256; VAR_18 < VAR_6; VAR_18++)
            VAR_13[VAR_18] = 4 * VAR_13[VAR_18];
    }

    FUNC_0(VAR_11->cuCtxPopCurrent(&VAR_15));
    if (VAR_17 < 0)
        return VAR_17;


    VAR_10->n++;
    if (VAR_10->n < VAR_10->n_frames)
        return 0;

    return FUNC_1(VAR_12, FUNC_2(VAR_9));
}
