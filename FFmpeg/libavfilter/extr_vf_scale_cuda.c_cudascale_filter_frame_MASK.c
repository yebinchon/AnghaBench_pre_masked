
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_25__ {TYPE_7__** outputs; TYPE_5__* priv; } ;
struct TYPE_24__ {int h; int w; TYPE_8__* dst; } ;
struct TYPE_20__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_23__ {TYPE_3__ sample_aspect_ratio; } ;
struct TYPE_22__ {TYPE_2__* hwctx; } ;
struct TYPE_21__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_19__ {int cuda_ctx; TYPE_1__* internal; } ;
struct TYPE_18__ {TYPE_4__* cuda_dl; } ;
typedef TYPE_4__ CudaFunctions ;
typedef int CUcontext ;
typedef TYPE_5__ CUDAScaleContext ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_2 () ;
 int FUNC_3 (TYPE_6__**) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int,int,int ) ;
 int FUNC_5 (TYPE_8__*,TYPE_6__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    CUDAScaleContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    CudaFunctions *VAR_7 = VAR_5->hwctx->internal->cuda_dl;

    AVFrame *VAR_8 = ((void*)0);
    CUcontext VAR_9;
    int VAR_10 = 0;

    VAR_8 = FUNC_2();
    if (!VAR_8) {
        VAR_10 = FUNC_0(VAR_0);
        goto fail;
    }

    VAR_10 = FUNC_1(VAR_7->cuCtxPushCurrent(VAR_5->hwctx->cuda_ctx));
    if (VAR_10 < 0)
        goto fail;

    VAR_10 = FUNC_5(VAR_4, VAR_8, VAR_3);

    FUNC_1(VAR_7->cuCtxPopCurrent(&VAR_9));
    if (VAR_10 < 0)
        goto fail;

    FUNC_4(&VAR_8->sample_aspect_ratio.num, &VAR_8->sample_aspect_ratio.den,
              (int64_t)VAR_3->sample_aspect_ratio.num * VAR_6->h * VAR_2->w,
              (int64_t)VAR_3->sample_aspect_ratio.den * VAR_6->w * VAR_2->h,
              VAR_1);

    FUNC_3(&VAR_3);
    return FUNC_6(VAR_6, VAR_8);
fail:
    FUNC_3(&VAR_3);
    FUNC_3(&VAR_8);
    return VAR_10;
}
