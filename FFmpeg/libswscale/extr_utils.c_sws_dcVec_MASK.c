
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__* coeff; } ;
typedef TYPE_1__ SwsVector ;



__attribute__((used)) static double FUNC_0(SwsVector *VAR_0)
{
    int VAR_1;
    double VAR_2 = 0;

    for (VAR_1 = 0; VAR_1 < VAR_0->length; VAR_1++)
        VAR_2 += VAR_0->coeff[VAR_1];

    return VAR_2;
}
