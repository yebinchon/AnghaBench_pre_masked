
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int weaponSelect; int time; int weaponSelectTime; TYPE_2__* snap; } ;
struct TYPE_4__ {int pm_flags; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;

void FUNC_1( void ) {
 int VAR_3;
 int VAR_4;

 if ( !VAR_2.snap ) {
  return;
 }
 if ( VAR_2.snap->ps.pm_flags & VAR_0 ) {
  return;
 }

 VAR_2.weaponSelectTime = VAR_2.time;
 VAR_4 = VAR_2.weaponSelect;

 for ( VAR_3 = 0 ; VAR_3 < 16 ; VAR_3++ ) {
  VAR_2.weaponSelect--;
  if ( VAR_2.weaponSelect == -1 ) {
   VAR_2.weaponSelect = 15;
  }
  if ( VAR_2.weaponSelect == VAR_1 ) {
   continue;
  }
  if ( FUNC_0( VAR_2.weaponSelect ) ) {
   break;
  }
 }
 if ( VAR_3 == 16 ) {
  VAR_2.weaponSelect = VAR_4;
 }
}
