
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int nb_inputs; TYPE_2__** inputs; } ;
struct TYPE_7__ {int channel_layout; } ;
struct TYPE_6__ {int out_channel; int input; int in_channel; } ;
typedef TYPE_1__ ChannelMap ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;



__attribute__((used)) static void FUNC_0(AVFilterContext *VAR_0, ChannelMap *VAR_1,
                               uint64_t *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->nb_inputs; VAR_3++) {
        AVFilterLink *VAR_4 = VAR_0->inputs[VAR_3];

        if (VAR_1->out_channel & VAR_4->channel_layout &&
            !(VAR_1->out_channel & VAR_2[VAR_3])) {
            VAR_1->input = VAR_3;
            VAR_1->in_channel = VAR_1->out_channel;
            VAR_2[VAR_3] |= VAR_1->out_channel;
            return;
        }
    }
}
