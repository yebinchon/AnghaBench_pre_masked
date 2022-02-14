
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct SOFAlizerContext {int sample_rate; } ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_9__ {TYPE_2__** outputs; TYPE_1__** inputs; struct SOFAlizerContext* priv; } ;
struct TYPE_8__ {int in_channel_layouts; } ;
struct TYPE_7__ {int out_channel_layouts; } ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (int **,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_2)
{
    struct SOFAlizerContext *VAR_3 = VAR_2->priv;
    AVFilterFormats *VAR_4 = ((void*)0);
    AVFilterChannelLayouts *VAR_5 = ((void*)0);
    int VAR_6, VAR_7[] = { 48000, -1 };
    static const enum AVSampleFormat VAR_8[] = {
        130, 129,
        128
    };

    VAR_4 = FUNC_4(VAR_8);
    if (!VAR_4)
        return FUNC_0(VAR_1);
    VAR_6 = FUNC_5(VAR_2, VAR_4);
    if (VAR_6)
        return VAR_6;

    VAR_5 = FUNC_2();
    if (!VAR_5)
        return FUNC_0(VAR_1);

    VAR_6 = FUNC_3(VAR_5, &VAR_2->inputs[0]->out_channel_layouts);
    if (VAR_6)
        return VAR_6;

    VAR_5 = ((void*)0);
    VAR_6 = FUNC_1(&VAR_5, VAR_0);
    if (VAR_6)
        return VAR_6;

    VAR_6 = FUNC_3(VAR_5, &VAR_2->outputs[0]->in_channel_layouts);
    if (VAR_6)
        return VAR_6;

    VAR_7[0] = VAR_3->sample_rate;
    VAR_4 = FUNC_4(VAR_7);
    if (!VAR_4)
        return FUNC_0(VAR_1);
    return FUNC_6(VAR_2, VAR_4);
}
