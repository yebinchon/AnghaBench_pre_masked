
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; int* coeff; } ;
typedef TYPE_1__ SwsVector ;


 TYPE_1__* FUNC_0 (double,int) ;

__attribute__((used)) static SwsVector *FUNC_1(SwsVector *VAR_0, SwsVector *VAR_1)
{
    int VAR_2 = VAR_0->length + VAR_1->length - 1;
    int VAR_3, VAR_4;
    SwsVector *VAR_5 = FUNC_0(0.0, VAR_2);

    if (!VAR_5)
        return ((void*)0);

    for (VAR_3 = 0; VAR_3 < VAR_0->length; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < VAR_1->length; VAR_4++) {
            VAR_5->coeff[VAR_3 + VAR_4] += VAR_0->coeff[VAR_3] * VAR_1->coeff[VAR_4];
        }
    }

    return VAR_5;
}
