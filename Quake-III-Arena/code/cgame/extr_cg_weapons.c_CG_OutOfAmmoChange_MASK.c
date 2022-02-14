
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int weaponSelect; int time; int weaponSelectTime; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;

void FUNC_1( void ) {
 int VAR_1;

 VAR_0.weaponSelectTime = VAR_0.time;

 for ( VAR_1 = 15 ; VAR_1 > 0 ; VAR_1-- ) {
  if ( FUNC_0( VAR_1 ) ) {
   VAR_0.weaponSelect = VAR_1;
   break;
  }
 }
}
