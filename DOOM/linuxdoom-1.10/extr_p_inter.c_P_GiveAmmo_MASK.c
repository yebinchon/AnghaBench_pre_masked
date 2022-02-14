
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* ammo; int* maxammo; size_t readyweapon; size_t pendingweapon; int * weaponowned; } ;
typedef TYPE_1__ player_t ;
typedef int boolean ;
typedef size_t ammotype_t ;


 int FUNC_0 (char*,size_t) ;
 size_t VAR_0 ;



 size_t VAR_1 ;

 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;

boolean
FUNC_1
( player_t* VAR_12,
  ammotype_t VAR_13,
  int VAR_14 )
{
    int VAR_15;

    if (VAR_13 == VAR_1)
 return 0;

    if (VAR_13 < 0 || VAR_13 > VAR_0)
 FUNC_0 ("P_GiveAmmo: bad type %i", VAR_13);

    if ( VAR_12->ammo[VAR_13] == VAR_12->maxammo[VAR_13] )
 return 0;

    if (VAR_14)
 VAR_14 *= VAR_2[VAR_13];
    else
 VAR_14 = VAR_2[VAR_13]/2;

    if (VAR_3 == VAR_4
 || VAR_3 == VAR_5)
    {


 VAR_14 <<= 1;
    }


    VAR_15 = VAR_12->ammo[VAR_13];
    VAR_12->ammo[VAR_13] += VAR_14;

    if (VAR_12->ammo[VAR_13] > VAR_12->maxammo[VAR_13])
 VAR_12->ammo[VAR_13] = VAR_12->maxammo[VAR_13];




    if (VAR_15)
 return 1;




    switch (VAR_13)
    {
      case 130:
 if (VAR_12->readyweapon == VAR_7)
 {
     if (VAR_12->weaponowned[VAR_6])
  VAR_12->pendingweapon = VAR_6;
     else
  VAR_12->pendingweapon = VAR_9;
 }
 break;

      case 128:
 if (VAR_12->readyweapon == VAR_7
     || VAR_12->readyweapon == VAR_9)
 {
     if (VAR_12->weaponowned[VAR_11])
  VAR_12->pendingweapon = VAR_11;
 }
 break;

      case 131:
 if (VAR_12->readyweapon == VAR_7
     || VAR_12->readyweapon == VAR_9)
 {
     if (VAR_12->weaponowned[VAR_10])
  VAR_12->pendingweapon = VAR_10;
 }
 break;

      case 129:
 if (VAR_12->readyweapon == VAR_7)
 {
     if (VAR_12->weaponowned[VAR_8])
  VAR_12->pendingweapon = VAR_8;
 }
      default:
 break;
    }

    return 1;
}
