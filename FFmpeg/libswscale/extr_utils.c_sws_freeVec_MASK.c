
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int coeff; } ;
typedef TYPE_1__ SwsVector ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(SwsVector *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_1(&VAR_0->coeff);
    VAR_0->length = 0;
    FUNC_0(VAR_0);
}
