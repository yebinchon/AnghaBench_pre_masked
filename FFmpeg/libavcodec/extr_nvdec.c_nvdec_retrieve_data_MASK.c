
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_26__ {int sw_format; } ;
struct TYPE_25__ {int progressive_frame; int output_stream; int member_0; } ;
struct TYPE_24__ {scalar_t__ hwaccel_priv; } ;
struct TYPE_23__ {TYPE_4__* cudl; int decoder; TYPE_3__* cvdl; int cuda_ctx; int stream; } ;
struct TYPE_22__ {TYPE_15__* decoder_ref; TYPE_15__* idx_ref; int idx; } ;
struct TYPE_21__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_20__ {int (* cuvidUnmapVideoFrame ) (int ,scalar_t__) ;int (* cuvidMapVideoFrame ) (int ,int ,scalar_t__*,unsigned int*,TYPE_8__*) ;} ;
struct TYPE_19__ {scalar_t__ data; } ;
struct TYPE_18__ {scalar_t__ data; } ;
struct TYPE_17__ {scalar_t__ data; } ;
struct TYPE_16__ {int* linesize; int height; int * buf; int ** data; TYPE_2__* hw_frames_ctx; TYPE_1__* private_ref; } ;
typedef TYPE_5__ NVDECFrame ;
typedef TYPE_6__ NVDECDecoder ;
typedef TYPE_7__ FrameDecodeData ;
typedef scalar_t__ CUdeviceptr ;
typedef int CUcontext ;
typedef TYPE_8__ CUVIDPROCPARAMS ;
typedef TYPE_9__ AVHWFramesContext ;
typedef TYPE_10__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int,int ,void*,int ) ;
 void* FUNC_3 (TYPE_15__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__**) ;
 TYPE_5__* FUNC_6 (int) ;
 int FUNC_7 (int ,int*,int*) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,scalar_t__*,unsigned int*,TYPE_8__*) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(void *VAR_3, AVFrame *VAR_4)
{
    FrameDecodeData *VAR_5 = (FrameDecodeData*)VAR_4->private_ref->data;
    NVDECFrame *VAR_6 = (NVDECFrame*)VAR_5->hwaccel_priv;
    NVDECDecoder *VAR_7 = (NVDECDecoder*)VAR_6->decoder_ref->data;

    AVHWFramesContext *VAR_8 = (AVHWFramesContext *)VAR_4->hw_frames_ctx->data;

    CUVIDPROCPARAMS VAR_9 = { 0 };
    NVDECFrame *VAR_10 = ((void*)0);

    CUcontext VAR_11;
    CUdeviceptr VAR_12;

    unsigned int VAR_13, VAR_14;
    unsigned int VAR_15 = 0;
    int VAR_16 = 0, VAR_17 = 0;
    int VAR_18 = 0;

    VAR_9.progressive_frame = 1;
    VAR_9.output_stream = VAR_7->stream;

    VAR_18 = FUNC_1(VAR_7->cudl->cuCtxPushCurrent(VAR_7->cuda_ctx));
    if (VAR_18 < 0)
        return VAR_18;

    VAR_18 = FUNC_1(VAR_7->cvdl->cuvidMapVideoFrame(VAR_7->decoder,
                                                     VAR_6->idx, &VAR_12,
                                                     &VAR_13, &VAR_9));
    if (VAR_18 < 0)
        goto finish;

    VAR_10 = FUNC_6(sizeof(*VAR_10));
    if (!VAR_10) {
        VAR_18 = FUNC_0(VAR_1);
        goto copy_fail;
    }

    VAR_4->buf[1] = FUNC_2((uint8_t *)VAR_10, sizeof(*VAR_10),
                                     VAR_2, (void*)VAR_12,
                                     VAR_0);
    if (!VAR_4->buf[1]) {
        VAR_18 = FUNC_0(VAR_1);
        goto copy_fail;
    }

    VAR_10->idx = VAR_6->idx;
    VAR_10->idx_ref = FUNC_3(VAR_6->idx_ref);
    VAR_10->decoder_ref = FUNC_3(VAR_6->decoder_ref);

    FUNC_7(VAR_8->sw_format, &VAR_16, &VAR_17);
    for (VAR_14 = 0; VAR_4->linesize[VAR_14]; VAR_14++) {
        VAR_4->data[VAR_14] = (uint8_t*)(VAR_12 + VAR_15);
        VAR_4->linesize[VAR_14] = VAR_13;
        VAR_15 += VAR_13 * (VAR_4->height >> (VAR_14 ? VAR_17 : 0));
    }

    goto finish;

copy_fail:
    if (!VAR_4->buf[1]) {
        FUNC_1(VAR_7->cvdl->cuvidUnmapVideoFrame(VAR_7->decoder, VAR_12));
        FUNC_5(&VAR_10);
    } else {
        FUNC_4(&VAR_4->buf[1]);
    }

finish:
    FUNC_1(VAR_7->cudl->cuCtxPopCurrent(&VAR_11));
    return VAR_18;
}
