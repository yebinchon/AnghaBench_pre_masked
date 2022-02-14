
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_10__ {TYPE_2__** inputs; TYPE_2__** outputs; TYPE_1__* priv; } ;
struct TYPE_9__ {int in_channel_layouts; int out_channel_layouts; } ;
struct TYPE_8__ {int nb_inputs; int sample_rate; int nb_outputs; } ;
typedef TYPE_1__ LADSPAContext ;
typedef TYPE_2__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **,int ) ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int const*) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_2)
{
    LADSPAContext *VAR_3 = VAR_2->priv;
    AVFilterFormats *VAR_4;
    AVFilterChannelLayouts *VAR_5;
    static const enum AVSampleFormat VAR_6[] = {
        129, 128 };
    int VAR_7;

    VAR_4 = FUNC_6(VAR_6);
    if (!VAR_4)
        return FUNC_0(VAR_1);
    VAR_7 = FUNC_8(VAR_2, VAR_4);
    if (VAR_7 < 0)
        return VAR_7;

    if (VAR_3->nb_inputs) {
        VAR_4 = FUNC_4();
        if (!VAR_4)
            return FUNC_0(VAR_1);

        VAR_7 = FUNC_9(VAR_2, VAR_4);
        if (VAR_7 < 0)
            return VAR_7;
    } else {
        int VAR_8[] = { VAR_3->sample_rate, -1 };

        VAR_7 = FUNC_9(VAR_2, FUNC_6(VAR_8));
        if (VAR_7 < 0)
            return VAR_7;
    }

    if (VAR_3->nb_inputs == 1 && VAR_3->nb_outputs == 1) {

        VAR_5 = FUNC_3();
        if (!VAR_5)
            return FUNC_0(VAR_1);

        VAR_7 = FUNC_7(VAR_2, VAR_5);
        if (VAR_7 < 0)
            return VAR_7;
    } else if (VAR_3->nb_inputs == 2 && VAR_3->nb_outputs == 2) {
        VAR_5 = ((void*)0);
        VAR_7 = FUNC_2(&VAR_5, VAR_0);
        if (VAR_7 < 0)
            return VAR_7;
        VAR_7 = FUNC_7(VAR_2, VAR_5);
        if (VAR_7 < 0)
            return VAR_7;
    } else {
        AVFilterLink *VAR_9 = VAR_2->outputs[0];

        if (VAR_3->nb_inputs >= 1) {
            AVFilterLink *VAR_10 = VAR_2->inputs[0];
            uint64_t VAR_11 = FUNC_1(VAR_3->nb_inputs);

            VAR_5 = ((void*)0);
            VAR_7 = FUNC_2(&VAR_5, VAR_11);
            if (VAR_7 < 0)
                return VAR_7;
            VAR_7 = FUNC_5(VAR_5, &VAR_10->out_channel_layouts);
            if (VAR_7 < 0)
                return VAR_7;

            if (!VAR_3->nb_outputs) {
                VAR_7 = FUNC_5(VAR_5, &VAR_9->in_channel_layouts);
                if (VAR_7 < 0)
                    return VAR_7;
            }
        }

        if (VAR_3->nb_outputs >= 1) {
            uint64_t VAR_12 = FUNC_1(VAR_3->nb_outputs);

            VAR_5 = ((void*)0);
            VAR_7 = FUNC_2(&VAR_5, VAR_12);
            if (VAR_7 < 0)
                return VAR_7;
            VAR_7 = FUNC_5(VAR_5, &VAR_9->in_channel_layouts);
            if (VAR_7 < 0)
                return VAR_7;
        }
    }

    return 0;
}
