
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_17__ {scalar_t__ fixedlegs; scalar_t__ fixedtorso; } ;
typedef TYPE_6__ clientInfo_t ;
struct TYPE_15__ {int trDelta; } ;
struct TYPE_16__ {int legsAnim; int torsoAnim; int eFlags; int* angles2; int clientNum; TYPE_4__ pos; } ;
struct TYPE_13__ {int yawAngle; int pitchAngle; void* pitching; void* yawing; } ;
struct TYPE_12__ {int yawAngle; void* yawing; } ;
struct TYPE_14__ {TYPE_2__ torso; TYPE_1__ legs; } ;
struct TYPE_18__ {TYPE_5__ currentState; TYPE_3__ pe; int lerpAngles; } ;
typedef TYPE_7__ centity_t ;
struct TYPE_20__ {float value; } ;
struct TYPE_19__ {TYPE_6__* clientinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int*,int**) ;
 int FUNC_3 (TYPE_7__*,int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (float,int,int,float,int*,void**) ;
 float FUNC_6 (int*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int ,int*) ;
 float FUNC_9 (int*) ;
 size_t VAR_7 ;
 TYPE_9__ VAR_8 ;
 TYPE_8__ VAR_9 ;
 void* VAR_10 ;

__attribute__((used)) static void FUNC_10( centity_t *VAR_11, vec3_t VAR_12[3], vec3_t VAR_13[3], vec3_t VAR_14[3] ) {
 vec3_t VAR_15, VAR_16, VAR_17;
 float VAR_18;
 static int VAR_19[8] = { 0, 22, 45, -22, 0, 22, -45, -22 };
 vec3_t VAR_20;
 float VAR_21;
 int VAR_22, VAR_23;
 clientInfo_t *VAR_24;

 FUNC_8( VAR_11->lerpAngles, VAR_17 );
 VAR_17[VAR_7] = FUNC_0( VAR_17[VAR_7] );
 FUNC_7( VAR_15 );
 FUNC_7( VAR_16 );




 if ( ( VAR_11->currentState.legsAnim & ~VAR_0 ) != VAR_2
  || ( VAR_11->currentState.torsoAnim & ~VAR_0 ) != VAR_6 ) {

  VAR_11->pe.torso.yawing = VAR_10;
  VAR_11->pe.torso.pitching = VAR_10;
  VAR_11->pe.legs.yawing = VAR_10;
 }


 if ( VAR_11->currentState.eFlags & VAR_1 ) {

  VAR_22 = 0;
 } else {
  VAR_22 = VAR_11->currentState.angles2[VAR_7];
  if ( VAR_22 < 0 || VAR_22 > 7 ) {
   FUNC_4( "Bad player movement angle" );
  }
 }
 VAR_15[VAR_7] = VAR_17[VAR_7] + VAR_19[ VAR_22 ];
 VAR_16[VAR_7] = VAR_17[VAR_7] + 0.25 * VAR_19[ VAR_22 ];


 FUNC_5( VAR_16[VAR_7], 25, 90, VAR_8.value, &VAR_11->pe.torso.yawAngle, &VAR_11->pe.torso.yawing );
 FUNC_5( VAR_15[VAR_7], 40, 90, VAR_8.value, &VAR_11->pe.legs.yawAngle, &VAR_11->pe.legs.yawing );

 VAR_16[VAR_7] = VAR_11->pe.torso.yawAngle;
 VAR_15[VAR_7] = VAR_11->pe.legs.yawAngle;





 if ( VAR_17[VAR_4] > 180 ) {
  VAR_18 = (-360 + VAR_17[VAR_4]) * 0.75f;
 } else {
  VAR_18 = VAR_17[VAR_4] * 0.75f;
 }
 FUNC_5( VAR_18, 15, 30, 0.1f, &VAR_11->pe.torso.pitchAngle, &VAR_11->pe.torso.pitching );
 VAR_16[VAR_4] = VAR_11->pe.torso.pitchAngle;


 VAR_23 = VAR_11->currentState.clientNum;
 if ( VAR_23 >= 0 && VAR_23 < VAR_3 ) {
  VAR_24 = &VAR_9.clientinfo[ VAR_23 ];
  if ( VAR_24->fixedtorso ) {
   VAR_16[VAR_4] = 0.0f;
  }
 }





 FUNC_8( VAR_11->currentState.pos.trDelta, VAR_20 );
 VAR_21 = FUNC_9( VAR_20 );
 if ( VAR_21 ) {
  vec3_t VAR_25[3];
  float VAR_26;

  VAR_21 *= 0.05f;

  FUNC_2( VAR_15, VAR_25 );
  VAR_26 = VAR_21 * FUNC_6( VAR_20, VAR_25[1] );
  VAR_15[VAR_5] -= VAR_26;

  VAR_26 = VAR_21 * FUNC_6( VAR_20, VAR_25[0] );
  VAR_15[VAR_4] += VAR_26;
 }


 VAR_23 = VAR_11->currentState.clientNum;
 if ( VAR_23 >= 0 && VAR_23 < VAR_3 ) {
  VAR_24 = &VAR_9.clientinfo[ VAR_23 ];
  if ( VAR_24->fixedlegs ) {
   VAR_15[VAR_7] = VAR_16[VAR_7];
   VAR_15[VAR_4] = 0.0f;
   VAR_15[VAR_5] = 0.0f;
  }
 }


 FUNC_3( VAR_11, VAR_16 );


 FUNC_1( VAR_17, VAR_16, VAR_17 );
 FUNC_1( VAR_16, VAR_15, VAR_16 );
 FUNC_2( VAR_15, VAR_12 );
 FUNC_2( VAR_16, VAR_13 );
 FUNC_2( VAR_17, VAR_14 );
}
