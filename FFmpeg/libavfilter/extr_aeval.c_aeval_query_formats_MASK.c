
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_10__ {TYPE_1__* priv; TYPE_2__** outputs; TYPE_2__** inputs; } ;
struct TYPE_9__ {int in_channel_layouts; int out_channel_layouts; } ;
struct TYPE_8__ {int nb_channels; scalar_t__ out_channel_layout; scalar_t__ same_chlayout; } ;
typedef TYPE_1__ EvalContext ;
typedef TYPE_2__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;




 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int **,scalar_t__) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int const*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_0)
{
    AVFilterFormats *VAR_1 = ((void*)0);
    AVFilterChannelLayouts *VAR_2;
    AVFilterLink *VAR_3 = VAR_0->inputs[0];
    AVFilterLink *VAR_4 = VAR_0->outputs[0];
    EvalContext *VAR_5 = VAR_0->priv;
    static const enum AVSampleFormat VAR_6[] = {
        129, 128
    };
    int VAR_7;


    VAR_2 = FUNC_2();
    if ((VAR_7 = FUNC_4(VAR_2, &VAR_3->out_channel_layouts)) < 0)
        return VAR_7;

    if (VAR_5->same_chlayout) {
        VAR_2 = FUNC_2();
        if ((VAR_7 = FUNC_6(VAR_0, VAR_2)) < 0)
            return VAR_7;
    } else {

        VAR_2 = ((void*)0);
        if ((VAR_7 = FUNC_1(&VAR_2,
                              VAR_5->out_channel_layout ? VAR_5->out_channel_layout :
                              FUNC_0(VAR_5->nb_channels))) < 0)
            return VAR_7;
        if ((VAR_7 = FUNC_4(VAR_2, &VAR_4->in_channel_layouts)) < 0)
            return VAR_7;
    }

    VAR_1 = FUNC_5(VAR_6);
    if ((VAR_7 = FUNC_7(VAR_0, VAR_1)) < 0)
        return VAR_7;

    VAR_1 = FUNC_3();
    return FUNC_8(VAR_0, VAR_1);
}
