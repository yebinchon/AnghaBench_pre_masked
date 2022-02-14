
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int lowAmmoWarning; TYPE_2__* snap; } ;
struct TYPE_8__ {int noAmmoSound; } ;
struct TYPE_9__ {TYPE_3__ media; } ;
struct TYPE_6__ {int* stats; int* ammo; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 size_t VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;




 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1( void ) {
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;


 VAR_9 = VAR_4.snap->ps.stats[ VAR_1 ];
 VAR_7 = 0;
 for ( VAR_6 = VAR_2 ; VAR_6 < VAR_3 ; VAR_6++ ) {
  if ( ! ( VAR_9 & ( 1 << VAR_6 ) ) ) {
   continue;
  }
  switch ( VAR_6 ) {
  case 129:
  case 132:
  case 130:
  case 128:



   VAR_7 += VAR_4.snap->ps.ammo[VAR_6] * 1000;
   break;
  default:
   VAR_7 += VAR_4.snap->ps.ammo[VAR_6] * 200;
   break;
  }
  if ( VAR_7 >= 5000 ) {
   VAR_4.lowAmmoWarning = 0;
   return;
  }
 }

 VAR_8 = VAR_4.lowAmmoWarning;

 if ( VAR_7 == 0 ) {
  VAR_4.lowAmmoWarning = 2;
 } else {
  VAR_4.lowAmmoWarning = 1;
 }


 if ( VAR_4.lowAmmoWarning != VAR_8 ) {
  FUNC_0( VAR_5.media.noAmmoSound, VAR_0 );
 }
}
