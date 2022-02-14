
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int * coeff; } ;
typedef TYPE_1__ SwsVector ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(SwsVector *VAR_0)
{
    int VAR_1;
    for (VAR_1=0; VAR_1<VAR_0->length; VAR_1++)
        if (FUNC_0(VAR_0->coeff[VAR_1]))
            return 1;
    return 0;
}
