
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int nb_outputs; int * outputs; TYPE_1__* priv; } ;
struct TYPE_13__ {TYPE_4__* dst; } ;
struct TYPE_12__ {int channels; int channel_layout; int * extended_data; int * data; } ;
struct TYPE_11__ {size_t* map; } ;
typedef TYPE_1__ ChannelSplitContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,size_t) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    ChannelSplitContext *VAR_4 = VAR_3->priv;
    int VAR_5, VAR_6 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_3->nb_outputs; VAR_5++) {
        AVFrame *VAR_7 = FUNC_2(VAR_2);

        if (!VAR_7) {
            VAR_6 = FUNC_0(VAR_0);
            break;
        }

        VAR_7->data[0] = VAR_7->extended_data[0] = VAR_7->extended_data[VAR_4->map[VAR_5]];
        VAR_7->channel_layout =
            FUNC_1(VAR_2->channel_layout, VAR_4->map[VAR_5]);
        VAR_7->channels = 1;

        VAR_6 = FUNC_4(VAR_3->outputs[VAR_5], VAR_7);
        if (VAR_6 < 0)
            break;
    }
    FUNC_3(&VAR_2);
    return VAR_6;
}
