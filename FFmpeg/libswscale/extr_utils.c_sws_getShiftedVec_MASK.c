
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; int * coeff; } ;
typedef TYPE_1__ SwsVector ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (double,int) ;

__attribute__((used)) static SwsVector *FUNC_2(SwsVector *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0->length + FUNC_0(VAR_1) * 2;
    int VAR_3;
    SwsVector *VAR_4 = FUNC_1(0.0, VAR_2);

    if (!VAR_4)
        return ((void*)0);

    for (VAR_3 = 0; VAR_3 < VAR_0->length; VAR_3++) {
        VAR_4->coeff[VAR_3 + (VAR_2 - 1) / 2 -
                       (VAR_0->length - 1) / 2 - VAR_1] = VAR_0->coeff[VAR_3];
    }

    return VAR_4;
}
