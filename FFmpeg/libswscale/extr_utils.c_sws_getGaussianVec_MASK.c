
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* coeff; } ;
typedef TYPE_1__ SwsVector ;


 int VAR_0 ;
 int FUNC_0 (double) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int const) ;
 int FUNC_3 (TYPE_1__*,double) ;

SwsVector *FUNC_4(double VAR_1, double VAR_2)
{
    const int VAR_3 = (int)(VAR_1 * VAR_2 + 0.5) | 1;
    int VAR_4;
    double VAR_5 = (VAR_3 - 1) * 0.5;
    SwsVector *VAR_6;

    if(VAR_1 < 0 || VAR_2 < 0)
        return ((void*)0);

    VAR_6 = FUNC_2(VAR_3);

    if (!VAR_6)
        return ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        double VAR_7 = VAR_4 - VAR_5;
        VAR_6->coeff[VAR_4] = FUNC_0(-VAR_7 * VAR_7 / (2 * VAR_1 * VAR_1)) /
                        FUNC_1(2 * VAR_1 * VAR_0);
    }

    FUNC_3(VAR_6, 1.0);

    return VAR_6;
}
