
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* dst; } ;
struct TYPE_16__ {int nb_samples; } ;
struct TYPE_15__ {TYPE_3__** outputs; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterLink *VAR_3 = VAR_1->dst->outputs[0];
    AVFrame *VAR_4 = FUNC_5(VAR_3, VAR_2->nb_samples);
    int VAR_5;

    if (!VAR_4) {
        VAR_5 = FUNC_0(VAR_0);
        goto fail;
    }

    VAR_5 = FUNC_2(VAR_4, VAR_2);
    if (VAR_5 < 0)
        goto fail;
    VAR_5 = FUNC_1(VAR_4, VAR_2);
    if (VAR_5 < 0)
        goto fail;
    FUNC_3(&VAR_2);
    return FUNC_4(VAR_3, VAR_4);
fail:
    FUNC_3(&VAR_2);
    FUNC_3(&VAR_4);
    return VAR_5;
}
