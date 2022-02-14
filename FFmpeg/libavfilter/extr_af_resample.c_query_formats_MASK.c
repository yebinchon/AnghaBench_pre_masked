
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** outputs; TYPE_1__** inputs; } ;
struct TYPE_4__ {int in_channel_layouts; int out_channel_layouts; int in_samplerates; int out_samplerates; int in_formats; int out_formats; } ;
typedef TYPE_1__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 () ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_2)
{
    AVFilterLink *VAR_3 = VAR_2->inputs[0];
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    AVFilterFormats *VAR_5, *VAR_6, *VAR_7, *VAR_8;
    AVFilterChannelLayouts *VAR_9, *VAR_10;
    int VAR_11;

    if (!(VAR_5 = FUNC_2 (VAR_0)) ||
        !(VAR_6 = FUNC_2 (VAR_0)) ||
        !(VAR_7 = FUNC_3 ( )) ||
        !(VAR_8 = FUNC_3 ( )) ||
        !(VAR_9 = FUNC_1 ( )) ||
        !(VAR_10 = FUNC_1 ( )))
        return FUNC_0(VAR_1);

    if ((VAR_11 = FUNC_5 (VAR_5, &VAR_3->out_formats )) < 0 ||
        (VAR_11 = FUNC_5 (VAR_6, &VAR_4->in_formats )) < 0 ||
        (VAR_11 = FUNC_5 (VAR_7, &VAR_3->out_samplerates )) < 0 ||
        (VAR_11 = FUNC_5 (VAR_8, &VAR_4->in_samplerates )) < 0 ||
        (VAR_11 = FUNC_4 (VAR_9, &VAR_3->out_channel_layouts)) < 0 ||
        (VAR_11 = FUNC_4 (VAR_10, &VAR_4->in_channel_layouts)) < 0)
        return VAR_11;

    return 0;
}
