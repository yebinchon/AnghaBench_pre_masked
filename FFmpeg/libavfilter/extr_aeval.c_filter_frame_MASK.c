
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int sample_rate; int channels; int time_base; TYPE_1__* dst; } ;
struct TYPE_17__ {int nb_samples; scalar_t__* extended_data; int pts; } ;
struct TYPE_16__ {double n; double* var_values; double* channel_values; int * expr; } ;
struct TYPE_15__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ EvalContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 double FUNC_1 (int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 double FUNC_2 (int ,int*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__**) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    EvalContext *VAR_6 = VAR_4->dst->priv;
    AVFilterLink *VAR_7 = VAR_4->dst->outputs[0];
    int VAR_8 = VAR_5->nb_samples;
    AVFrame *VAR_9;
    double VAR_10;
    int VAR_11, VAR_12;

    VAR_9 = FUNC_6(VAR_7, VAR_8);
    if (!VAR_9) {
        FUNC_4(&VAR_5);
        return FUNC_0(VAR_0);
    }
    FUNC_3(VAR_9, VAR_5);

    VAR_10 = FUNC_1(VAR_5->pts, VAR_4->time_base);


    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++, VAR_6->n++) {
        VAR_6->var_values[VAR_2] = VAR_6->n;
        VAR_6->var_values[VAR_3] = VAR_10 + VAR_11 * (double)1/VAR_4->sample_rate;

        for (VAR_12 = 0; VAR_12 < VAR_4->channels; VAR_12++)
            VAR_6->channel_values[VAR_12] = *((double *) VAR_5->extended_data[VAR_12] + VAR_11);

        for (VAR_12 = 0; VAR_12 < VAR_7->channels; VAR_12++) {
            VAR_6->var_values[VAR_1] = VAR_12;
            *((double *) VAR_9->extended_data[VAR_12] + VAR_11) =
                FUNC_2(VAR_6->expr[VAR_12], VAR_6->var_values, VAR_6);
        }
    }

    FUNC_4(&VAR_5);
    return FUNC_5(VAR_7, VAR_9);
}
