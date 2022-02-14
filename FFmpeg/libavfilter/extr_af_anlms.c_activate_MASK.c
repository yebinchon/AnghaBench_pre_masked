
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_24__ {int pts; int nb_samples; } ;
struct TYPE_23__ {scalar_t__ channels; } ;
struct TYPE_22__ {int nb_inputs; int * inputs; TYPE_7__** outputs; TYPE_1__* internal; TYPE_2__* priv; } ;
struct TYPE_21__ {int pts; } ;
struct TYPE_20__ {TYPE_9__** frame; } ;
struct TYPE_19__ {int (* execute ) (TYPE_4__*,int ,TYPE_3__*,int *,int) ;} ;
typedef TYPE_2__ AudioNLMSContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_9__**) ;
 int FUNC_4 (TYPE_7__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 TYPE_3__* FUNC_6 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_7 (int ,int*,int *) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,int,TYPE_9__**) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_7__*,int,int ) ;
 int VAR_1 ;
 int FUNC_14 (TYPE_4__*,int ,TYPE_3__*,int *,int) ;

__attribute__((used)) static int FUNC_15(AVFilterContext *VAR_2)
{
    AudioNLMSContext *VAR_3 = VAR_2->priv;
    int VAR_4, VAR_5, VAR_6;
    int VAR_7;
    int64_t VAR_8;

    FUNC_2(VAR_2->outputs[0], VAR_2);

    VAR_7 = FUNC_1(FUNC_10(VAR_2->inputs[0]),
                       FUNC_10(VAR_2->inputs[1]));
    for (VAR_4 = 0; VAR_4 < VAR_2->nb_inputs && VAR_7 > 0; VAR_4++) {
        if (VAR_3->frame[VAR_4])
            continue;

        if (FUNC_8(VAR_2->inputs[VAR_4], VAR_7) > 0) {
            VAR_5 = FUNC_9(VAR_2->inputs[VAR_4], VAR_7, VAR_7, &VAR_3->frame[VAR_4]);
            if (VAR_5 < 0)
                return VAR_5;
        }
    }

    if (VAR_3->frame[0] && VAR_3->frame[1]) {
        AVFrame *VAR_9;

        VAR_9 = FUNC_6(VAR_2->outputs[0], VAR_3->frame[0]->nb_samples);
        if (!VAR_9) {
            FUNC_3(&VAR_3->frame[0]);
            FUNC_3(&VAR_3->frame[1]);
            return FUNC_0(VAR_0);
        }

        VAR_2->internal->execute(VAR_2, VAR_1, VAR_9, ((void*)0), FUNC_1(VAR_2->outputs[0]->channels,
                                                                       FUNC_5(VAR_2)));

        VAR_9->pts = VAR_3->frame[0]->pts;

        FUNC_3(&VAR_3->frame[0]);
        FUNC_3(&VAR_3->frame[1]);

        VAR_5 = FUNC_4(VAR_2->outputs[0], VAR_9);
        if (VAR_5 < 0)
            return VAR_5;
    }

    if (!VAR_7) {
        for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
            if (FUNC_7(VAR_2->inputs[VAR_4], &VAR_6, &VAR_8)) {
                FUNC_13(VAR_2->outputs[0], VAR_6, VAR_8);
                return 0;
            }
        }
    }

    if (FUNC_12(VAR_2->outputs[0])) {
        for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
            if (FUNC_10(VAR_2->inputs[VAR_4]) > 0)
                continue;
            FUNC_11(VAR_2->inputs[VAR_4]);
            return 0;
        }
    }
    return 0;
}
