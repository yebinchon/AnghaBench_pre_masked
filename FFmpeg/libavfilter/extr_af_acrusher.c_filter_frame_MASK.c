
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {double level_in; double level_out; double mix; double sdiff; int lfo; scalar_t__ is_lfo; int * sr; scalar_t__ samples; int round; scalar_t__ smin; } ;
struct TYPE_19__ {TYPE_2__** outputs; TYPE_4__* priv; } ;
struct TYPE_18__ {int channels; TYPE_3__* dst; } ;
struct TYPE_17__ {int nb_samples; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
typedef TYPE_4__ ACrusherContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 double const FUNC_4 (TYPE_4__*,double) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *,int) ;
 double FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 double const FUNC_10 (TYPE_4__*,int *,double) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    ACrusherContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6;
    const double *VAR_7 = (const double *)VAR_2->data[0];
    double *VAR_8;
    const double VAR_9 = VAR_4->level_in;
    const double VAR_10 = VAR_4->level_out;
    const double VAR_11 = VAR_4->mix;
    int VAR_12, VAR_13;

    if (FUNC_3(VAR_2)) {
        VAR_6 = VAR_2;
    } else {
        VAR_6 = FUNC_6(VAR_1, VAR_2->nb_samples);
        if (!VAR_6) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_6, VAR_2);
    }

    VAR_8 = (double *)VAR_6->data[0];
    for (VAR_12 = 0; VAR_12 < VAR_2->nb_samples; VAR_12++) {
        if (VAR_4->is_lfo) {
            VAR_4->samples = VAR_4->smin + VAR_4->sdiff * (FUNC_8(&VAR_4->lfo) + 0.5);
            VAR_4->round = FUNC_9(VAR_4->samples);
        }

        for (VAR_13 = 0; VAR_13 < VAR_1->channels; VAR_13++) {
            double VAR_14 = VAR_7[VAR_13] * VAR_9;

            VAR_14 = VAR_11 * FUNC_10(VAR_4, &VAR_4->sr[VAR_13], VAR_14) + VAR_7[VAR_13] * (1. - VAR_11) * VAR_9;
            VAR_8[VAR_13] = FUNC_4(VAR_4, VAR_14) * VAR_10;
        }
        VAR_7 += VAR_13;
        VAR_8 += VAR_13;

        if (VAR_4->is_lfo)
            FUNC_7(&VAR_4->lfo, 1);
    }

    if (VAR_2 != VAR_6)
        FUNC_2(&VAR_2);

    return FUNC_5(VAR_5, VAR_6);
}
