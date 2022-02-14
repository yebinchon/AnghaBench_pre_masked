
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int length; struct TYPE_9__* coeff; } ;
typedef TYPE_1__ SwsVector ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__*) ;

void FUNC_3(SwsVector *VAR_0, SwsVector *VAR_1)
{
    SwsVector *VAR_2 = FUNC_2(VAR_0, VAR_1);
    if (!VAR_2) {
        FUNC_1(VAR_0);
        return;
    }
    FUNC_0(VAR_0->coeff);
    VAR_0->coeff = VAR_2->coeff;
    VAR_0->length = VAR_2->length;
    FUNC_0(VAR_2);
}
