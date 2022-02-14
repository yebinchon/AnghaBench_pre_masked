
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int* vec3_t ;
struct TYPE_19__ {int* endpos; double fraction; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_20__ {int* oldorigin; int* origin; int axis; int hModel; int customShader; int reType; } ;
typedef TYPE_5__ refEntity_t ;
struct TYPE_17__ {scalar_t__ weapon; int number; } ;
struct TYPE_21__ {float* lerpAngles; int* lerpOrigin; TYPE_2__ currentState; } ;
typedef TYPE_6__ centity_t ;
typedef int beam ;
struct TYPE_18__ {int lightningExplosionModel; int lightningShader; } ;
struct TYPE_22__ {TYPE_3__ media; } ;
struct TYPE_16__ {int clientNum; } ;
struct TYPE_15__ {float* refdefViewAngles; TYPE_1__ predictedPlayerState; } ;
struct TYPE_14__ {double value; } ;


 int FUNC_0 (int*,int*,int *,int *) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (TYPE_4__*,int*,int ,int ,int*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,int,int*,int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*,int*,int*) ;
 scalar_t__ VAR_4 ;
 TYPE_11__ VAR_5 ;
 TYPE_10__ VAR_6 ;
 TYPE_9__ VAR_7 ;
 int FUNC_7 (TYPE_5__*,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_10( centity_t *VAR_9, vec3_t VAR_10 ) {
 trace_t VAR_11;
 refEntity_t VAR_12;
 vec3_t VAR_13;
 vec3_t VAR_14, VAR_15;

 if (VAR_9->currentState.weapon != VAR_4) {
  return;
 }

 FUNC_7( &VAR_12, 0, sizeof( VAR_12 ) );


 if ((VAR_9->currentState.number == VAR_5.predictedPlayerState.clientNum) && (VAR_6.value != 0)) {
  vec3_t VAR_16;
  int VAR_17;

  for (VAR_17 = 0; VAR_17 < 3; VAR_17++) {
   float VAR_18 = VAR_9->lerpAngles[VAR_17] - VAR_5.refdefViewAngles[VAR_17];
   if (VAR_18 > 180) {
    VAR_18 -= 360;
   }
   if (VAR_18 < -180) {
    VAR_18 += 360;
   }

   VAR_16[VAR_17] = VAR_5.refdefViewAngles[VAR_17] + VAR_18 * (1.0 - VAR_6.value);
   if (VAR_16[VAR_17] < 0) {
    VAR_16[VAR_17] += 360;
   }
   if (VAR_16[VAR_17] > 360) {
    VAR_16[VAR_17] -= 360;
   }
  }

  FUNC_0(VAR_16, VAR_13, ((void*)0), ((void*)0) );
  FUNC_3(VAR_9->lerpOrigin, VAR_14 );

 } else {

  FUNC_0( VAR_9->lerpAngles, VAR_13, ((void*)0), ((void*)0) );
  FUNC_3(VAR_9->lerpOrigin, VAR_14 );
 }


 VAR_14[2] += VAR_0;

 FUNC_4( VAR_14, 14, VAR_13, VAR_14 );


 FUNC_4( VAR_14, VAR_1, VAR_13, VAR_15 );


 FUNC_2( &VAR_11, VAR_14, VAR_8, VAR_8, VAR_15,
  VAR_9->currentState.number, VAR_2 );


 FUNC_3( VAR_11.endpos, VAR_12.oldorigin );



 FUNC_3( VAR_10, VAR_12.origin );

 VAR_12.reType = VAR_3;
 VAR_12.customShader = VAR_7.media.lightningShader;
 FUNC_9( &VAR_12 );


 if ( VAR_11.fraction < 1.0 ) {
  vec3_t VAR_19;
  vec3_t VAR_20;

  FUNC_6( VAR_12.oldorigin, VAR_12.origin, VAR_20 );
  FUNC_5( VAR_20 );

  FUNC_7( &VAR_12, 0, sizeof( VAR_12 ) );
  VAR_12.hModel = VAR_7.media.lightningExplosionModel;

  FUNC_4( VAR_11.endpos, -16, VAR_20, VAR_12.origin );


  VAR_19[0] = FUNC_8() % 360;
  VAR_19[1] = FUNC_8() % 360;
  VAR_19[2] = FUNC_8() % 360;
  FUNC_1( VAR_19, VAR_12.axis );
  FUNC_9( &VAR_12 );
 }
}
