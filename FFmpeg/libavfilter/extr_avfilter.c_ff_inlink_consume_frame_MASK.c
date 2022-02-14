
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ samples_skipped; } ;
struct TYPE_15__ {TYPE_9__ fifo; } ;
struct TYPE_14__ {int nb_samples; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_9__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,TYPE_1__**) ;

int FUNC_5(AVFilterLink *VAR_0, AVFrame **VAR_1)
{
    AVFrame *VAR_2;

    *VAR_1 = ((void*)0);
    if (!FUNC_3(VAR_0))
        return 0;

    if (VAR_0->fifo.samples_skipped) {
        VAR_2 = FUNC_1(&VAR_0->fifo, 0);
        return FUNC_4(VAR_0, VAR_2->nb_samples, VAR_2->nb_samples, VAR_1);
    }

    VAR_2 = FUNC_2(&VAR_0->fifo);
    FUNC_0(VAR_0, VAR_2);
    *VAR_1 = VAR_2;
    return 1;
}
