
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__** inputs; TYPE_2__* priv; } ;
struct TYPE_12__ {scalar_t__ h; scalar_t__ w; TYPE_1__* hw_frames_ctx; TYPE_5__* dst; } ;
struct TYPE_11__ {scalar_t__ format; scalar_t__ sw_format; int device_ref; } ;
struct TYPE_10__ {scalar_t__ output_format; scalar_t__ output_height; scalar_t__ output_width; } ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_2__ OpenCLFilterContext ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_5__*,int ) ;

int FUNC_3(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->dst;
    OpenCLFilterContext *VAR_6 = VAR_5->priv;
    AVHWFramesContext *VAR_7;
    int VAR_8;

    if (!VAR_4->hw_frames_ctx) {
        FUNC_1(VAR_5, VAR_0, "OpenCL filtering requires a "
               "hardware frames context on the input.\n");
        return FUNC_0(VAR_3);
    }


    if (VAR_5->inputs[0] != VAR_4)
        return 0;

    VAR_7 = (AVHWFramesContext*)VAR_4->hw_frames_ctx->data;
    if (VAR_7->format != VAR_2)
        return FUNC_0(VAR_3);

    VAR_8 = FUNC_2(VAR_5, VAR_7->device_ref);
    if (VAR_8 < 0)
        return VAR_8;


    if (VAR_6->output_format == VAR_1)
        VAR_6->output_format = VAR_7->sw_format;
    if (!VAR_6->output_width)
        VAR_6->output_width = VAR_4->w;
    if (!VAR_6->output_height)
        VAR_6->output_height = VAR_4->h;

    return 0;
}
