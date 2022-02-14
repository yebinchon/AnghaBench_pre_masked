
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int movecount; } ;
typedef TYPE_1__ mobj_t ;
typedef int boolean ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;

boolean FUNC_2 (mobj_t* VAR_0)
{
    if (!FUNC_0 (VAR_0))
    {
 return 0;
    }

    VAR_0->movecount = FUNC_1()&15;
    return 1;
}
