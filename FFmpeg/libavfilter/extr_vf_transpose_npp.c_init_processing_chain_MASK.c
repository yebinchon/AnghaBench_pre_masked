
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
struct TYPE_21__ {int stage_needed; int in_fmt; int out_fmt; TYPE_11__* frames_ctx; TYPE_2__* planes_out; TYPE_1__* planes_in; } ;
struct TYPE_20__ {TYPE_4__** outputs; TYPE_3__** inputs; TYPE_5__* priv; } ;
struct TYPE_19__ {int sw_format; int device_ref; } ;
struct TYPE_18__ {scalar_t__ dir; int passthrough; TYPE_8__* stages; } ;
struct TYPE_17__ {void* hw_frames_ctx; } ;
struct TYPE_16__ {TYPE_11__* hw_frames_ctx; } ;
struct TYPE_15__ {int width; int height; } ;
struct TYPE_14__ {int width; int height; } ;
struct TYPE_13__ {scalar_t__ data; } ;
typedef TYPE_5__ NPPTransposeContext ;
typedef TYPE_6__ AVHWFramesContext ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_8__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 void* FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_7__*,int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_8__*,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_8, int VAR_9, int VAR_10,
                                 int VAR_11, int VAR_12)
{
    NPPTransposeContext *VAR_13 = VAR_8->priv;
    AVHWFramesContext *VAR_14;
    enum AVPixelFormat VAR_15;
    int VAR_16, VAR_17, VAR_18 = -1;
    int VAR_19 = VAR_11, VAR_20 = VAR_12;


    if (!VAR_8->inputs[0]->hw_frames_ctx) {
        FUNC_4(VAR_8, VAR_0, "No hw context provided on input\n");
        return FUNC_0(VAR_1);
    }

    VAR_14 = (AVHWFramesContext*)VAR_8->inputs[0]->hw_frames_ctx->data;
    VAR_15 = VAR_14->sw_format;

    if (!FUNC_5(VAR_15)) {
        FUNC_4(VAR_8, VAR_0, "Unsupported input format: %s\n",
               FUNC_3(VAR_15));
        return FUNC_0(VAR_3);
    }

    if (VAR_13->dir != VAR_4) {
        VAR_13->stages[VAR_6].stage_needed = 1;
    }

    if (VAR_13->dir == VAR_4 || VAR_13->dir == VAR_5) {
        VAR_13->stages[VAR_7].stage_needed = 1;


        VAR_19 = VAR_9;
        VAR_20 = VAR_10;
    }

    VAR_13->stages[VAR_6].in_fmt = VAR_15;
    VAR_13->stages[VAR_6].out_fmt = VAR_15;
    VAR_13->stages[VAR_6].planes_in[0].width = VAR_9;
    VAR_13->stages[VAR_6].planes_in[0].height = VAR_10;
    VAR_13->stages[VAR_6].planes_out[0].width = VAR_19;
    VAR_13->stages[VAR_6].planes_out[0].height = VAR_20;
    VAR_13->stages[VAR_7].in_fmt = VAR_15;
    VAR_13->stages[VAR_7].out_fmt = VAR_15;
    VAR_13->stages[VAR_7].planes_in[0].width = VAR_19;
    VAR_13->stages[VAR_7].planes_in[0].height = VAR_20;
    VAR_13->stages[VAR_7].planes_out[0].width = VAR_11;
    VAR_13->stages[VAR_7].planes_out[0].height = VAR_12;


    for (VAR_16 = 0; VAR_16 < FUNC_1(VAR_13->stages); VAR_16++) {
        if (!VAR_13->stages[VAR_16].stage_needed)
            continue;
        VAR_17 = FUNC_6(&VAR_13->stages[VAR_16], VAR_14->device_ref);
        if (VAR_17 < 0)
            return VAR_17;
        VAR_18 = VAR_16;
    }

    if (VAR_18 >= 0) {
        VAR_8->outputs[0]->hw_frames_ctx = FUNC_2(VAR_13->stages[VAR_18].frames_ctx);
    } else {
        VAR_8->outputs[0]->hw_frames_ctx = FUNC_2(VAR_8->inputs[0]->hw_frames_ctx);
        VAR_13->passthrough = 1;
    }

    if (!VAR_8->outputs[0]->hw_frames_ctx)
        return FUNC_0(VAR_2);

    return 0;
}
