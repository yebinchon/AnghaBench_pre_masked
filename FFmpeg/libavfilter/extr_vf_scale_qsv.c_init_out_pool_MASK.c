
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_20__ {int CropW; int CropH; } ;
typedef TYPE_4__ mfxFrameInfo ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_25__ {TYPE_2__** inputs; TYPE_8__** outputs; TYPE_5__* priv; } ;
struct TYPE_24__ {TYPE_14__* hw_frames_ctx; } ;
struct TYPE_23__ {int sw_format; int initial_pool_size; void* height; void* width; int format; TYPE_6__* hwctx; int device_ref; } ;
struct TYPE_22__ {int nb_surfaces; TYPE_3__* surfaces; int frame_type; } ;
struct TYPE_21__ {scalar_t__ format; } ;
struct TYPE_19__ {TYPE_4__ Info; } ;
struct TYPE_18__ {TYPE_1__* hw_frames_ctx; } ;
struct TYPE_17__ {scalar_t__ data; } ;
struct TYPE_16__ {scalar_t__ data; } ;
typedef TYPE_5__ QSVScaleContext ;
typedef TYPE_6__ AVQSVFramesContext ;
typedef TYPE_7__ AVHWFramesContext ;
typedef TYPE_8__ AVFilterLink ;
typedef TYPE_9__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int,int) ;
 TYPE_14__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_14__*) ;
 int FUNC_4 (TYPE_9__*,int ,char*) ;
 int FUNC_5 (TYPE_9__*,TYPE_8__*,int) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_5,
                         int VAR_6, int VAR_7)
{
    QSVScaleContext *VAR_8 = VAR_5->priv;
    AVFilterLink *VAR_9 = VAR_5->outputs[0];

    AVHWFramesContext *VAR_10;
    AVHWFramesContext *VAR_11;
    AVQSVFramesContext *VAR_12;
    AVQSVFramesContext *VAR_13;
    enum AVPixelFormat VAR_14;
    enum AVPixelFormat VAR_15;
    int VAR_16, VAR_17;


    if (!VAR_5->inputs[0]->hw_frames_ctx) {
        FUNC_4(VAR_5, VAR_0, "No hw context provided on input\n");
        return FUNC_0(VAR_3);
    }
    VAR_10 = (AVHWFramesContext*)VAR_5->inputs[0]->hw_frames_ctx->data;
    VAR_12 = VAR_10->hwctx;

    VAR_14 = VAR_10->sw_format;
    VAR_15 = (VAR_8->format == VAR_1) ? VAR_14 : VAR_8->format;

    VAR_9->hw_frames_ctx = FUNC_2(VAR_10->device_ref);
    if (!VAR_9->hw_frames_ctx)
        return FUNC_0(VAR_4);
    VAR_11 = (AVHWFramesContext*)VAR_9->hw_frames_ctx->data;
    VAR_13 = VAR_11->hwctx;

    VAR_11->format = VAR_2;
    VAR_11->width = FUNC_1(VAR_6, 16);
    VAR_11->height = FUNC_1(VAR_7, 16);
    VAR_11->sw_format = VAR_15;
    VAR_11->initial_pool_size = 4;

    VAR_13->frame_type = VAR_12->frame_type;

    VAR_17 = FUNC_5(VAR_5, VAR_9, 32);
    if (VAR_17 < 0)
        return VAR_17;

    VAR_17 = FUNC_3(VAR_9->hw_frames_ctx);
    if (VAR_17 < 0)
        return VAR_17;

    for (VAR_16 = 0; VAR_16 < VAR_13->nb_surfaces; VAR_16++) {
        mfxFrameInfo *VAR_18 = &VAR_13->surfaces[VAR_16].Info;
        VAR_18->CropW = VAR_6;
        VAR_18->CropH = VAR_7;
    }

    return 0;
}
