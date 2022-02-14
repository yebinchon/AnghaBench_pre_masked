
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_6__ {int * viewaxis; } ;
struct TYPE_8__ {float damageX; float damageY; float v_dmg_roll; float v_dmg_pitch; float damageValue; TYPE_3__* snap; int damageTime; scalar_t__ time; scalar_t__ v_dmg_time; TYPE_2__ refdef; scalar_t__ attackerTime; } ;
struct TYPE_5__ {int* stats; } ;
struct TYPE_7__ {int serverTime; TYPE_1__ ps; } ;


 int FUNC_0 (float*,float*,int *,int *) ;
 scalar_t__ VAR_0 ;
 float FUNC_1 (float*,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 float FUNC_2 (float*) ;
 int FUNC_3 (int ,float*,float*) ;
 size_t VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;

void FUNC_4( int VAR_7, int VAR_8, int VAR_9 ) {
 float VAR_10, VAR_11, VAR_12;
 float VAR_13;
 int VAR_14;
 float VAR_15;
 vec3_t VAR_16;
 vec3_t VAR_17;
 float VAR_18;
 float VAR_19, VAR_20;


 VAR_5.attackerTime = VAR_5.time;


 VAR_14 = VAR_5.snap->ps.stats[VAR_3];
 if ( VAR_14 < 40 ) {
  VAR_15 = 1;
 } else {
  VAR_15 = 40.0 / VAR_14;
 }
 VAR_13 = VAR_9 * VAR_15;

 if (VAR_13 < 5)
  VAR_13 = 5;
 if (VAR_13 > 10)
  VAR_13 = 10;


 if ( VAR_7 == 255 && VAR_8 == 255 ) {
  VAR_5.damageX = 0;
  VAR_5.damageY = 0;
  VAR_5.v_dmg_roll = 0;
  VAR_5.v_dmg_pitch = -VAR_13;
 } else {

  VAR_20 = VAR_8 / 255.0 * 360;
  VAR_19 = VAR_7 / 255.0 * 360;

  VAR_17[VAR_1] = VAR_20;
  VAR_17[VAR_4] = VAR_19;
  VAR_17[VAR_2] = 0;

  FUNC_0( VAR_17, VAR_16, ((void*)0), ((void*)0) );
  FUNC_3( VAR_6, VAR_16, VAR_16 );

  VAR_11 = FUNC_1 (VAR_16, VAR_5.refdef.viewaxis[0] );
  VAR_10 = FUNC_1 (VAR_16, VAR_5.refdef.viewaxis[1] );
  VAR_12 = FUNC_1 (VAR_16, VAR_5.refdef.viewaxis[2] );

  VAR_16[0] = VAR_11;
  VAR_16[1] = VAR_10;
  VAR_16[2] = 0;
  VAR_18 = FUNC_2( VAR_16 );
  if ( VAR_18 < 0.1 ) {
   VAR_18 = 0.1f;
  }

  VAR_5.v_dmg_roll = VAR_13 * VAR_10;

  VAR_5.v_dmg_pitch = -VAR_13 * VAR_11;

  if ( VAR_11 <= 0.1 ) {
   VAR_11 = 0.1f;
  }
  VAR_5.damageX = -VAR_10 / VAR_11;
  VAR_5.damageY = VAR_12 / VAR_18;
 }


 if ( VAR_5.damageX > 1.0 ) {
  VAR_5.damageX = 1.0;
 }
 if ( VAR_5.damageX < - 1.0 ) {
  VAR_5.damageX = -1.0;
 }

 if ( VAR_5.damageY > 1.0 ) {
  VAR_5.damageY = 1.0;
 }
 if ( VAR_5.damageY < - 1.0 ) {
  VAR_5.damageY = -1.0;
 }


 if ( VAR_13 > 10 ) {
  VAR_13 = 10;
 }
 VAR_5.damageValue = VAR_13;
 VAR_5.v_dmg_time = VAR_5.time + VAR_0;
 VAR_5.damageTime = VAR_5.snap->serverTime;
}
