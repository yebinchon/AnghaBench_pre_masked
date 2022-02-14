
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tics; int momz; } ;
typedef TYPE_1__ mobj_t ;
typedef int fixed_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int,int,int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_3
( fixed_t VAR_5,
  fixed_t VAR_6,
  fixed_t VAR_7 )
{
    mobj_t* VAR_8;

    VAR_7 += ((FUNC_0()-FUNC_0())<<10);

    VAR_8 = FUNC_2 (VAR_5,VAR_6,VAR_7, VAR_2);
    VAR_8->momz = VAR_0;
    VAR_8->tics -= FUNC_0()&3;

    if (VAR_8->tics < 1)
 VAR_8->tics = 1;


    if (VAR_4 == VAR_1)
 FUNC_1 (VAR_8, VAR_3);
}
