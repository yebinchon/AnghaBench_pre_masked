
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int nb_inputs; TYPE_2__** inputs; TYPE_1__** outputs; TYPE_3__* priv; } ;
struct TYPE_10__ {int channel_layout; } ;
struct TYPE_9__ {int out_channel_layouts; } ;
struct TYPE_8__ {int in_channel_layouts; } ;
typedef TYPE_3__ JoinContext ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int **,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_0)
{
    JoinContext *VAR_1 = VAR_0->priv;
    AVFilterChannelLayouts *VAR_2 = ((void*)0);
    int VAR_3, VAR_4;

    if ((VAR_4 = FUNC_0(&VAR_2, VAR_1->channel_layout)) < 0 ||
        (VAR_4 = FUNC_3(VAR_2, &VAR_0->outputs[0]->in_channel_layouts)) < 0)
        return VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_0->nb_inputs; VAR_3++) {
        VAR_2 = FUNC_1();
        if ((VAR_4 = FUNC_3(VAR_2, &VAR_0->inputs[VAR_3]->out_channel_layouts)) < 0)
            return VAR_4;
    }

    if ((VAR_4 = FUNC_5(VAR_0, FUNC_4())) < 0 ||
        (VAR_4 = FUNC_6(VAR_0, FUNC_2())) < 0)
        return VAR_4;

    return 0;
}
