
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int angle; int target; } ;
typedef TYPE_1__ mobj_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2 (mobj_t* VAR_0)
{
    if (!VAR_0->target)
 return;

    FUNC_0 (VAR_0);
    FUNC_1 (VAR_0, VAR_0->angle);
}
