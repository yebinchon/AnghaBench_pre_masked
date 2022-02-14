
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__** outputs; TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_9__ {int in_channel_layouts; int out_channel_layouts; } ;
struct TYPE_8__ {int nb_output_channels; scalar_t__ out_channel_layout; int pure_gains; } ;
typedef TYPE_1__ PanContext ;
typedef TYPE_2__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int **,scalar_t__) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_1)
{
    PanContext *VAR_2 = VAR_1->priv;
    AVFilterLink *VAR_3 = VAR_1->inputs[0];
    AVFilterLink *VAR_4 = VAR_1->outputs[0];
    AVFilterFormats *VAR_5 = ((void*)0);
    AVFilterChannelLayouts *VAR_6;
    int VAR_7;

    VAR_2->pure_gains = FUNC_1(VAR_2);

    if ((VAR_7 = FUNC_7(VAR_1, FUNC_4(VAR_0))) < 0)
        return VAR_7;

    VAR_5 = FUNC_5();
    if ((VAR_7 = FUNC_8(VAR_1, VAR_5)) < 0)
        return VAR_7;


    VAR_6 = FUNC_3();
    if ((VAR_7 = FUNC_6(VAR_6, &VAR_3->out_channel_layouts)) < 0)
        return VAR_7;


    VAR_6 = ((void*)0);
    if ((VAR_7 = FUNC_2(&VAR_6,
                          VAR_2->out_channel_layout ? VAR_2->out_channel_layout :
                          FUNC_0(VAR_2->nb_output_channels))) < 0)
        return VAR_7;
    return FUNC_6(VAR_6, &VAR_4->in_channel_layouts);
}
