
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ available; int q; } ;
struct TYPE_6__ {int * inputs; int is_disabled; TYPE_3__* priv; } ;
struct TYPE_5__ {TYPE_2__* src; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;
typedef TYPE_3__ ATADenoiseContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    ATADenoiseContext *VAR_4 = VAR_3->priv;
    int VAR_5 = 0;

    VAR_5 = FUNC_3(VAR_3->inputs[0]);

    if (VAR_5 == VAR_0 && !VAR_3->is_disabled && VAR_4->available) {
        AVFrame *VAR_6 = FUNC_1(FUNC_2(&VAR_4->q, VAR_4->available));
        if (!VAR_6)
            return FUNC_0(VAR_1);

        VAR_5 = FUNC_4(VAR_3->inputs[0], VAR_6);
        VAR_4->available--;
    }

    return VAR_5;
}
