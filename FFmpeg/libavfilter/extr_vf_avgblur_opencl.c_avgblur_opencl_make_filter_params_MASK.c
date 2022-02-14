
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {TYPE_3__* dst; } ;
struct TYPE_5__ {scalar_t__ radiusV; scalar_t__ radiusH; int* power; } ;
typedef TYPE_1__ AverageBlurOpenCLContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;



__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    AverageBlurOpenCLContext *VAR_2 = VAR_1->priv;
    int VAR_3;

    if (VAR_2->radiusV <= 0) {
        VAR_2->radiusV = VAR_2->radiusH;
    }

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        VAR_2->power[VAR_3] = 1;
    }
    return 0;
}
