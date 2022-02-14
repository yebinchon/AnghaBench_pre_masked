
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int angle; int target; } ;
typedef TYPE_1__ mobj_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_1 ;

void FUNC_5 (mobj_t* VAR_2)
{
    int VAR_3;
    int VAR_4;
    int VAR_5;

    if (!VAR_2->target)
 return;

    FUNC_0 (VAR_2);
    VAR_3 = VAR_2->angle;
    VAR_5 = FUNC_1 (VAR_2, VAR_3, VAR_0);

    FUNC_4 (VAR_2, VAR_1);
    VAR_3 += (FUNC_3()-FUNC_3())<<20;
    VAR_4 = ((FUNC_3()%5)+1)*3;
    FUNC_2 (VAR_2, VAR_3, VAR_0, VAR_5, VAR_4);
}
