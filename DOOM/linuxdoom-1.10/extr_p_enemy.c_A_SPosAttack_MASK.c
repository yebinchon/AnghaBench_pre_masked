
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
    int VAR_6;
    int VAR_7;

    if (!VAR_2->target)
 return;

    FUNC_4 (VAR_2, VAR_1);
    FUNC_0 (VAR_2);
    VAR_5 = VAR_2->angle;
    VAR_7 = FUNC_1 (VAR_2, VAR_5, VAR_0);

    for (VAR_3=0 ; VAR_3<3 ; VAR_3++)
    {
 VAR_4 = VAR_5 + ((FUNC_3()-FUNC_3())<<20);
 VAR_6 = ((FUNC_3()%5)+1)*3;
 FUNC_2 (VAR_2, VAR_4, VAR_0, VAR_7, VAR_6);
    }
}
