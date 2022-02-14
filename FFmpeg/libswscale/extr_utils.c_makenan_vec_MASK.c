
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int * coeff; } ;
typedef TYPE_1__ SwsVector ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(SwsVector *VAR_1)
{
    int VAR_2;
    for (VAR_2=0; VAR_2<VAR_1->length; VAR_2++)
        VAR_1->coeff[VAR_2] = VAR_0;
}
