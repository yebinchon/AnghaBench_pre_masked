
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_10__ {int apos; int pos; } ;
struct TYPE_8__ {int apos; int pos; } ;
struct TYPE_12__ {float* lerpOrigin; void** lerpAngles; TYPE_3__ nextState; TYPE_1__ currentState; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_13__ {float frameInterpolation; TYPE_4__* nextSnap; TYPE_2__* snap; } ;
struct TYPE_11__ {int serverTime; } ;
struct TYPE_9__ {int serverTime; } ;


 int FUNC_0 (int *,int ,float*) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (float,float,float) ;
 TYPE_6__ VAR_0 ;

__attribute__((used)) static void FUNC_3( centity_t *VAR_1 ) {
 vec3_t VAR_2, VAR_3;
 float VAR_4;



 if ( VAR_0.nextSnap == ((void*)0) ) {
  FUNC_1( "CG_InterpoateEntityPosition: cg.nextSnap == NULL" );
 }

 VAR_4 = VAR_0.frameInterpolation;



 FUNC_0( &VAR_1->currentState.pos, VAR_0.snap->serverTime, VAR_2 );
 FUNC_0( &VAR_1->nextState.pos, VAR_0.nextSnap->serverTime, VAR_3 );

 VAR_1->lerpOrigin[0] = VAR_2[0] + VAR_4 * ( VAR_3[0] - VAR_2[0] );
 VAR_1->lerpOrigin[1] = VAR_2[1] + VAR_4 * ( VAR_3[1] - VAR_2[1] );
 VAR_1->lerpOrigin[2] = VAR_2[2] + VAR_4 * ( VAR_3[2] - VAR_2[2] );

 FUNC_0( &VAR_1->currentState.apos, VAR_0.snap->serverTime, VAR_2 );
 FUNC_0( &VAR_1->nextState.apos, VAR_0.nextSnap->serverTime, VAR_3 );

 VAR_1->lerpAngles[0] = FUNC_2( VAR_2[0], VAR_3[0], VAR_4 );
 VAR_1->lerpAngles[1] = FUNC_2( VAR_2[1], VAR_3[1], VAR_4 );
 VAR_1->lerpAngles[2] = FUNC_2( VAR_2[2], VAR_3[2], VAR_4 );

}
