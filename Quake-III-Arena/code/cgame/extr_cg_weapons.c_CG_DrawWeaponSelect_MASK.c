
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__* stats; } ;
struct TYPE_16__ {int weaponSelect; TYPE_3__* snap; scalar_t__ itemPickupTime; int weaponSelectTime; TYPE_1__ predictedPlayerState; } ;
struct TYPE_15__ {TYPE_5__* item; int weaponIcon; } ;
struct TYPE_12__ {int noammoShader; int selectShader; } ;
struct TYPE_14__ {TYPE_4__ media; } ;
struct TYPE_13__ {char* pickup_name; } ;
struct TYPE_10__ {int* stats; int * ammo; } ;
struct TYPE_11__ {TYPE_2__ ps; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,char*,float*) ;
 int FUNC_1 (int,int,int,int,int ) ;
 int FUNC_2 (char*) ;
 float* FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 TYPE_8__ VAR_5 ;
 TYPE_7__* VAR_6 ;
 TYPE_6__ VAR_7 ;
 int FUNC_5 (float*) ;

void FUNC_6( void ) {
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11, VAR_12, VAR_13;
 char *VAR_14;
 float *VAR_15;


 if ( VAR_5.predictedPlayerState.stats[VAR_2] <= 0 ) {
  return;
 }

 VAR_15 = FUNC_3( VAR_5.weaponSelectTime, VAR_4 );
 if ( !VAR_15 ) {
  return;
 }
 FUNC_5( VAR_15 );


 VAR_5.itemPickupTime = 0;


 VAR_9 = VAR_5.snap->ps.stats[ VAR_3 ];
 VAR_10 = 0;
 for ( VAR_8 = 1 ; VAR_8 < 16 ; VAR_8++ ) {
  if ( VAR_9 & ( 1 << VAR_8 ) ) {
   VAR_10++;
  }
 }

 VAR_11 = 320 - VAR_10 * 20;
 VAR_12 = 380;

 for ( VAR_8 = 1 ; VAR_8 < 16 ; VAR_8++ ) {
  if ( !( VAR_9 & ( 1 << VAR_8 ) ) ) {
   continue;
  }

  FUNC_4( VAR_8 );


  FUNC_1( VAR_11, VAR_12, 32, 32, VAR_6[VAR_8].weaponIcon );


  if ( VAR_8 == VAR_5.weaponSelect ) {
   FUNC_1( VAR_11-4, VAR_12-4, 40, 40, VAR_7.media.selectShader );
  }


  if ( !VAR_5.snap->ps.ammo[ VAR_8 ] ) {
   FUNC_1( VAR_11, VAR_12, 32, 32, VAR_7.media.noammoShader );
  }

  VAR_11 += 40;
 }


 if ( VAR_6[ VAR_5.weaponSelect ].item ) {
  VAR_14 = VAR_6[ VAR_5.weaponSelect ].item->pickup_name;
  if ( VAR_14 ) {
   VAR_13 = FUNC_2( VAR_14 ) * VAR_0;
   VAR_11 = ( VAR_1 - VAR_13 ) / 2;
   FUNC_0(VAR_11, VAR_12 - 22, VAR_14, VAR_15);
  }
 }

 FUNC_5( ((void*)0) );
}
