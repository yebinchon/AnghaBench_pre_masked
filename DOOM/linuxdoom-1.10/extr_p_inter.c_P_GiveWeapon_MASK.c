
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t weapontype_t ;
struct TYPE_6__ {int* weaponowned; size_t pendingweapon; int bonuscount; } ;
typedef TYPE_1__ player_t ;
typedef int boolean ;
struct TYPE_7__ {scalar_t__ ammo; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;

boolean
FUNC_2
( player_t* VAR_8,
  weapontype_t VAR_9,
  boolean VAR_10 )
{
    boolean VAR_11;
    boolean VAR_12;

    if (VAR_4
 && (VAR_3!=2)
  && !VAR_10 )
    {

 if (VAR_8->weaponowned[VAR_9])
     return 0;

 VAR_8->bonuscount += VAR_0;
 VAR_8->weaponowned[VAR_9] = 1;

 if (VAR_3)
     FUNC_0 (VAR_8, VAR_7[VAR_9].ammo, 5);
 else
     FUNC_0 (VAR_8, VAR_7[VAR_9].ammo, 2);
 VAR_8->pendingweapon = VAR_9;

 if (VAR_8 == &VAR_5[VAR_2])
     FUNC_1 (((void*)0), VAR_6);
 return 0;
    }

    if (VAR_7[VAR_9].ammo != VAR_1)
    {


 if (VAR_10)
     VAR_11 = FUNC_0 (VAR_8, VAR_7[VAR_9].ammo, 1);
 else
     VAR_11 = FUNC_0 (VAR_8, VAR_7[VAR_9].ammo, 2);
    }
    else
 VAR_11 = 0;

    if (VAR_8->weaponowned[VAR_9])
 VAR_12 = 0;
    else
    {
 VAR_12 = 1;
 VAR_8->weaponowned[VAR_9] = 1;
 VAR_8->pendingweapon = VAR_9;
    }

    return (VAR_12 || VAR_11);
}
