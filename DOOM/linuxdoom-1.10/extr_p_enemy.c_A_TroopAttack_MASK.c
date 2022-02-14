
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int target; } ;
typedef TYPE_1__ mobj_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_1 ;

void FUNC_6 (mobj_t* VAR_2)
{
    int VAR_3;

    if (!VAR_2->target)
 return;

    FUNC_0 (VAR_2);
    if (FUNC_1 (VAR_2))
    {
 FUNC_5 (VAR_2, VAR_1);
 VAR_3 = (FUNC_3()%8+1)*3;
 FUNC_2 (VAR_2->target, VAR_2, VAR_2, VAR_3);
 return;
    }



    FUNC_4 (VAR_2, VAR_2->target, VAR_0);
}
