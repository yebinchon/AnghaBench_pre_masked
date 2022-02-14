
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int target; } ;
typedef TYPE_1__ mobj_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 () ;

void FUNC_4 (mobj_t* VAR_0)
{
    int VAR_1;

    if (!VAR_0->target)
 return;

    FUNC_0 (VAR_0);
    if (FUNC_1 (VAR_0))
    {
 VAR_1 = ((FUNC_3()%10)+1)*4;
 FUNC_2 (VAR_0->target, VAR_0, VAR_0, VAR_1);
    }
}
