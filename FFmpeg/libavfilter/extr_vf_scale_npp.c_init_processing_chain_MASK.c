
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_21__ {int stage_needed; int in_fmt; int out_fmt; TYPE_11__* frames_ctx; TYPE_4__* planes_in; TYPE_3__* planes_out; } ;
struct TYPE_20__ {TYPE_1__** outputs; TYPE_2__** inputs; TYPE_5__* priv; } ;
struct TYPE_19__ {int sw_format; int device_ref; } ;
struct TYPE_18__ {scalar_t__ format; scalar_t__ interp_algo; int passthrough; TYPE_8__* stages; } ;
struct TYPE_17__ {int width; int height; } ;
struct TYPE_16__ {int width; int height; } ;
struct TYPE_15__ {TYPE_11__* hw_frames_ctx; } ;
struct TYPE_14__ {void* hw_frames_ctx; } ;
struct TYPE_13__ {scalar_t__ data; } ;
typedef TYPE_5__ NPPScaleContext ;
typedef TYPE_6__ AVHWFramesContext ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_8__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 void* FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_7__*,int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_8__*,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterContext *VAR_13, int VAR_14, int VAR_15,
                                 int VAR_16, int VAR_17)
{
    NPPScaleContext *VAR_18 = VAR_13->priv;

    AVHWFramesContext *VAR_19;

    enum AVPixelFormat VAR_20;
    enum AVPixelFormat VAR_21;
    enum AVPixelFormat VAR_22;
    enum AVPixelFormat VAR_23;

    int VAR_24, VAR_25, VAR_26 = -1;


    if (!VAR_13->inputs[0]->hw_frames_ctx) {
        FUNC_4(VAR_13, VAR_1, "No hw context provided on input\n");
        return FUNC_0(VAR_4);
    }
    VAR_19 = (AVHWFramesContext*)VAR_13->inputs[0]->hw_frames_ctx->data;
    VAR_20 = VAR_19->sw_format;
    VAR_21 = (VAR_18->format == VAR_3) ? VAR_20 : VAR_18->format;

    if (!FUNC_5(VAR_20)) {
        FUNC_4(VAR_13, VAR_1, "Unsupported input format: %s\n",
               FUNC_3(VAR_20));
        return FUNC_0(VAR_6);
    }
    if (!FUNC_5(VAR_21)) {
        FUNC_4(VAR_13, VAR_1, "Unsupported output format: %s\n",
               FUNC_3(VAR_21));
        return FUNC_0(VAR_6);
    }

    VAR_22 = FUNC_6(VAR_20);
    VAR_23 = FUNC_6(VAR_21);
    if (VAR_22 == VAR_3 ||
        VAR_23 == VAR_3)
        return VAR_0;


    if (VAR_14 != VAR_16 || VAR_15 != VAR_17 ||
        VAR_22 != VAR_23) {
        VAR_18->stages[VAR_12].stage_needed = 1;

        if (VAR_18->interp_algo == VAR_9 &&
            (VAR_16 > VAR_14 && VAR_17 > VAR_15)) {
            VAR_18->interp_algo = VAR_8;
            FUNC_4(VAR_13, VAR_2, "super-sampling not supported for output dimensions, using lanczos instead.\n");
        }
        if (VAR_18->interp_algo == VAR_9 &&
            !(VAR_16 < VAR_14 && VAR_17 < VAR_15)) {
            VAR_18->interp_algo = VAR_7;
            FUNC_4(VAR_13, VAR_2, "super-sampling not supported for output dimensions, using cubic instead.\n");
        }
    }

    if (!VAR_18->stages[VAR_12].stage_needed && VAR_20 == VAR_21)
        VAR_18->passthrough = 1;

    if (!VAR_18->passthrough) {
        if (VAR_20 != VAR_22)
            VAR_18->stages[VAR_10].stage_needed = 1;
        if (VAR_21 != VAR_23)
            VAR_18->stages[VAR_11].stage_needed = 1;
    }

    VAR_18->stages[VAR_10].in_fmt = VAR_20;
    VAR_18->stages[VAR_10].out_fmt = VAR_22;
    VAR_18->stages[VAR_10].planes_in[0].width = VAR_14;
    VAR_18->stages[VAR_10].planes_in[0].height = VAR_15;

    VAR_18->stages[VAR_12].in_fmt = VAR_22;
    VAR_18->stages[VAR_12].out_fmt = VAR_23;
    VAR_18->stages[VAR_12].planes_in[0].width = VAR_14;
    VAR_18->stages[VAR_12].planes_in[0].height = VAR_15;
    VAR_18->stages[VAR_12].planes_out[0].width = VAR_16;
    VAR_18->stages[VAR_12].planes_out[0].height = VAR_17;

    VAR_18->stages[VAR_11].in_fmt = VAR_23;
    VAR_18->stages[VAR_11].out_fmt = VAR_21;
    VAR_18->stages[VAR_11].planes_in[0].width = VAR_16;
    VAR_18->stages[VAR_11].planes_in[0].height = VAR_17;


    for (VAR_24 = 0; VAR_24 < FUNC_1(VAR_18->stages); VAR_24++) {
        if (!VAR_18->stages[VAR_24].stage_needed)
            continue;

        VAR_25 = FUNC_7(&VAR_18->stages[VAR_24], VAR_19->device_ref);
        if (VAR_25 < 0)
            return VAR_25;

        VAR_26 = VAR_24;
    }

    if (VAR_26 >= 0)
        VAR_13->outputs[0]->hw_frames_ctx = FUNC_2(VAR_18->stages[VAR_26].frames_ctx);
    else
        VAR_13->outputs[0]->hw_frames_ctx = FUNC_2(VAR_13->inputs[0]->hw_frames_ctx);

    if (!VAR_13->outputs[0]->hw_frames_ctx)
        return FUNC_0(VAR_5);

    return 0;
}
