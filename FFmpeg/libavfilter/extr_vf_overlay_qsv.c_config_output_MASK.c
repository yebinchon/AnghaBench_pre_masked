
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__** inputs; TYPE_2__* priv; } ;
struct TYPE_13__ {scalar_t__ format; int frame_rate; int time_base; int h; int w; TYPE_1__* hw_frames_ctx; TYPE_5__* src; } ;
struct TYPE_12__ {scalar_t__ device_ctx; } ;
struct TYPE_11__ {int qsv_param; int qsv; int * var_values; } ;
struct TYPE_10__ {scalar_t__ data; } ;
typedef TYPE_2__ QSVOverlayContext ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int FUNC_4 (TYPE_5__*,int *,int *) ;
 int FUNC_5 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_6->src;
    QSVOverlayContext *VAR_8 = VAR_7->priv;
    AVFilterLink *VAR_9 = VAR_7->inputs[0];
    AVFilterLink *VAR_10 = VAR_7->inputs[1];
    int VAR_11;

    FUNC_3(VAR_7, VAR_0, "Output is of %s.\n", FUNC_1(VAR_6->format));
    if ((VAR_9->format == VAR_2 && VAR_10->format != VAR_2) ||
        (VAR_9->format != VAR_2 && VAR_10->format == VAR_2)) {
        FUNC_3(VAR_7, VAR_1, "Mixing hardware and software pixel formats is not supported.\n");
        return FUNC_0(VAR_3);
    } else if (VAR_9->format == VAR_2) {
        AVHWFramesContext *VAR_12 = (AVHWFramesContext *)VAR_9->hw_frames_ctx->data;
        AVHWFramesContext *VAR_13 = (AVHWFramesContext *)VAR_10->hw_frames_ctx->data;

        if (VAR_12->device_ctx != VAR_13->device_ctx) {
            FUNC_3(VAR_7, VAR_1, "Inputs with different underlying QSV devices are forbidden.\n");
            return FUNC_0(VAR_3);
        }
    }

    VAR_6->w = VAR_8->var_values[VAR_5];
    VAR_6->h = VAR_8->var_values[VAR_4];
    VAR_6->frame_rate = VAR_9->frame_rate;
    VAR_6->time_base = FUNC_2(VAR_6->frame_rate);

    VAR_11 = FUNC_5(VAR_7);
    if (VAR_11 < 0)
        return VAR_11;

    return FUNC_4(VAR_7, &VAR_8->qsv, &VAR_8->qsv_param);
}
