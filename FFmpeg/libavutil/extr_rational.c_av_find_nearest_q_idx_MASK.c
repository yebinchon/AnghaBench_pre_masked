
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ den; } ;
typedef TYPE_1__ AVRational ;


 scalar_t__ FUNC_0 (TYPE_1__,TYPE_1__ const,TYPE_1__ const) ;

int FUNC_1(AVRational VAR_0, const AVRational* VAR_1)
{
    int VAR_2, VAR_3 = 0;
    for (VAR_2 = 0; VAR_1[VAR_2].den; VAR_2++)
        if (FUNC_0(VAR_0, VAR_1[VAR_2], VAR_1[VAR_3]) > 0)
            VAR_3 = VAR_2;

    return VAR_3;
}
