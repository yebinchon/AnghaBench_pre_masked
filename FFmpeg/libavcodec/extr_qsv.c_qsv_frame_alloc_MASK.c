
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int mfxStatus ;
typedef TYPE_2__* mfxHDL ;
struct TYPE_20__ {scalar_t__ Width; scalar_t__ Height; scalar_t__ FourCC; scalar_t__ ChromaFormat; } ;
typedef TYPE_3__ mfxFrameInfo ;
typedef int mfxFrameAllocResponse ;
struct TYPE_21__ {int Type; int NumFrameSuggested; TYPE_3__ Info; } ;
typedef TYPE_4__ mfxFrameAllocRequest ;
struct TYPE_24__ {scalar_t__ data; } ;
struct TYPE_23__ {scalar_t__ width; scalar_t__ height; int initial_pool_size; int sw_format; int format; TYPE_6__* hwctx; int device_ref; } ;
struct TYPE_22__ {int frame_type; TYPE_1__* surfaces; } ;
struct TYPE_19__ {int logctx; TYPE_8__* hw_frames_ctx; TYPE_8__* mids_buf; } ;
struct TYPE_18__ {TYPE_3__ Info; } ;
typedef TYPE_2__ QSVFramesContext ;
typedef TYPE_6__ AVQSVFramesContext ;
typedef TYPE_7__ AVHWFramesContext ;
typedef TYPE_8__ AVBufferRef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_8__**) ;
 TYPE_8__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ,int ,char*,...) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_8__* FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (int *,TYPE_8__*,TYPE_8__*) ;

__attribute__((used)) static mfxStatus FUNC_7(mfxHDL VAR_11, mfxFrameAllocRequest *VAR_12,
                                 mfxFrameAllocResponse *VAR_13)
{
    QSVFramesContext *VAR_14 = VAR_11;
    int VAR_15;



    if (!(VAR_12->Type & (VAR_9 |
                       VAR_10)) ||
        !(VAR_12->Type & (VAR_6 | VAR_7)))
        return VAR_4;

    if (VAR_12->Type & VAR_5) {

        AVHWFramesContext *VAR_16 = (AVHWFramesContext*)VAR_14->hw_frames_ctx->data;
        AVQSVFramesContext *VAR_17 = VAR_16->hwctx;
        mfxFrameInfo *VAR_18 = &VAR_12->Info;
        mfxFrameInfo *VAR_19 = &VAR_17->surfaces[0].Info;

        if (VAR_18->Width > VAR_19->Width || VAR_18->Height > VAR_19->Height ||
            VAR_18->FourCC != VAR_19->FourCC || VAR_18->ChromaFormat != VAR_19->ChromaFormat) {
            FUNC_3(VAR_14->logctx, VAR_0, "Mismatching surface properties in an "
                   "allocation request: %dx%d %d %d vs %dx%d %d %d\n",
                   VAR_18->Width, VAR_18->Height, VAR_18->FourCC, VAR_18->ChromaFormat,
                   VAR_19->Width, VAR_19->Height, VAR_19->FourCC, VAR_19->ChromaFormat);
            return VAR_4;
        }

        VAR_15 = FUNC_6(VAR_13, VAR_14->hw_frames_ctx, VAR_14->mids_buf);
        if (VAR_15 < 0) {
            FUNC_3(VAR_14->logctx, VAR_0,
                   "Error filling an external frame allocation request\n");
            return VAR_2;
        }
    } else if (VAR_12->Type & VAR_8) {

        AVHWFramesContext *VAR_20 = (AVHWFramesContext*)VAR_14->hw_frames_ctx->data;
        mfxFrameInfo *VAR_21 = &VAR_12->Info;

        AVBufferRef *VAR_22, *VAR_23;
        AVHWFramesContext *VAR_24;
        AVQSVFramesContext *VAR_25;

        VAR_22 = FUNC_1(VAR_20->device_ref);
        if (!VAR_22)
            return VAR_2;

        VAR_24 = (AVHWFramesContext*)VAR_22->data;
        VAR_25 = VAR_24->hwctx;

        VAR_24->format = VAR_1;
        VAR_24->sw_format = FUNC_4(VAR_21->FourCC);
        VAR_24->width = VAR_21->Width;
        VAR_24->height = VAR_21->Height;
        VAR_24->initial_pool_size = VAR_12->NumFrameSuggested;

        VAR_25->frame_type = VAR_12->Type;

        VAR_15 = FUNC_2(VAR_22);
        if (VAR_15 < 0) {
            FUNC_3(VAR_14->logctx, VAR_0,
                   "Error initializing a frames context for an internal frame "
                   "allocation request\n");
            FUNC_0(&VAR_22);
            return VAR_2;
        }

        VAR_23 = FUNC_5(VAR_22);
        if (!VAR_23) {
            FUNC_0(&VAR_22);
            return VAR_2;
        }

        VAR_15 = FUNC_6(VAR_13, VAR_22, VAR_23);
        FUNC_0(&VAR_23);
        FUNC_0(&VAR_22);
        if (VAR_15 < 0) {
            FUNC_3(VAR_14->logctx, VAR_0,
                   "Error filling an internal frame allocation request\n");
            return VAR_2;
        }
    } else {
        return VAR_4;
    }

    return VAR_3;
}
