
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_21__ {TYPE_4__* internal; int cuda_ctx; } ;
struct TYPE_20__ {TYPE_7__** outputs; TYPE_5__* priv; } ;
struct TYPE_19__ {TYPE_1__* hw_frames_ctx; TYPE_8__* dst; } ;
struct TYPE_18__ {TYPE_2__* device_ctx; } ;
struct TYPE_17__ {scalar_t__ passthrough; } ;
struct TYPE_16__ {TYPE_3__* cuda_dl; } ;
struct TYPE_15__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_14__ {TYPE_9__* hwctx; } ;
struct TYPE_13__ {scalar_t__ data; } ;
typedef TYPE_5__ NPPTransposeContext ;
typedef int CUcontext ;
typedef TYPE_6__ AVHWFramesContext ;
typedef int AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;
typedef TYPE_9__ AVCUDADeviceContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * FUNC_2 () ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_7__*,int *) ;
 int FUNC_5 (TYPE_8__*,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    NPPTransposeContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVHWFramesContext *VAR_6 = (AVHWFramesContext*)VAR_5->hw_frames_ctx->data;
    AVCUDADeviceContext *VAR_7 = VAR_6->device_ctx->hwctx;
    AVFrame *VAR_8 = ((void*)0);
    CUcontext VAR_9;
    int VAR_10 = 0;

    if (VAR_4->passthrough)
        return FUNC_4(VAR_5, VAR_2);

    VAR_8 = FUNC_2();
    if (!VAR_8) {
        VAR_10 = FUNC_0(VAR_0);
        goto fail;
    }

    VAR_10 = FUNC_1(VAR_7->internal->cuda_dl->cuCtxPushCurrent(VAR_7->cuda_ctx));
    if (VAR_10 < 0)
        goto fail;

    VAR_10 = FUNC_5(VAR_3, VAR_8, VAR_2);

    FUNC_1(VAR_7->internal->cuda_dl->cuCtxPopCurrent(&VAR_9));
    if (VAR_10 < 0)
        goto fail;

    FUNC_3(&VAR_2);

    return FUNC_4(VAR_5, VAR_8);

fail:
    FUNC_3(&VAR_2);
    FUNC_3(&VAR_8);
    return VAR_10;
}
