
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_13__ {TYPE_1__* src; } ;
struct TYPE_12__ {scalar_t__ pts; double sample_rate; scalar_t__* extended_data; } ;
struct TYPE_11__ {scalar_t__ n; double sample_rate; scalar_t__ duration; int nb_samples; scalar_t__ pts; scalar_t__* var_values; int nb_channels; int * expr; } ;
struct TYPE_10__ {TYPE_2__* priv; } ;
typedef TYPE_2__ EvalContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,scalar_t__) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 double FUNC_2 (int ,double*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,double,double) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_5)
{
    EvalContext *VAR_6 = VAR_5->src->priv;
    AVFrame *VAR_7;
    int VAR_8, VAR_9;
    int64_t VAR_10 = FUNC_3(VAR_6->n, VAR_1, VAR_6->sample_rate);
    int VAR_11;

    if (VAR_6->duration >= 0 && VAR_10 >= VAR_6->duration)
        return VAR_0;

    if (VAR_6->duration >= 0) {
        VAR_11 = FUNC_1(VAR_6->nb_samples, FUNC_3(VAR_6->duration, VAR_6->sample_rate, VAR_1) - VAR_6->pts);
        if (!VAR_11)
            return VAR_0;
    } else {
        VAR_11 = VAR_6->nb_samples;
    }
    VAR_7 = FUNC_5(VAR_5, VAR_11);
    if (!VAR_7)
        return FUNC_0(VAR_2);


    for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++, VAR_6->n++) {
        VAR_6->var_values[VAR_3] = VAR_6->n;
        VAR_6->var_values[VAR_4] = VAR_6->var_values[VAR_3] * (double)1/VAR_6->sample_rate;

        for (VAR_9 = 0; VAR_9 < VAR_6->nb_channels; VAR_9++) {
            *((double *) VAR_7->extended_data[VAR_9] + VAR_8) =
                FUNC_2(VAR_6->expr[VAR_9], VAR_6->var_values, ((void*)0));
        }
    }

    VAR_7->pts = VAR_6->pts;
    VAR_7->sample_rate = VAR_6->sample_rate;
    VAR_6->pts += VAR_11;

    return FUNC_4(VAR_5, VAR_7);
}
