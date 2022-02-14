
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t readyweapon; int* ammo; size_t pendingweapon; scalar_t__* weaponowned; } ;
typedef TYPE_1__ player_t ;
typedef int boolean ;
typedef size_t ammotype_t ;
struct TYPE_6__ {size_t ammo; int downstate; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__* VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;

boolean FUNC_1 (player_t* VAR_21)
{
    ammotype_t VAR_22;
    int VAR_23;

    VAR_22 = VAR_10[VAR_21->readyweapon].ammo;


    if (VAR_21->readyweapon == VAR_11)
 VAR_23 = VAR_0;
    else if (VAR_21->readyweapon == VAR_20)
 VAR_23 = 2;
    else
 VAR_23 = 1;



    if (VAR_22 == VAR_4 || VAR_21->ammo[VAR_22] >= VAR_23)
 return 1;



    do
    {
 if (VAR_21->weaponowned[VAR_18]
     && VAR_21->ammo[VAR_1]
     && (VAR_7 != VAR_9) )
 {
     VAR_21->pendingweapon = VAR_18;
 }
 else if (VAR_21->weaponowned[VAR_20]
   && VAR_21->ammo[VAR_5]>2
   && (VAR_7 == VAR_6) )
 {
     VAR_21->pendingweapon = VAR_20;
 }
 else if (VAR_21->weaponowned[VAR_12]
   && VAR_21->ammo[VAR_2])
 {
     VAR_21->pendingweapon = VAR_12;
 }
 else if (VAR_21->weaponowned[VAR_19]
   && VAR_21->ammo[VAR_5])
 {
     VAR_21->pendingweapon = VAR_19;
 }
 else if (VAR_21->ammo[VAR_2])
 {
     VAR_21->pendingweapon = VAR_17;
 }
 else if (VAR_21->weaponowned[VAR_13])
 {
     VAR_21->pendingweapon = VAR_13;
 }
 else if (VAR_21->weaponowned[VAR_15]
   && VAR_21->ammo[VAR_3])
 {
     VAR_21->pendingweapon = VAR_15;
 }
 else if (VAR_21->weaponowned[VAR_11]
   && VAR_21->ammo[VAR_1]>40
   && (VAR_7 != VAR_9) )
 {
     VAR_21->pendingweapon = VAR_11;
 }
 else
 {

     VAR_21->pendingweapon = VAR_14;
 }

    } while (VAR_21->pendingweapon == VAR_16);


    FUNC_0 (VAR_21,
    VAR_8,
    VAR_10[VAR_21->readyweapon].downstate);

    return 0;
}
