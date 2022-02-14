
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tics; int x; int momx; int y; int momy; int z; int momz; } ;
typedef TYPE_1__ mobj_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int,int) ;

void FUNC_3 (mobj_t* VAR_0)
{
    VAR_0->tics -= FUNC_1()&3;
    if (VAR_0->tics < 1)
 VAR_0->tics = 1;



    VAR_0->x += (VAR_0->momx>>1);
    VAR_0->y += (VAR_0->momy>>1);
    VAR_0->z += (VAR_0->momz>>1);

    if (!FUNC_2 (VAR_0, VAR_0->x, VAR_0->y))
 FUNC_0 (VAR_0);
}
