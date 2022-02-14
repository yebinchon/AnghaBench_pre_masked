
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_27__ ;
typedef struct TYPE_32__ TYPE_25__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_38__ {int codec_id; TYPE_4__* hwaccel_context; TYPE_1__* hw_frames_ctx; } ;
struct TYPE_37__ {TYPE_3__* hwctx; } ;
struct TYPE_36__ {int iopattern; int opaque_alloc; int nb_ext_buffers; TYPE_25__** ext_buffers; } ;
struct TYPE_35__ {int frame_type; } ;
struct TYPE_33__ {int AsyncDepth; int IOPattern; int NumExtParam; TYPE_25__** ExtParam; } ;
struct TYPE_34__ {int async_depth; int nb_extparam_internal; TYPE_6__* avctx; TYPE_27__ param; int session; int req; TYPE_25__** extparam_internal; TYPE_25__** extparam; int ver; int async_fifo; } ;
struct TYPE_32__ {scalar_t__ BufferId; } ;
struct TYPE_31__ {scalar_t__ data; } ;
typedef TYPE_2__ QSVEncContext ;
typedef TYPE_3__ AVQSVFramesContext ;
typedef TYPE_4__ AVQSVContext ;
typedef TYPE_5__ AVHWFramesContext ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_27__*) ;
 int FUNC_3 (int ,TYPE_27__*,TYPE_27__*) ;
 int FUNC_4 (int ,TYPE_27__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_6__*,int ,char*) ;
 TYPE_25__** FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_6__*,int,char*) ;
 int FUNC_9 (TYPE_6__*,int,char*) ;
 int FUNC_10 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_14 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_16 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_17 (TYPE_6__*,TYPE_2__*) ;

int FUNC_18(AVCodecContext *VAR_10, QSVEncContext *VAR_11)
{
    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14;

    VAR_11->param.AsyncDepth = VAR_11->async_depth;

    VAR_11->async_fifo = FUNC_5(VAR_11->async_depth * FUNC_12());
    if (!VAR_11->async_fifo)
        return FUNC_0(VAR_2);

    if (VAR_10->hwaccel_context) {
        AVQSVContext *VAR_15 = VAR_10->hwaccel_context;

        VAR_12 = VAR_15->iopattern;
        VAR_13 = VAR_15->opaque_alloc;
    }

    if (VAR_10->hw_frames_ctx) {
        AVHWFramesContext *VAR_16 = (AVHWFramesContext*)VAR_10->hw_frames_ctx->data;
        AVQSVFramesContext *VAR_17 = VAR_16->hwctx;

        if (!VAR_12) {
            if (VAR_17->frame_type & VAR_6)
                VAR_12 = VAR_3;
            else if (VAR_17->frame_type &
                     (VAR_7 | VAR_8))
                VAR_12 = VAR_5;
        }
    }

    if (!VAR_12)
        VAR_12 = VAR_4;
    VAR_11->param.IOPattern = VAR_12;

    VAR_14 = FUNC_17(VAR_10, VAR_11);
    if (VAR_14 < 0)
        return VAR_14;

    VAR_14 = FUNC_1(VAR_11->session,&VAR_11->ver);
    if (VAR_14 < 0) {
        return FUNC_8(VAR_10, VAR_14,
                                  "Error querying mfx version");
    }


    switch (VAR_10->codec_id) {
    case 129:
        VAR_14 = FUNC_11(VAR_10, VAR_11);
        break;
    default:
        VAR_14 = FUNC_10(VAR_10, VAR_11);
        break;
    }
    if (VAR_14 < 0)
        return VAR_14;

    if (VAR_10->hwaccel_context) {
        AVQSVContext *VAR_18 = VAR_10->hwaccel_context;
        int VAR_19, VAR_20;

        VAR_11->extparam = FUNC_7(VAR_18->nb_ext_buffers + VAR_11->nb_extparam_internal,
                                       sizeof(*VAR_11->extparam));
        if (!VAR_11->extparam)
            return FUNC_0(VAR_2);

        VAR_11->param.ExtParam = VAR_11->extparam;
        for (VAR_19 = 0; VAR_19 < VAR_18->nb_ext_buffers; VAR_19++)
            VAR_11->param.ExtParam[VAR_19] = VAR_18->ext_buffers[VAR_19];
        VAR_11->param.NumExtParam = VAR_18->nb_ext_buffers;

        for (VAR_19 = 0; VAR_19 < VAR_11->nb_extparam_internal; VAR_19++) {
            for (VAR_20 = 0; VAR_20 < VAR_18->nb_ext_buffers; VAR_20++) {
                if (VAR_18->ext_buffers[VAR_20]->BufferId == VAR_11->extparam_internal[VAR_19]->BufferId)
                    break;
            }
            if (VAR_20 < VAR_18->nb_ext_buffers)
                continue;

            VAR_11->param.ExtParam[VAR_11->param.NumExtParam++] = VAR_11->extparam_internal[VAR_19];
        }
    } else {
        VAR_11->param.ExtParam = VAR_11->extparam_internal;
        VAR_11->param.NumExtParam = VAR_11->nb_extparam_internal;
    }

    VAR_14 = FUNC_3(VAR_11->session, &VAR_11->param, &VAR_11->param);
    if (VAR_14 == VAR_9) {
        FUNC_6(VAR_10, VAR_1, "Encoder will work with partial HW acceleration\n");
    } else if (VAR_14 < 0) {
        return FUNC_8(VAR_10, VAR_14,
                                  "Error querying encoder params");
    }

    VAR_14 = FUNC_4(VAR_11->session, &VAR_11->param, &VAR_11->req);
    if (VAR_14 < 0)
        return FUNC_8(VAR_10, VAR_14,
                                  "Error querying (IOSurf) the encoding parameters");

    if (VAR_13) {
        VAR_14 = FUNC_13(VAR_10, VAR_11);
        if (VAR_14 < 0)
            return VAR_14;
    }

    VAR_14 = FUNC_2(VAR_11->session, &VAR_11->param);
    if (VAR_14 < 0)
        return FUNC_8(VAR_10, VAR_14,
                                  "Error initializing the encoder");
    else if (VAR_14 > 0)
        FUNC_9(VAR_10, VAR_14,
                             "Warning in encoder initialization");

    switch (VAR_10->codec_id) {
    case 129:
        VAR_14 = FUNC_14(VAR_10, VAR_11);
        break;
    case 128:
        VAR_14 = FUNC_16(VAR_10, VAR_11);
        break;
    default:
        VAR_14 = FUNC_15(VAR_10, VAR_11);
        break;
    }
    if (VAR_14 < 0) {
        FUNC_6(VAR_10, VAR_0, "Error retrieving encoding parameters.\n");
        return VAR_14;
    }

    VAR_11->avctx = VAR_10;

    return 0;
}
