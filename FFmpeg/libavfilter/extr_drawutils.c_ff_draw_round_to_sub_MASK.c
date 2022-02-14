
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int vsub_max; unsigned int hsub_max; } ;
typedef TYPE_1__ FFDrawContext ;



int FUNC_0(FFDrawContext *VAR_0, int VAR_1, int VAR_2,
                         int VAR_3)
{
    unsigned VAR_4 = VAR_1 ? VAR_0->vsub_max : VAR_0->hsub_max;

    if (!VAR_4)
        return VAR_3;
    if (VAR_2 >= 0)
        VAR_3 += VAR_2 ? (1 << VAR_4) - 1 : 1 << (VAR_4 - 1);
    return (VAR_3 >> VAR_4) << VAR_4;
}
