
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t srcpad; size_t dstpad; int out_channel_layouts; int in_channel_layouts; int out_samplerates; int in_samplerates; int out_formats; int in_formats; int hw_frames_ctx; TYPE_2__* dst; TYPE_1__* src; } ;
struct TYPE_7__ {size_t input_pads; int ** inputs; } ;
struct TYPE_6__ {size_t output_pads; int ** outputs; } ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(AVFilterLink *VAR_0)
{
    if (!VAR_0)
        return;

    if (VAR_0->src)
        VAR_0->src->outputs[VAR_0->srcpad - VAR_0->src->output_pads] = ((void*)0);
    if (VAR_0->dst)
        VAR_0->dst->inputs[VAR_0->dstpad - VAR_0->dst->input_pads] = ((void*)0);

    FUNC_0(&VAR_0->hw_frames_ctx);

    FUNC_3(&VAR_0->in_formats);
    FUNC_3(&VAR_0->out_formats);
    FUNC_3(&VAR_0->in_samplerates);
    FUNC_3(&VAR_0->out_samplerates);
    FUNC_2(&VAR_0->in_channel_layouts);
    FUNC_2(&VAR_0->out_channel_layouts);
    FUNC_1(&VAR_0);
}
