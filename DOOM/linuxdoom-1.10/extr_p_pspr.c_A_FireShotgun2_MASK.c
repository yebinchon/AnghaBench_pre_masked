
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pspdef_t ;
struct TYPE_9__ {int* ammo; size_t readyweapon; TYPE_3__* mo; } ;
typedef TYPE_1__ player_t ;
typedef int angle_t ;
struct TYPE_11__ {int angle; } ;
struct TYPE_10__ {size_t ammo; int flashstate; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int,int ,scalar_t__,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;

void
FUNC_6
( player_t* VAR_6,
  pspdef_t* VAR_7 )
{
    int VAR_8;
    angle_t VAR_9;
    int VAR_10;


    FUNC_5 (VAR_6->mo, VAR_4);
    FUNC_3 (VAR_6->mo, VAR_1);

    VAR_6->ammo[VAR_5[VAR_6->readyweapon].ammo]-=2;

    FUNC_4 (VAR_6,
    VAR_3,
    VAR_5[VAR_6->readyweapon].flashstate);

    FUNC_0 (VAR_6->mo);

    for (VAR_8=0 ; VAR_8<20 ; VAR_8++)
    {
 VAR_10 = 5*(FUNC_2 ()%3+1);
 VAR_9 = VAR_6->mo->angle;
 VAR_9 += (FUNC_2()-FUNC_2())<<19;
 FUNC_1 (VAR_6->mo,
        VAR_9,
        VAR_0,
        VAR_2 + ((FUNC_2()-FUNC_2())<<5), VAR_10);
    }
}
