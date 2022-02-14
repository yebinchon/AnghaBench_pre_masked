
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ giTag; } ;
struct TYPE_6__ {int buttons; int weapon; } ;
struct TYPE_9__ {TYPE_2__* ps; int gauntletHit; TYPE_1__ cmd; } ;
struct TYPE_8__ {scalar_t__ msec; } ;
struct TYPE_7__ {int pm_flags; scalar_t__* persistant; size_t* stats; int weapon; scalar_t__ weaponTime; scalar_t__ weaponstate; int* ammo; scalar_t__* powerups; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;





 TYPE_5__* VAR_26 ;
 TYPE_4__* VAR_27 ;
 TYPE_3__ VAR_28 ;

__attribute__((used)) static void FUNC_4( void ) {
 int VAR_29;


 if ( VAR_27->ps->pm_flags & VAR_7 ) {
  return;
 }


 if ( VAR_27->ps->persistant[VAR_6] == VAR_16 ) {
  return;
 }


 if ( VAR_27->ps->stats[VAR_12] <= 0 ) {
  VAR_27->ps->weapon = VAR_25;
  return;
 }


 if ( VAR_27->cmd.buttons & VAR_1 ) {
  if ( ! ( VAR_27->ps->pm_flags & VAR_8 ) ) {
   if ( VAR_26[VAR_27->ps->stats[VAR_13]].giTag == VAR_5
    && VAR_27->ps->stats[VAR_12] >= (VAR_27->ps->stats[VAR_14] + 25) ) {

   } else {
    VAR_27->ps->pm_flags |= VAR_8;
    FUNC_0( VAR_4 + VAR_26[VAR_27->ps->stats[VAR_13]].giTag );
    VAR_27->ps->stats[VAR_13] = 0;
   }
   return;
  }
 } else {
  VAR_27->ps->pm_flags &= ~VAR_8;
 }



 if ( VAR_27->ps->weaponTime > 0 ) {
  VAR_27->ps->weaponTime -= VAR_28.msec;
 }




 if ( VAR_27->ps->weaponTime <= 0 || VAR_27->ps->weaponstate != VAR_22 ) {
  if ( VAR_27->ps->weapon != VAR_27->cmd.weapon ) {
   FUNC_1( VAR_27->cmd.weapon );
  }
 }

 if ( VAR_27->ps->weaponTime > 0 ) {
  return;
 }


 if ( VAR_27->ps->weaponstate == VAR_21 ) {
  FUNC_2();
  return;
 }

 if ( VAR_27->ps->weaponstate == VAR_23 ) {
  VAR_27->ps->weaponstate = VAR_24;
  if ( VAR_27->ps->weapon == 138 ) {
   FUNC_3( VAR_20 );
  } else {
   FUNC_3( VAR_19 );
  }
  return;
 }


 if ( ! (VAR_27->cmd.buttons & VAR_0) ) {
  VAR_27->ps->weaponTime = 0;
  VAR_27->ps->weaponstate = VAR_24;
  return;
 }


 if ( VAR_27->ps->weapon == 138 ) {

  if ( !VAR_27->gauntletHit ) {
   VAR_27->ps->weaponTime = 0;
   VAR_27->ps->weaponstate = VAR_24;
   return;
  }
  FUNC_3( VAR_18 );
 } else {
  FUNC_3( VAR_17 );
 }

 VAR_27->ps->weaponstate = VAR_22;


 if ( ! VAR_27->ps->ammo[ VAR_27->ps->weapon ] ) {
  FUNC_0( VAR_3 );
  VAR_27->ps->weaponTime += 500;
  return;
 }


 if ( VAR_27->ps->ammo[ VAR_27->ps->weapon ] != -1 ) {
  VAR_27->ps->ammo[ VAR_27->ps->weapon ]--;
 }


 FUNC_0( VAR_2 );

 switch( VAR_27->ps->weapon ) {
 default:
 case 138:
  VAR_29 = 400;
  break;
 case 135:
  VAR_29 = 50;
  break;
 case 128:
  VAR_29 = 1000;
  break;
 case 134:
  VAR_29 = 100;
  break;
 case 136:
  VAR_29 = 800;
  break;
 case 129:
  VAR_29 = 800;
  break;
 case 132:
  VAR_29 = 100;
  break;
 case 130:
  VAR_29 = 1500;
  break;
 case 140:
  VAR_29 = 200;
  break;
 case 137:
  VAR_29 = 400;
  break;
 }
 if ( VAR_27->ps->powerups[VAR_10] ) {
  VAR_29 /= 1.3;
 }

 VAR_27->ps->weaponTime += VAR_29;
}
