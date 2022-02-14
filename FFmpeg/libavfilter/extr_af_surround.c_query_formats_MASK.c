
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__** inputs; TYPE_1__** outputs; TYPE_3__* priv; } ;
struct TYPE_10__ {int in_channel_layout; int out_channel_layout; } ;
struct TYPE_9__ {int out_channel_layouts; } ;
struct TYPE_8__ {int in_channel_layouts; } ;
typedef TYPE_3__ AudioSurroundContext ;
typedef int AVFilterFormats ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_2)
{
    AudioSurroundContext *VAR_3 = VAR_2->priv;
    AVFilterFormats *VAR_4 = ((void*)0);
    AVFilterChannelLayouts *VAR_5 = ((void*)0);
    int VAR_6;

    VAR_6 = FUNC_2(&VAR_4, VAR_0);
    if (VAR_6)
        return VAR_6;
    VAR_6 = FUNC_5(VAR_2, VAR_4);
    if (VAR_6)
        return VAR_6;

    VAR_5 = ((void*)0);
    VAR_6 = FUNC_1(&VAR_5, VAR_3->out_channel_layout);
    if (VAR_6)
        return VAR_6;

    VAR_6 = FUNC_4(VAR_5, &VAR_2->outputs[0]->in_channel_layouts);
    if (VAR_6)
        return VAR_6;

    VAR_5 = ((void*)0);
    VAR_6 = FUNC_1(&VAR_5, VAR_3->in_channel_layout);
    if (VAR_6)
        return VAR_6;

    VAR_6 = FUNC_4(VAR_5, &VAR_2->inputs[0]->out_channel_layouts);
    if (VAR_6)
        return VAR_6;

    VAR_4 = FUNC_3();
    if (!VAR_4)
        return FUNC_0(VAR_1);
    return FUNC_6(VAR_2, VAR_4);
}
