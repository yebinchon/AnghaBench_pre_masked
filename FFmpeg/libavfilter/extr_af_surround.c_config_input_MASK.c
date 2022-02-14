
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int channels; double sample_rate; int format; int channel_layout; TYPE_3__* dst; } ;
struct TYPE_6__ {int buf_size; int nb_in_channels; float lowcut; float lowcutf; float highcut; float highcutf; int fifo; int input; int lfe_in; int * input_levels; int bc_in; int br_in; int bl_in; int sr_in; int sl_in; int fr_in; int fl_in; int fc_in; int level_in; int * rdft; } ;
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
 int FUNC_1 (int ,int,int) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_11)
{
    AVFilterContext *VAR_12 = VAR_11->dst;
    AudioSurroundContext *VAR_13 = VAR_12->priv;
    int VAR_14;

    VAR_13->rdft = FUNC_2(VAR_11->channels, sizeof(*VAR_13->rdft));
    if (!VAR_13->rdft)
        return FUNC_0(VAR_10);

    for (VAR_14 = 0; VAR_14 < VAR_11->channels; VAR_14++) {
        VAR_13->rdft[VAR_14] = FUNC_5(FUNC_7(VAR_13->buf_size), VAR_9);
        if (!VAR_13->rdft[VAR_14])
            return FUNC_0(VAR_10);
    }
    VAR_13->nb_in_channels = VAR_11->channels;
    VAR_13->input_levels = FUNC_4(VAR_13->nb_in_channels, sizeof(*VAR_13->input_levels));
    if (!VAR_13->input_levels)
        return FUNC_0(VAR_10);
    for (VAR_14 = 0; VAR_14 < VAR_13->nb_in_channels; VAR_14++)
        VAR_13->input_levels[VAR_14] = VAR_13->level_in;
    VAR_14 = FUNC_3(VAR_11->channel_layout, VAR_3);
    if (VAR_14 >= 0)
        VAR_13->input_levels[VAR_14] *= VAR_13->fc_in;
    VAR_14 = FUNC_3(VAR_11->channel_layout, VAR_4);
    if (VAR_14 >= 0)
        VAR_13->input_levels[VAR_14] *= VAR_13->fl_in;
    VAR_14 = FUNC_3(VAR_11->channel_layout, VAR_5);
    if (VAR_14 >= 0)
        VAR_13->input_levels[VAR_14] *= VAR_13->fr_in;
    VAR_14 = FUNC_3(VAR_11->channel_layout, VAR_7);
    if (VAR_14 >= 0)
        VAR_13->input_levels[VAR_14] *= VAR_13->sl_in;
    VAR_14 = FUNC_3(VAR_11->channel_layout, VAR_8);
    if (VAR_14 >= 0)
        VAR_13->input_levels[VAR_14] *= VAR_13->sr_in;
    VAR_14 = FUNC_3(VAR_11->channel_layout, VAR_1);
    if (VAR_14 >= 0)
        VAR_13->input_levels[VAR_14] *= VAR_13->bl_in;
    VAR_14 = FUNC_3(VAR_11->channel_layout, VAR_2);
    if (VAR_14 >= 0)
        VAR_13->input_levels[VAR_14] *= VAR_13->br_in;
    VAR_14 = FUNC_3(VAR_11->channel_layout, VAR_0);
    if (VAR_14 >= 0)
        VAR_13->input_levels[VAR_14] *= VAR_13->bc_in;
    VAR_14 = FUNC_3(VAR_11->channel_layout, VAR_6);
    if (VAR_14 >= 0)
        VAR_13->input_levels[VAR_14] *= VAR_13->lfe_in;

    VAR_13->input = FUNC_6(VAR_11, VAR_13->buf_size * 2);
    if (!VAR_13->input)
        return FUNC_0(VAR_10);

    VAR_13->fifo = FUNC_1(VAR_11->format, VAR_11->channels, VAR_13->buf_size);
    if (!VAR_13->fifo)
        return FUNC_0(VAR_10);

    VAR_13->lowcut = 1.f * VAR_13->lowcutf / (VAR_11->sample_rate * 0.5) * (VAR_13->buf_size / 2);
    VAR_13->highcut = 1.f * VAR_13->highcutf / (VAR_11->sample_rate * 0.5) * (VAR_13->buf_size / 2);

    return 0;
}
