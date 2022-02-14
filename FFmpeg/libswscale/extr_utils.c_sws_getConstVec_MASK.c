
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double* coeff; } ;
typedef TYPE_1__ SwsVector ;


 TYPE_1__* FUNC_0 (int) ;

SwsVector *FUNC_1(double VAR_0, int VAR_1)
{
    int VAR_2;
    SwsVector *VAR_3 = FUNC_0(VAR_1);

    if (!VAR_3)
        return ((void*)0);

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
        VAR_3->coeff[VAR_2] = VAR_0;

    return VAR_3;
}
