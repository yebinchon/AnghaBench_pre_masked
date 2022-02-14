
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chrV; int chrH; int lumV; int lumH; } ;
typedef TYPE_1__ SwsFilter ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(SwsFilter *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_1(VAR_0->lumH);
    FUNC_1(VAR_0->lumV);
    FUNC_1(VAR_0->chrH);
    FUNC_1(VAR_0->chrV);
    FUNC_0(VAR_0);
}
