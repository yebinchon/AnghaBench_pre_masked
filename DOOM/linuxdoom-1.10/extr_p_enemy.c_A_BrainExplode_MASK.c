
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; int momz; int tics; } ;
typedef TYPE_1__ mobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int,int,int,int ) ;
 int VAR_2 ;

void FUNC_3 (mobj_t* VAR_3)
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    mobj_t* VAR_7;

    VAR_4 = VAR_3->x + (FUNC_0 () - FUNC_0 ())*2048;
    VAR_5 = VAR_3->y;
    VAR_6 = 128 + FUNC_0()*2*VAR_0;
    VAR_7 = FUNC_2 (VAR_4,VAR_5,VAR_6, VAR_1);
    VAR_7->momz = FUNC_0()*512;

    FUNC_1 (VAR_7, VAR_2);

    VAR_7->tics -= FUNC_0()&7;
    if (VAR_7->tics < 1)
 VAR_7->tics = 1;
}
