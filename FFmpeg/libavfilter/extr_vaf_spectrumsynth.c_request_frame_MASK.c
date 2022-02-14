
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * inputs; TYPE_1__* priv; } ;
struct TYPE_6__ {TYPE_3__* src; } ;
struct TYPE_5__ {int phase; int magnitude; } ;
typedef TYPE_1__ SpectrumSynthContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    SpectrumSynthContext *VAR_2 = VAR_1->priv;
    int VAR_3;

    if (!VAR_2->magnitude) {
        VAR_3 = FUNC_0(VAR_1->inputs[0]);
        if (VAR_3 < 0)
            return VAR_3;
    }
    if (!VAR_2->phase) {
        VAR_3 = FUNC_0(VAR_1->inputs[1]);
        if (VAR_3 < 0)
            return VAR_3;
    }
    return 0;
}
