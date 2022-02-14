
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_17__ {TYPE_4__* dst; } ;
struct TYPE_16__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_15__ {double level_out; double level_in; double amount; int lfoR; int lfoL; } ;
typedef TYPE_1__ AudioPulsatorContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int *,int) ;
 double FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    AudioPulsatorContext *VAR_5 = VAR_3->priv;
    const double *VAR_6 = (const double *)VAR_2->data[0];
    const int VAR_7 = VAR_2->nb_samples;
    const double VAR_8 = VAR_5->level_out;
    const double VAR_9 = VAR_5->level_in;
    const double VAR_10 = VAR_5->amount;
    AVFrame *VAR_11;
    double *VAR_12;
    int VAR_13;

    if (FUNC_3(VAR_2)) {
        VAR_11 = VAR_2;
    } else {
        VAR_11 = FUNC_5(VAR_1, VAR_2->nb_samples);
        if (!VAR_11) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_11, VAR_2);
    }
    VAR_12 = (double *)VAR_11->data[0];

    for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
        double VAR_14;
        double VAR_15;
        double VAR_16 = VAR_6[0] * VAR_9;
        double VAR_17 = VAR_6[1] * VAR_9;
        double VAR_18 = VAR_16;
        double VAR_19 = VAR_17;

        VAR_18 *= FUNC_7(&VAR_5->lfoL) * 0.5 + VAR_10 / 2;
        VAR_19 *= FUNC_7(&VAR_5->lfoR) * 0.5 + VAR_10 / 2;

        VAR_14 = VAR_18 + VAR_16 * (1 - VAR_10);
        VAR_15 = VAR_19 + VAR_17 * (1 - VAR_10);

        VAR_14 *= VAR_8;
        VAR_15 *= VAR_8;

        VAR_12[0] = VAR_14;
        VAR_12[1] = VAR_15;

        FUNC_6(&VAR_5->lfoL, 1);
        FUNC_6(&VAR_5->lfoR, 1);

        VAR_12 += 2;
        VAR_6 += 2;
    }

    if (VAR_2 != VAR_11)
        FUNC_2(&VAR_2);

    return FUNC_4(VAR_4, VAR_11);
}
