
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_26__ {TYPE_6__* csp; TYPE_5__* cur; TYPE_4__* next; TYPE_3__* prev; } ;
typedef TYPE_7__ YADIFContext ;
struct TYPE_28__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_27__ {int cu_func_ushort2; int cu_func_ushort; int cu_func_uchar2; int cu_func_uchar; int cu_ctx; TYPE_2__* hwctx; TYPE_7__ yadif; } ;
struct TYPE_25__ {int nb_components; int log2_chroma_h; int log2_chroma_w; int name; TYPE_12__* comp; } ;
struct TYPE_24__ {int * linesize; int height; int width; scalar_t__* data; } ;
struct TYPE_23__ {scalar_t__* data; } ;
struct TYPE_22__ {scalar_t__* data; } ;
struct TYPE_21__ {TYPE_1__* internal; } ;
struct TYPE_20__ {TYPE_9__* cuda_dl; } ;
struct TYPE_19__ {int plane; int depth; int shift; int step; } ;
struct TYPE_18__ {TYPE_8__* priv; } ;
struct TYPE_17__ {int* linesize; int height; int width; scalar_t__* data; } ;
typedef TYPE_8__ DeintCUDAContext ;
typedef TYPE_9__ CudaFunctions ;
typedef int CUfunction ;
typedef int CUdeviceptr ;
typedef int CUcontext ;
typedef int CUarray_format ;
typedef TYPE_10__ AVFrame ;
typedef TYPE_11__ AVFilterContext ;
typedef TYPE_12__ AVComponentDescriptor ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_11__*,int ,char*,int,...) ;
 int FUNC_3 (TYPE_11__*,int ,int ,int ,int ,int ,int,int ,int ,int ,int ,int ,int ,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(AVFilterContext *VAR_4, AVFrame *VAR_5,
                   int VAR_6, int VAR_7)
{
    DeintCUDAContext *VAR_8 = VAR_4->priv;
    YADIFContext *VAR_9 = &VAR_8->yadif;
    CudaFunctions *VAR_10 = VAR_8->hwctx->internal->cuda_dl;
    CUcontext VAR_11;
    int VAR_12, VAR_13;

    VAR_13 = FUNC_1(VAR_10->cuCtxPushCurrent(VAR_8->cu_ctx));
    if (VAR_13 < 0)
        return;

    for (VAR_12 = 0; VAR_12 < VAR_9->csp->nb_components; VAR_12++) {
        CUfunction VAR_14;
        CUarray_format VAR_15;
        int VAR_16, VAR_17;
        const AVComponentDescriptor *VAR_18 = &VAR_9->csp->comp[VAR_12];

        if (VAR_18->plane < VAR_12) {


            continue;
        }

        VAR_16 = (VAR_18->depth + VAR_18->shift) / 8;
        VAR_17 = VAR_18->step / VAR_16;
        if (VAR_16 > 2 || VAR_17 > 2) {
            FUNC_2(VAR_4, VAR_0, "Unsupported pixel format: %s\n", VAR_9->csp->name);
            goto exit;
        }
        switch (VAR_16) {
        case 1:
            VAR_14 = VAR_17 == 1 ? VAR_8->cu_func_uchar : VAR_8->cu_func_uchar2;
            VAR_15 = VAR_3;
            break;
        case 2:
            VAR_14 = VAR_17 == 1 ? VAR_8->cu_func_ushort : VAR_8->cu_func_ushort2;
            VAR_15 = VAR_2;
            break;
        default:
            FUNC_2(VAR_4, VAR_0, "Unsupported pixel format: %s\n", VAR_9->csp->name);
            goto exit;
        }
        FUNC_2(VAR_4, VAR_1,
               "Deinterlacing plane %d: pixel_size: %d channels: %d\n",
               VAR_18->plane, VAR_16, VAR_17);
        FUNC_3(VAR_4, VAR_14,
                    (CUdeviceptr)VAR_9->prev->data[VAR_12],
                    (CUdeviceptr)VAR_9->cur->data[VAR_12],
                    (CUdeviceptr)VAR_9->next->data[VAR_12],
                    VAR_15, VAR_17,
                    FUNC_0(VAR_9->cur->width, VAR_12 ? VAR_9->csp->log2_chroma_w : 0),
                    FUNC_0(VAR_9->cur->height, VAR_12 ? VAR_9->csp->log2_chroma_h : 0),
                    VAR_9->cur->linesize[VAR_12],
                    (CUdeviceptr)VAR_5->data[VAR_12],
                    FUNC_0(VAR_5->width, VAR_12 ? VAR_9->csp->log2_chroma_w : 0),
                    FUNC_0(VAR_5->height, VAR_12 ? VAR_9->csp->log2_chroma_h : 0),
                    VAR_5->linesize[VAR_12] / VAR_18->step,
                    VAR_6, VAR_7);
    }

exit:
    FUNC_1(VAR_10->cuCtxPopCurrent(&VAR_11));
    return;
}
