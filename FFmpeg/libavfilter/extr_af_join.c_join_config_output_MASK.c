
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_14__ {int nb_inputs; TYPE_3__** inputs; TYPE_1__* priv; } ;
struct TYPE_13__ {int channel_layout; TYPE_4__* src; } ;
struct TYPE_12__ {size_t input; int in_channel; int out_channel; int in_channel_idx; } ;
struct TYPE_11__ {int nb_channels; TYPE_2__* channels; } ;
typedef TYPE_1__ JoinContext ;
typedef TYPE_2__ ChannelMap ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int**) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int ,char*,...) ;
 int* FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*,int*) ;
 int FUNC_8 (TYPE_4__*,TYPE_2__*,int*) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->src;
    JoinContext *VAR_7 = VAR_6->priv;
    uint64_t *VAR_8;
    int VAR_9, VAR_10 = 0;


    if (!(VAR_8 = FUNC_6(VAR_6->nb_inputs, sizeof(*VAR_8))))
        return FUNC_0(VAR_4);
    for (VAR_9 = 0; VAR_9 < VAR_7->nb_channels; VAR_9++) {
        ChannelMap *VAR_11 = &VAR_7->channels[VAR_9];
        AVFilterLink *VAR_12;

        if (VAR_11->input < 0)
            continue;

        VAR_12 = VAR_6->inputs[VAR_11->input];

        if (!VAR_11->in_channel)
            VAR_11->in_channel = FUNC_1(VAR_12->channel_layout,
                                                               VAR_11->in_channel_idx);

        if (!(VAR_11->in_channel & VAR_12->channel_layout)) {
            FUNC_5(VAR_6, VAR_0, "Requested channel %s is not present in "
                   "input stream #%d.\n", FUNC_4(VAR_11->in_channel),
                   VAR_11->input);
            VAR_10 = FUNC_0(VAR_3);
            goto fail;
        }

        VAR_8[VAR_11->input] |= VAR_11->in_channel;
    }



    for (VAR_9 = 0; VAR_9 < VAR_7->nb_channels; VAR_9++) {
        ChannelMap *VAR_13 = &VAR_7->channels[VAR_9];

        if (VAR_13->input < 0)
            FUNC_8(VAR_6, VAR_13, VAR_8);
    }


    for (VAR_9 = 0; VAR_9 < VAR_7->nb_channels; VAR_9++) {
        ChannelMap *VAR_14 = &VAR_7->channels[VAR_9];

        if (VAR_14->input < 0)
            FUNC_7(VAR_6, VAR_14, VAR_8);

        if (VAR_14->input < 0) {
            FUNC_5(VAR_6, VAR_0, "Could not find input channel for "
                   "output channel '%s'.\n",
                   FUNC_4(VAR_14->out_channel));
            goto fail;
        }

        VAR_14->in_channel_idx = FUNC_3(VAR_6->inputs[VAR_14->input]->channel_layout,
                                                                 VAR_14->in_channel);
    }


    FUNC_5(VAR_6, VAR_1, "mappings: ");
    for (VAR_9 = 0; VAR_9 < VAR_7->nb_channels; VAR_9++) {
        ChannelMap *VAR_15 = &VAR_7->channels[VAR_9];
        FUNC_5(VAR_6, VAR_1, "%d.%s => %s ", VAR_15->input,
               FUNC_4(VAR_15->in_channel),
               FUNC_4(VAR_15->out_channel));
    }
    FUNC_5(VAR_6, VAR_1, "\n");

    for (VAR_9 = 0; VAR_9 < VAR_6->nb_inputs; VAR_9++) {
        if (!VAR_8[VAR_9])
            FUNC_5(VAR_6, VAR_2, "No channels are used from input "
                   "stream %d.\n", VAR_9);
    }

fail:
    FUNC_2(&VAR_8);
    return VAR_10;
}
