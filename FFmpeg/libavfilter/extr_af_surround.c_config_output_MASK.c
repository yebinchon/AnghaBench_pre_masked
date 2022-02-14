
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int channels; int channel_layout; TYPE_3__* src; } ;
struct TYPE_6__ {int buf_size; int nb_out_channels; void* output; void* overlap_buffer; int lfe_out; int * output_levels; int bc_out; int br_out; int bl_out; int sr_out; int sl_out; int fr_out; int fl_out; int fc_out; int level_out; int * irdft; } ;
typedef TYPE_1__ AudioSurroundContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


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
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_11)
{
    AVFilterContext *VAR_12 = VAR_11->src;
    AudioSurroundContext *VAR_13 = VAR_12->priv;
    int VAR_14;

    VAR_13->irdft = FUNC_1(VAR_11->channels, sizeof(*VAR_13->irdft));
    if (!VAR_13->irdft)
        return FUNC_0(VAR_9);

    for (VAR_14 = 0; VAR_14 < VAR_11->channels; VAR_14++) {
        VAR_13->irdft[VAR_14] = FUNC_4(FUNC_6(VAR_13->buf_size), VAR_10);
        if (!VAR_13->irdft[VAR_14])
            return FUNC_0(VAR_9);
    }
    VAR_13->nb_out_channels = VAR_11->channels;
    VAR_13->output_levels = FUNC_3(VAR_13->nb_out_channels, sizeof(*VAR_13->output_levels));
    if (!VAR_13->output_levels)
        return FUNC_0(VAR_9);
    for (VAR_14 = 0; VAR_14 < VAR_13->nb_out_channels; VAR_14++)
        VAR_13->output_levels[VAR_14] = VAR_13->level_out;
    VAR_14 = FUNC_2(VAR_11->channel_layout, VAR_3);
    if (VAR_14 >= 0)
        VAR_13->output_levels[VAR_14] *= VAR_13->fc_out;
    VAR_14 = FUNC_2(VAR_11->channel_layout, VAR_4);
    if (VAR_14 >= 0)
        VAR_13->output_levels[VAR_14] *= VAR_13->fl_out;
    VAR_14 = FUNC_2(VAR_11->channel_layout, VAR_5);
    if (VAR_14 >= 0)
        VAR_13->output_levels[VAR_14] *= VAR_13->fr_out;
    VAR_14 = FUNC_2(VAR_11->channel_layout, VAR_7);
    if (VAR_14 >= 0)
        VAR_13->output_levels[VAR_14] *= VAR_13->sl_out;
    VAR_14 = FUNC_2(VAR_11->channel_layout, VAR_8);
    if (VAR_14 >= 0)
        VAR_13->output_levels[VAR_14] *= VAR_13->sr_out;
    VAR_14 = FUNC_2(VAR_11->channel_layout, VAR_1);
    if (VAR_14 >= 0)
        VAR_13->output_levels[VAR_14] *= VAR_13->bl_out;
    VAR_14 = FUNC_2(VAR_11->channel_layout, VAR_2);
    if (VAR_14 >= 0)
        VAR_13->output_levels[VAR_14] *= VAR_13->br_out;
    VAR_14 = FUNC_2(VAR_11->channel_layout, VAR_0);
    if (VAR_14 >= 0)
        VAR_13->output_levels[VAR_14] *= VAR_13->bc_out;
    VAR_14 = FUNC_2(VAR_11->channel_layout, VAR_6);
    if (VAR_14 >= 0)
        VAR_13->output_levels[VAR_14] *= VAR_13->lfe_out;

    VAR_13->output = FUNC_5(VAR_11, VAR_13->buf_size * 2);
    VAR_13->overlap_buffer = FUNC_5(VAR_11, VAR_13->buf_size * 2);
    if (!VAR_13->overlap_buffer || !VAR_13->output)
        return FUNC_0(VAR_9);

    return 0;
}
