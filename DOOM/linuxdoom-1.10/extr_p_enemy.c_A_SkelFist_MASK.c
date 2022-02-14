
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int target; } ;
typedef TYPE_1__ mobj_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_0 ;

void FUNC_5 (mobj_t* VAR_1)
{
    int VAR_2;

    if (!VAR_1->target)
 return;

    FUNC_0 (VAR_1);

    if (FUNC_1 (VAR_1))
    {
 VAR_2 = ((FUNC_3()%10)+1)*6;
 FUNC_4 (VAR_1, VAR_0);
 FUNC_2 (VAR_1->target, VAR_1, VAR_1, VAR_2);
    }
}
