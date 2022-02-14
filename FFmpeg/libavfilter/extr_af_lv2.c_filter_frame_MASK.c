
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_18__ {TYPE_4__* dst; } ;
struct TYPE_17__ {int nb_samples; } ;
struct TYPE_16__ {scalar_t__ nb_outputs; scalar_t__ nb_inputs; int instance; } ;
typedef TYPE_1__ LV2Context ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    LV2Context *VAR_4 = VAR_3->priv;
    AVFrame *VAR_5;

    if (!VAR_4->nb_outputs ||
        (FUNC_3(VAR_2) && VAR_4->nb_inputs == VAR_4->nb_outputs)) {
        VAR_5 = VAR_2;
    } else {
        VAR_5 = FUNC_6(VAR_3->outputs[0], VAR_2->nb_samples);
        if (!VAR_5) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_5, VAR_2);
    }

    FUNC_4(VAR_4, VAR_2, VAR_5);

    FUNC_7(VAR_4->instance, VAR_2->nb_samples);

    if (VAR_5 != VAR_2)
        FUNC_2(&VAR_2);

    return FUNC_5(VAR_3->outputs[0], VAR_5);
}
