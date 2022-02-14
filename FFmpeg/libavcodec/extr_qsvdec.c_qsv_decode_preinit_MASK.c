
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int IOPattern; int AsyncDepth; int NumExtParam; int ExtParam; } ;
typedef TYPE_1__ mfxVideoParam ;
typedef int * mfxSession ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_22__ {scalar_t__ data; } ;
struct TYPE_21__ {int pix_fmt; int hw_device_ctx; TYPE_9__* hw_frames_ctx; TYPE_4__* hwaccel_context; } ;
struct TYPE_20__ {TYPE_3__* hwctx; } ;
struct TYPE_19__ {int iopattern; int nb_ext_buffers; int ext_buffers; int * session; } ;
struct TYPE_18__ {int frame_type; } ;
struct TYPE_17__ {int orig_pix_fmt; int async_depth; int iopattern; int nb_ext_buffers; int ext_buffers; scalar_t__ async_fifo; } ;
typedef TYPE_2__ QSVContext ;
typedef TYPE_3__ AVQSVFramesContext ;
typedef TYPE_4__ AVQSVContext ;
typedef TYPE_5__ AVHWFramesContext ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,int ,char*) ;
 int FUNC_3 (TYPE_6__*,int*) ;
 int FUNC_4 (TYPE_6__*,int,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_6__*,TYPE_2__*,int *,TYPE_9__*,int ) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_9, QSVContext *VAR_10, enum AVPixelFormat VAR_11, mfxVideoParam *VAR_12)
{
    mfxSession VAR_13 = ((void*)0);
    int VAR_14 = 0;
    int VAR_15;
    enum AVPixelFormat VAR_16[3] = {
        VAR_2,
        VAR_11,
        VAR_1 };

    VAR_15 = FUNC_3(VAR_9, VAR_16);
    if (VAR_15 < 0) {
        VAR_10->orig_pix_fmt = VAR_9->pix_fmt = VAR_1;
        return VAR_15;
    }

    if (!VAR_10->async_fifo) {
        VAR_10->async_fifo = FUNC_1(VAR_10->async_depth * FUNC_5());
        if (!VAR_10->async_fifo)
            return FUNC_0(VAR_3);
    }

    if (VAR_9->pix_fmt == VAR_2 && VAR_9->hwaccel_context) {
        AVQSVContext *VAR_17 = VAR_9->hwaccel_context;
        VAR_13 = VAR_17->session;
        VAR_14 = VAR_17->iopattern;
        VAR_10->ext_buffers = VAR_17->ext_buffers;
        VAR_10->nb_ext_buffers = VAR_17->nb_ext_buffers;
    }

    if (VAR_9->hw_frames_ctx) {
        AVHWFramesContext *VAR_18 = (AVHWFramesContext*)VAR_9->hw_frames_ctx->data;
        AVQSVFramesContext *VAR_19 = VAR_18->hwctx;

        if (!VAR_14) {
            if (VAR_19->frame_type & VAR_7)
                VAR_14 = VAR_4;
            else if (VAR_19->frame_type & VAR_8)
                VAR_14 = VAR_6;
        }
    }

    if (!VAR_14)
        VAR_14 = VAR_5;
    VAR_10->iopattern = VAR_14;

    FUNC_4(VAR_9, VAR_10->iopattern, "Decoder");

    VAR_15 = FUNC_6(VAR_9, VAR_10, VAR_13, VAR_9->hw_frames_ctx, VAR_9->hw_device_ctx);
    if (VAR_15 < 0) {
        FUNC_2(VAR_9, VAR_0, "Error initializing an MFX session\n");
        return VAR_15;
    }

    VAR_12->IOPattern = VAR_10->iopattern;
    VAR_12->AsyncDepth = VAR_10->async_depth;
    VAR_12->ExtParam = VAR_10->ext_buffers;
    VAR_12->NumExtParam = VAR_10->nb_ext_buffers;

    return 0;
 }
