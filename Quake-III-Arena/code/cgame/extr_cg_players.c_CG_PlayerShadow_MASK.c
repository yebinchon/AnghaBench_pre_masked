
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int * vec3_t ;
struct TYPE_18__ {int normal; } ;
struct TYPE_21__ {double fraction; int* endpos; TYPE_4__ plane; scalar_t__ allsolid; scalar_t__ startsolid; } ;
typedef TYPE_7__ trace_t ;
typedef int qboolean ;
struct TYPE_19__ {int yawAngle; } ;
struct TYPE_20__ {TYPE_5__ legs; } ;
struct TYPE_15__ {int powerups; } ;
struct TYPE_22__ {TYPE_6__ pe; int lerpOrigin; TYPE_1__ currentState; } ;
typedef TYPE_8__ centity_t ;
struct TYPE_17__ {int shadowMarkShader; } ;
struct TYPE_16__ {int member_0; int member_1; int member_2; } ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {TYPE_3__ media; } ;


 int FUNC_0 (int ,int*,int ,int ,float,float,float,int,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *) ;
 TYPE_11__ VAR_3 ;
 TYPE_10__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_7__*,int ,int *,int *,int *,int ,int ) ;

__attribute__((used)) static qboolean FUNC_3( centity_t *VAR_7, float *VAR_8 ) {
 vec3_t VAR_9, VAR_10 = {-15, -15, 0}, VAR_11 = {15, 15, 2};
 trace_t VAR_12;
 float VAR_13;

 *VAR_8 = 0;

 if ( VAR_3.integer == 0 ) {
  return VAR_5;
 }


 if ( VAR_7->currentState.powerups & ( 1 << VAR_1 ) ) {
  return VAR_5;
 }


 FUNC_1( VAR_7->lerpOrigin, VAR_9 );
 VAR_9[2] -= VAR_2;

 FUNC_2( &VAR_12, VAR_7->lerpOrigin, VAR_9, VAR_10, VAR_11, 0, VAR_0 );


 if ( VAR_12.fraction == 1.0 || VAR_12.startsolid || VAR_12.allsolid ) {
  return VAR_5;
 }

 *VAR_8 = VAR_12.endpos[2] + 1;

 if ( VAR_3.integer != 1 ) {
  return VAR_6;
 }


 VAR_13 = 1.0 - VAR_12.fraction;






 FUNC_0( VAR_4.media.shadowMarkShader, VAR_12.endpos, VAR_12.plane.normal,
  VAR_7->pe.legs.yawAngle, VAR_13,VAR_13,VAR_13,1, VAR_5, 24, VAR_6 );

 return VAR_6;
}
