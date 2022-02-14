
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int target; } ;
typedef TYPE_1__ mobj_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_1 ;

void FUNC_5 (mobj_t* VAR_2)
{
    int VAR_3;

    if (!VAR_2->target)
 return;

    if (FUNC_0 (VAR_2))
    {
 FUNC_4 (VAR_2, VAR_1);
 VAR_3 = (FUNC_2()%8+1)*10;
 FUNC_1 (VAR_2->target, VAR_2, VAR_2, VAR_3);
 return;
    }


    FUNC_3 (VAR_2, VAR_2->target, VAR_0);
}
