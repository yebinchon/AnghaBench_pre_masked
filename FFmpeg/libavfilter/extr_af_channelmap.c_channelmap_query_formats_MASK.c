
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {struct TYPE_17__* channel_layouts; } ;
struct TYPE_16__ {TYPE_2__** outputs; TYPE_1__** inputs; TYPE_3__* priv; } ;
struct TYPE_15__ {int output_layout; } ;
struct TYPE_14__ {int in_channel_layouts; } ;
struct TYPE_13__ {int out_channel_layouts; } ;
typedef TYPE_3__ ChannelMapContext ;
typedef TYPE_4__ AVFilterContext ;
typedef TYPE_5__ AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__**) ;
 int FUNC_2 (TYPE_5__**,int ) ;
 TYPE_5__* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_1)
{
    ChannelMapContext *VAR_2 = VAR_1->priv;
    AVFilterChannelLayouts *VAR_3;
    AVFilterChannelLayouts *VAR_4 = ((void*)0);
    int VAR_5;

    VAR_3 = FUNC_3();
    if (!VAR_3) {
        VAR_5 = FUNC_0(VAR_0);
        goto fail;
    }
    if ((VAR_5 = FUNC_2 (&VAR_4, VAR_2->output_layout )) < 0 ||
        (VAR_5 = FUNC_7 (VAR_1 , FUNC_6() )) < 0 ||
        (VAR_5 = FUNC_8 (VAR_1 , FUNC_4() )) < 0 ||
        (VAR_5 = FUNC_5 (VAR_3 , &VAR_1->inputs[0]->out_channel_layouts)) < 0 ||
        (VAR_5 = FUNC_5 (VAR_4 , &VAR_1->outputs[0]->in_channel_layouts)) < 0)
            goto fail;

    return 0;
fail:
    if (VAR_3)
        FUNC_1(&VAR_3->channel_layouts);
    FUNC_1(&VAR_3);
    return VAR_5;
}
