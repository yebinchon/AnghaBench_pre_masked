
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct HeadphoneContext {scalar_t__ hrir_fmt; int nb_inputs; } ;
struct TYPE_9__ {TYPE_2__** outputs; TYPE_1__** inputs; struct HeadphoneContext* priv; } ;
struct TYPE_8__ {int in_channel_layouts; } ;
struct TYPE_7__ {int out_channel_layouts; } ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,int ) ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_4)
{
    struct HeadphoneContext *VAR_5 = VAR_4->priv;
    AVFilterFormats *VAR_6 = ((void*)0);
    AVFilterChannelLayouts *VAR_7 = ((void*)0);
    AVFilterChannelLayouts *VAR_8 = ((void*)0);
    AVFilterChannelLayouts *VAR_9 = ((void*)0);
    int VAR_10, VAR_11;

    VAR_10 = FUNC_2(&VAR_6, VAR_1);
    if (VAR_10)
        return VAR_10;
    VAR_10 = FUNC_7(VAR_4, VAR_6);
    if (VAR_10)
        return VAR_10;

    VAR_7 = FUNC_4();
    if (!VAR_7)
        return FUNC_0(VAR_2);

    VAR_10 = FUNC_6(VAR_7, &VAR_4->inputs[0]->out_channel_layouts);
    if (VAR_10)
        return VAR_10;

    VAR_10 = FUNC_1(&VAR_8, VAR_0);
    if (VAR_10)
        return VAR_10;

    if (VAR_5->hrir_fmt == VAR_3) {
        VAR_9 = FUNC_3();
        if (!VAR_9)
            return FUNC_0(VAR_2);
        VAR_10 = FUNC_6(VAR_9, &VAR_4->inputs[1]->out_channel_layouts);
        if (VAR_10)
            return VAR_10;
    } else {
        for (VAR_11 = 1; VAR_11 < VAR_5->nb_inputs; VAR_11++) {
            VAR_10 = FUNC_6(VAR_8, &VAR_4->inputs[VAR_11]->out_channel_layouts);
            if (VAR_10)
                return VAR_10;
        }
    }

    VAR_10 = FUNC_6(VAR_8, &VAR_4->outputs[0]->in_channel_layouts);
    if (VAR_10)
        return VAR_10;

    VAR_6 = FUNC_5();
    if (!VAR_6)
        return FUNC_0(VAR_2);
    return FUNC_8(VAR_4, VAR_6);
}
