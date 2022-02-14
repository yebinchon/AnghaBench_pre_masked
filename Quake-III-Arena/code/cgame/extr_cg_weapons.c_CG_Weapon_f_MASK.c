
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int weaponSelect; TYPE_2__* snap; int time; int weaponSelectTime; } ;
struct TYPE_4__ {int pm_flags; int* stats; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_2 ;

void FUNC_2( void ) {
 int VAR_3;

 if ( !VAR_2.snap ) {
  return;
 }
 if ( VAR_2.snap->ps.pm_flags & VAR_0 ) {
  return;
 }

 VAR_3 = FUNC_1( FUNC_0( 1 ) );

 if ( VAR_3 < 1 || VAR_3 > 15 ) {
  return;
 }

 VAR_2.weaponSelectTime = VAR_2.time;

 if ( ! ( VAR_2.snap->ps.stats[VAR_1] & ( 1 << VAR_3 ) ) ) {
  return;
 }

 VAR_2.weaponSelect = VAR_3;
}
