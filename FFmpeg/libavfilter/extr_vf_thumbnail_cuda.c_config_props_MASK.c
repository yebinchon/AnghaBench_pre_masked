
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_21__ {int tb; int hw_frames_ctx; int data; int cu_module; int cu_func_ushort2; int cu_func_ushort; int cu_func_uchar2; int cu_func_uchar; TYPE_11__* hwctx; int cu_stream; } ;
typedef TYPE_6__ ThumbnailCudaContext ;
struct TYPE_24__ {int time_base; TYPE_1__* hw_frames_ctx; TYPE_10__* dst; } ;
struct TYPE_23__ {int sw_format; TYPE_2__* device_ctx; } ;
struct TYPE_22__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuMemAlloc ) (int *,int) ;int (* cuModuleGetFunction ) (int *,int ,char*) ;int (* cuModuleLoadData ) (int *,char*) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_20__ {int hw_frames_ctx; } ;
struct TYPE_19__ {int hw_frames_ctx; } ;
struct TYPE_18__ {TYPE_7__* cuda_dl; } ;
struct TYPE_17__ {TYPE_11__* hwctx; } ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {int stream; TYPE_3__* internal; int cuda_ctx; } ;
struct TYPE_14__ {TYPE_5__** outputs; TYPE_4__** inputs; TYPE_6__* priv; } ;
typedef TYPE_7__ CudaFunctions ;
typedef int CUcontext ;
typedef TYPE_8__ AVHWFramesContext ;
typedef TYPE_9__ AVFilterLink ;
typedef TYPE_10__ AVFilterContext ;
typedef TYPE_11__ AVCUDADeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_10__*,int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int *,int ,char*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->dst;
    ThumbnailCudaContext *VAR_6 = VAR_5->priv;
    AVHWFramesContext *VAR_7 = (AVHWFramesContext*)VAR_4->hw_frames_ctx->data;
    AVCUDADeviceContext *VAR_8 = VAR_7->device_ctx->hwctx;
    CUcontext VAR_9, VAR_10 = VAR_8->cuda_ctx;
    CudaFunctions *VAR_11 = VAR_8->internal->cuda_dl;
    int VAR_12;

    extern char VAR_13[];

    VAR_6->hwctx = VAR_8;
    VAR_6->cu_stream = VAR_6->hwctx->stream;

    VAR_12 = FUNC_1(VAR_11->cuCtxPushCurrent(VAR_10));
    if (VAR_12 < 0)
        return VAR_12;

    VAR_12 = FUNC_1(VAR_11->cuModuleLoadData(&VAR_6->cu_module, VAR_13));
    if (VAR_12 < 0)
        return VAR_12;

    VAR_12 = FUNC_1(VAR_11->cuModuleGetFunction(&VAR_6->cu_func_uchar, VAR_6->cu_module, "Thumbnail_uchar"));
    if (VAR_12 < 0)
        return VAR_12;

    VAR_12 = FUNC_1(VAR_11->cuModuleGetFunction(&VAR_6->cu_func_uchar2, VAR_6->cu_module, "Thumbnail_uchar2"));
    if (VAR_12 < 0)
        return VAR_12;

    VAR_12 = FUNC_1(VAR_11->cuModuleGetFunction(&VAR_6->cu_func_ushort, VAR_6->cu_module, "Thumbnail_ushort"));
    if (VAR_12 < 0)
        return VAR_12;

    VAR_12 = FUNC_1(VAR_11->cuModuleGetFunction(&VAR_6->cu_func_ushort2, VAR_6->cu_module, "Thumbnail_ushort2"));
    if (VAR_12 < 0)
        return VAR_12;

    VAR_12 = FUNC_1(VAR_11->cuMemAlloc(&VAR_6->data, VAR_3 * sizeof(int)));
    if (VAR_12 < 0)
        return VAR_12;

    FUNC_1(VAR_11->cuCtxPopCurrent(&VAR_9));

    VAR_6->hw_frames_ctx = VAR_5->inputs[0]->hw_frames_ctx;

    VAR_5->outputs[0]->hw_frames_ctx = FUNC_2(VAR_6->hw_frames_ctx);
    if (!VAR_5->outputs[0]->hw_frames_ctx)
        return FUNC_0(VAR_1);

    VAR_6->tb = VAR_4->time_base;

    if (!FUNC_5(VAR_7->sw_format)) {
        FUNC_4(VAR_5, VAR_0, "Unsupported input format: %s\n", FUNC_3(VAR_7->sw_format));
        return FUNC_0(VAR_2);
    }

    return 0;
}
