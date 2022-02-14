
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int * outputs; TYPE_4__** inputs; TYPE_1__* priv; } ;
struct TYPE_19__ {int channels; } ;
struct TYPE_18__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_17__ {int volume; } ;
struct TYPE_16__ {TYPE_2__* channels; } ;
typedef TYPE_1__ CompandContext ;
typedef TYPE_2__ ChanParam ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (double const) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ,int const) ;
 double const FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_1, AVFrame *VAR_2)
{
    CompandContext *VAR_3 = VAR_1->priv;
    AVFilterLink *VAR_4 = VAR_1->inputs[0];
    const int VAR_5 = VAR_4->channels;
    const int VAR_6 = VAR_2->nb_samples;
    AVFrame *VAR_7;
    int VAR_8, VAR_9;
    int VAR_10;

    if (FUNC_3(VAR_2)) {
        VAR_7 = VAR_2;
    } else {
        VAR_7 = FUNC_6(VAR_1->outputs[0], VAR_6);
        if (!VAR_7) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        VAR_10 = FUNC_1(VAR_7, VAR_2);
        if (VAR_10 < 0) {
            FUNC_2(&VAR_7);
            FUNC_2(&VAR_2);
            return VAR_10;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        const double *VAR_11 = (double *)VAR_2->extended_data[VAR_8];
        double *VAR_12 = (double *)VAR_7->extended_data[VAR_8];
        ChanParam *VAR_13 = &VAR_3->channels[VAR_8];

        for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
            FUNC_8(VAR_13, FUNC_4(VAR_11[VAR_9]));

            VAR_12[VAR_9] = VAR_11[VAR_9] * FUNC_7(VAR_3, VAR_13->volume);
        }
    }

    if (VAR_2 != VAR_7)
        FUNC_2(&VAR_2);

    return FUNC_5(VAR_1->outputs[0], VAR_7);
}
