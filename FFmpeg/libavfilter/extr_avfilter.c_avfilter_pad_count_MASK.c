
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ AVFilterPad ;



int FUNC_0(const AVFilterPad *VAR_0)
{
    int VAR_1;

    if (!VAR_0)
        return 0;

    for (VAR_1 = 0; VAR_0->name; VAR_1++)
        VAR_0++;
    return VAR_1;
}
