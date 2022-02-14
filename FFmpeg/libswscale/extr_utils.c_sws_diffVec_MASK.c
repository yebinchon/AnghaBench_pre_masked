
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; scalar_t__* coeff; } ;
typedef TYPE_1__ SwsVector ;


 int FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (double,int) ;

__attribute__((used)) static SwsVector *FUNC_2(SwsVector *VAR_0, SwsVector *VAR_1)
{
    int VAR_2 = FUNC_0(VAR_0->length, VAR_1->length);
    int VAR_3;
    SwsVector *VAR_4 = FUNC_1(0.0, VAR_2);

    if (!VAR_4)
        return ((void*)0);

    for (VAR_3 = 0; VAR_3 < VAR_0->length; VAR_3++)
        VAR_4->coeff[VAR_3 + (VAR_2 - 1) / 2 - (VAR_0->length - 1) / 2] += VAR_0->coeff[VAR_3];
    for (VAR_3 = 0; VAR_3 < VAR_1->length; VAR_3++)
        VAR_4->coeff[VAR_3 + (VAR_2 - 1) / 2 - (VAR_1->length - 1) / 2] -= VAR_1->coeff[VAR_3];

    return VAR_4;
}
