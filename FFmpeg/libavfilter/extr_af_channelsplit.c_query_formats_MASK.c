
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {int nb_outputs; TYPE_2__** outputs; TYPE_1__** inputs; TYPE_3__* priv; } ;
struct TYPE_10__ {int * map; int channel_layout; } ;
struct TYPE_9__ {int in_channel_layouts; } ;
struct TYPE_8__ {int out_channel_layouts; } ;
typedef TYPE_3__ ChannelSplitContext ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_0)
{
    ChannelSplitContext *VAR_1 = VAR_0->priv;
    AVFilterChannelLayouts *VAR_2 = ((void*)0);
    int VAR_3, VAR_4;

    if ((VAR_4 = FUNC_5(VAR_0, FUNC_4())) < 0 ||
        (VAR_4 = FUNC_6(VAR_0, FUNC_2())) < 0)
        return VAR_4;

    if ((VAR_4 = FUNC_1(&VAR_2, VAR_1->channel_layout)) < 0 ||
        (VAR_4 = FUNC_3(VAR_2, &VAR_0->inputs[0]->out_channel_layouts)) < 0)
        return VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_0->nb_outputs; VAR_3++) {
        AVFilterChannelLayouts *VAR_5 = ((void*)0);
        uint64_t VAR_6 = FUNC_0(VAR_1->channel_layout, VAR_1->map[VAR_3]);

        if ((VAR_4 = FUNC_1(&VAR_5, VAR_6)) < 0 ||
            (VAR_4 = FUNC_3(VAR_5, &VAR_0->outputs[VAR_3]->in_channel_layouts)) < 0)
            return VAR_4;
    }

    return 0;
}
