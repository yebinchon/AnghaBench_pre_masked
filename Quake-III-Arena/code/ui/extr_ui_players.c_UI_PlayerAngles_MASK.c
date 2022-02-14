
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_7__ {float yawAngle; float pitchAngle; void* pitching; void* yawing; } ;
struct TYPE_6__ {float yawAngle; void* yawing; } ;
struct TYPE_8__ {int legsAnim; int torsoAnim; TYPE_2__ torso; TYPE_1__ legs; int viewAngles; } ;
typedef TYPE_3__ playerInfo_t ;


 int VAR_0 ;
 float FUNC_0 (float) ;
 int FUNC_1 (float*,float*,float*) ;
 int FUNC_2 (float*,float**) ;
 int VAR_1 ;
 size_t VAR_2 ;
 float VAR_3 ;
 int VAR_4 ;
 float FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (float,int,int,float,float*,void**) ;
 int FUNC_5 (float*) ;
 int FUNC_6 (int ,float*) ;
 size_t VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static void FUNC_7( playerInfo_t *VAR_7, vec3_t VAR_8[3], vec3_t VAR_9[3], vec3_t VAR_10[3] ) {
 vec3_t VAR_11, VAR_12, VAR_13;
 float VAR_14;
 float VAR_15;

 FUNC_6( VAR_7->viewAngles, VAR_13 );
 VAR_13[VAR_5] = FUNC_0( VAR_13[VAR_5] );
 FUNC_5( VAR_11 );
 FUNC_5( VAR_12 );




 if ( ( VAR_7->legsAnim & ~VAR_0 ) != VAR_1
  || ( VAR_7->torsoAnim & ~VAR_0 ) != VAR_4 ) {

  VAR_7->torso.yawing = VAR_6;
  VAR_7->torso.pitching = VAR_6;
  VAR_7->legs.yawing = VAR_6;
 }


 VAR_15 = FUNC_3( VAR_7 );
 VAR_11[VAR_5] = VAR_13[VAR_5] + VAR_15;
 VAR_12[VAR_5] = VAR_13[VAR_5] + 0.25 * VAR_15;



 FUNC_4( VAR_12[VAR_5], 25, 90, VAR_3, &VAR_7->torso.yawAngle, &VAR_7->torso.yawing );
 FUNC_4( VAR_11[VAR_5], 40, 90, VAR_3, &VAR_7->legs.yawAngle, &VAR_7->legs.yawing );

 VAR_12[VAR_5] = VAR_7->torso.yawAngle;
 VAR_11[VAR_5] = VAR_7->legs.yawAngle;




 if ( VAR_13[VAR_2] > 180 ) {
  VAR_14 = (-360 + VAR_13[VAR_2]) * 0.75;
 } else {
  VAR_14 = VAR_13[VAR_2] * 0.75;
 }
 FUNC_4( VAR_14, 15, 30, 0.1f, &VAR_7->torso.pitchAngle, &VAR_7->torso.pitching );
 VAR_12[VAR_2] = VAR_7->torso.pitchAngle;


 FUNC_1( VAR_13, VAR_12, VAR_13 );
 FUNC_1( VAR_12, VAR_11, VAR_12 );
 FUNC_2( VAR_11, VAR_8 );
 FUNC_2( VAR_12, VAR_9 );
 FUNC_2( VAR_13, VAR_10 );
}
