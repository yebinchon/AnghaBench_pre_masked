
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double const** coeff; } ;
typedef TYPE_1__ LLSModel ;



__attribute__((used)) static double FUNC_0(LLSModel *VAR_0, const double *VAR_1, int VAR_2)
{
    int VAR_3;
    double VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 <= VAR_2; VAR_3++)
        VAR_4 += VAR_1[VAR_3] * VAR_0->coeff[VAR_2][VAR_3];

    return VAR_4;
}
