
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int int64_t ;
struct TYPE_31__ {int h; int w; TYPE_1__* hw_frames_ctx; TYPE_10__* dst; } ;
struct TYPE_27__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_30__ {TYPE_5__ sample_aspect_ratio; } ;
struct TYPE_29__ {TYPE_2__* device_ctx; } ;
struct TYPE_28__ {scalar_t__ passthrough; } ;
struct TYPE_26__ {TYPE_3__* cuda_dl; } ;
struct TYPE_25__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_24__ {TYPE_11__* hwctx; } ;
struct TYPE_23__ {scalar_t__ data; } ;
struct TYPE_22__ {TYPE_4__* internal; int cuda_ctx; } ;
struct TYPE_21__ {TYPE_9__** outputs; TYPE_6__* priv; } ;
typedef TYPE_6__ NPPScaleContext ;
typedef int CUcontext ;
typedef TYPE_7__ AVHWFramesContext ;
typedef TYPE_8__ AVFrame ;
typedef TYPE_9__ AVFilterLink ;
typedef TYPE_10__ AVFilterContext ;
typedef TYPE_11__ AVCUDADeviceContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_2 () ;
 int FUNC_3 (TYPE_8__**) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int,int,int ) ;
 int FUNC_5 (TYPE_9__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_10__*,TYPE_8__*,TYPE_8__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    NPPScaleContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    AVHWFramesContext *VAR_7 = (AVHWFramesContext*)VAR_6->hw_frames_ctx->data;
    AVCUDADeviceContext *VAR_8 = VAR_7->device_ctx->hwctx;

    AVFrame *VAR_9 = ((void*)0);
    CUcontext VAR_10;
    int VAR_11 = 0;

    if (VAR_5->passthrough)
        return FUNC_5(VAR_6, VAR_3);

    VAR_9 = FUNC_2();
    if (!VAR_9) {
        VAR_11 = FUNC_0(VAR_0);
        goto fail;
    }

    VAR_11 = FUNC_1(VAR_8->internal->cuda_dl->cuCtxPushCurrent(VAR_8->cuda_ctx));
    if (VAR_11 < 0)
        goto fail;

    VAR_11 = FUNC_6(VAR_4, VAR_9, VAR_3);

    FUNC_1(VAR_8->internal->cuda_dl->cuCtxPopCurrent(&VAR_10));
    if (VAR_11 < 0)
        goto fail;

    FUNC_4(&VAR_9->sample_aspect_ratio.num, &VAR_9->sample_aspect_ratio.den,
              (int64_t)VAR_3->sample_aspect_ratio.num * VAR_6->h * VAR_2->w,
              (int64_t)VAR_3->sample_aspect_ratio.den * VAR_6->w * VAR_2->h,
              VAR_1);

    FUNC_3(&VAR_3);
    return FUNC_5(VAR_6, VAR_9);
fail:
    FUNC_3(&VAR_3);
    FUNC_3(&VAR_9);
    return VAR_11;
}
