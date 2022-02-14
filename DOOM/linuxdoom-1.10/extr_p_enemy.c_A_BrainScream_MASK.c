
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
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;

void FUNC_4 (mobj_t* VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7;
    mobj_t* VAR_8;

    for (VAR_5=VAR_4->x - 196*VAR_0 ; VAR_5< VAR_4->x + 320*VAR_0 ; VAR_5+= VAR_0*8)
    {
 VAR_6 = VAR_4->y - 320*VAR_0;
 VAR_7 = 128 + FUNC_0()*2*VAR_0;
 VAR_8 = FUNC_2 (VAR_5,VAR_6,VAR_7, VAR_1);
 VAR_8->momz = FUNC_0()*512;

 FUNC_1 (VAR_8, VAR_2);

 VAR_8->tics -= FUNC_0()&7;
 if (VAR_8->tics < 1)
     VAR_8->tics = 1;
    }

    FUNC_3 (((void*)0),VAR_3);
}
