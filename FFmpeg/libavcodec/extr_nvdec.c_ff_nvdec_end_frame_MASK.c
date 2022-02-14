
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* internal; } ;
struct TYPE_17__ {int pSliceDataOffsets; int nNumSlices; int pBitstreamData; int nBitstreamDataLen; } ;
struct TYPE_16__ {TYPE_7__ pic_params; int slice_offsets; int nb_slices; int bitstream; int bitstream_len; TYPE_2__* decoder_ref; } ;
struct TYPE_15__ {TYPE_4__* cudl; int decoder; TYPE_3__* cvdl; int cuda_ctx; } ;
struct TYPE_14__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_13__ {int (* cuvidDecodePicture ) (int ,TYPE_7__*) ;} ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {TYPE_6__* hwaccel_priv_data; } ;
typedef TYPE_5__ NVDECDecoder ;
typedef TYPE_6__ NVDECContext ;
typedef int CUcontext ;
typedef TYPE_7__ CUVIDPICPARAMS ;
typedef TYPE_8__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_7__*) ;
 int FUNC_3 (int *) ;

int FUNC_4(AVCodecContext *VAR_0)
{
    NVDECContext *VAR_1 = VAR_0->internal->hwaccel_priv_data;
    NVDECDecoder *VAR_2 = (NVDECDecoder*)VAR_1->decoder_ref->data;
    void *VAR_3 = VAR_0;
    CUVIDPICPARAMS *VAR_4 = &VAR_1->pic_params;

    CUcontext VAR_5;

    int VAR_6 = 0;

    VAR_4->nBitstreamDataLen = VAR_1->bitstream_len;
    VAR_4->pBitstreamData = VAR_1->bitstream;
    VAR_4->nNumSlices = VAR_1->nb_slices;
    VAR_4->pSliceDataOffsets = VAR_1->slice_offsets;

    VAR_6 = FUNC_0(VAR_2->cudl->cuCtxPushCurrent(VAR_2->cuda_ctx));
    if (VAR_6 < 0)
        return VAR_6;

    VAR_6 = FUNC_0(VAR_2->cvdl->cuvidDecodePicture(VAR_2->decoder, &VAR_1->pic_params));
    if (VAR_6 < 0)
        goto finish;

finish:
    FUNC_0(VAR_2->cudl->cuCtxPopCurrent(&VAR_5));

    return VAR_6;
}
