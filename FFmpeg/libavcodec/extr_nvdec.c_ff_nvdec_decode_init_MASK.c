
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int cudaVideoSurfaceFormat ;
struct TYPE_27__ {int thread_count; int coded_height; int coded_width; TYPE_2__* hw_frames_ctx; int sw_pix_fmt; int codec_id; TYPE_1__* internal; } ;
struct TYPE_26__ {int initial_pool_size; int device_ref; } ;
struct TYPE_25__ {TYPE_3__* comp; } ;
struct TYPE_24__ {int bitDepthMinus8; int CodecType; int ChromaFormat; int ulNumDecodeSurfaces; int ulNumOutputSurfaces; int OutputFormat; int ulTargetHeight; int ulTargetWidth; int ulHeight; int ulWidth; int member_0; } ;
struct TYPE_23__ {int decoder_pool; int decoder_ref; scalar_t__ supports_444; } ;
struct TYPE_22__ {int dpb_size; } ;
struct TYPE_21__ {int depth; } ;
struct TYPE_20__ {scalar_t__ data; } ;
struct TYPE_19__ {TYPE_5__* hwaccel_priv_data; } ;
typedef TYPE_4__ NVDECFramePool ;
typedef TYPE_5__ NVDECContext ;
typedef TYPE_6__ CUVIDDECODECREATEINFO ;
typedef TYPE_7__ AVPixFmtDescriptor ;
typedef TYPE_8__ AVHWFramesContext ;
typedef TYPE_9__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,TYPE_4__*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_9__*,int ,char*,...) ;
 TYPE_4__* FUNC_3 (int) ;
 TYPE_7__* FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_9__*,int ) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,TYPE_6__*,TYPE_9__*) ;
 int VAR_12 ;

int FUNC_10(AVCodecContext *VAR_13)
{
    NVDECContext *VAR_14 = VAR_13->internal->hwaccel_priv_data;

    NVDECFramePool *VAR_15;
    AVHWFramesContext *VAR_16;
    const AVPixFmtDescriptor *VAR_17;

    CUVIDDECODECREATEINFO VAR_18 = { 0 };

    cudaVideoSurfaceFormat VAR_19;
    int VAR_20, VAR_21, VAR_22;
    int VAR_23 = 0;

    VAR_17 = FUNC_4(VAR_13->sw_pix_fmt);
    if (!VAR_17)
        return VAR_0;

    VAR_20 = FUNC_7(VAR_13->codec_id);
    if (VAR_20 < 0) {
        FUNC_2(VAR_13, VAR_2, "Unsupported codec ID\n");
        return VAR_0;
    }

    VAR_21 = FUNC_8(VAR_13->sw_pix_fmt);
    if (VAR_21 < 0) {
        FUNC_2(VAR_13, VAR_2, "Unsupported chroma format\n");
        return FUNC_0(VAR_5);
    }
    VAR_22 = VAR_14->supports_444 && VAR_21 == VAR_7;

    if (!VAR_13->hw_frames_ctx) {
        VAR_23 = FUNC_5(VAR_13, VAR_1);
        if (VAR_23 < 0)
            return VAR_23;
    }

    switch (VAR_17->comp[0].depth) {
    case 8:
        VAR_19 = VAR_22 ? VAR_10 :
                                     VAR_8;
        break;
    case 10:
    case 12:
        VAR_19 = VAR_22 ? VAR_11 :
                                     VAR_9;
        break;
    default:
        FUNC_2(VAR_13, VAR_2, "Unsupported bit depth\n");
        return FUNC_0(VAR_5);
    }

    VAR_16 = (AVHWFramesContext*)VAR_13->hw_frames_ctx->data;

    VAR_18.ulWidth = VAR_13->coded_width;
    VAR_18.ulHeight = VAR_13->coded_height;
    VAR_18.ulTargetWidth = VAR_13->coded_width;
    VAR_18.ulTargetHeight = VAR_13->coded_height;
    VAR_18.bitDepthMinus8 = VAR_17->comp[0].depth - 8;
    VAR_18.OutputFormat = VAR_19;
    VAR_18.CodecType = VAR_20;
    VAR_18.ChromaFormat = VAR_21;
    VAR_18.ulNumDecodeSurfaces = VAR_16->initial_pool_size;
    VAR_18.ulNumOutputSurfaces = VAR_16->initial_pool_size;

    VAR_23 = FUNC_9(&VAR_14->decoder_ref, VAR_16->device_ref, &VAR_18, VAR_13);
    if (VAR_23 < 0) {
        if (VAR_18.ulNumDecodeSurfaces > 32) {
            FUNC_2(VAR_13, VAR_3, "Using more than 32 (%d) decode surfaces might cause nvdec to fail.\n",
                   (int)VAR_18.ulNumDecodeSurfaces);
            FUNC_2(VAR_13, VAR_3, "Try lowering the amount of threads. Using %d right now.\n",
                   VAR_13->thread_count);
        }
        return VAR_23;
    }

    VAR_15 = FUNC_3(sizeof(*VAR_15));
    if (!VAR_15) {
        VAR_23 = FUNC_0(VAR_4);
        goto fail;
    }
    VAR_15->dpb_size = VAR_16->initial_pool_size;

    VAR_14->decoder_pool = FUNC_1(sizeof(int), VAR_15,
                                             VAR_12, VAR_6);
    if (!VAR_14->decoder_pool) {
        VAR_23 = FUNC_0(VAR_4);
        goto fail;
    }

    return 0;
fail:
    FUNC_6(VAR_13);
    return VAR_23;
}
