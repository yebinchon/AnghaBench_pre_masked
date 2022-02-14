
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_9__ {int normal; } ;
struct TYPE_11__ {double fraction; float* endpos; TYPE_1__ plane; scalar_t__ allsolid; } ;
typedef TYPE_3__ trace_t ;
typedef int qboolean ;
struct TYPE_12__ {scalar_t__ debugLevel; TYPE_2__* ps; int tracemask; int maxs; int mins; int (* trace ) (TYPE_3__*,float*,int ,int ,float*,int ,int ) ;} ;
struct TYPE_10__ {float* origin; float* velocity; int clientNum; } ;


 int FUNC_0 (char*,int ) ;
 double FUNC_1 (int ,float*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (float*,int ,float*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (float*,float*) ;
 int FUNC_6 (float*,int ,int ,int) ;
 int VAR_6 ;
 TYPE_8__* VAR_7 ;
 int FUNC_7 (TYPE_3__*,float*,int ,int ,float*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,float*,int ,int ,float*,int ,int ) ;
 int FUNC_9 (TYPE_3__*,float*,int ,int ,float*,int ,int ) ;
 int FUNC_10 (TYPE_3__*,float*,int ,int ,float*,int ,int ) ;

void FUNC_11( qboolean VAR_8 ) {
 vec3_t VAR_9, VAR_10;
 vec3_t VAR_11, VAR_12;
 trace_t VAR_13;


 vec3_t VAR_14, VAR_15;
 float VAR_16;

 FUNC_5 (VAR_7->ps->origin, VAR_9);
 FUNC_5 (VAR_7->ps->velocity, VAR_10);

 if ( FUNC_4( VAR_8 ) == 0 ) {
  return;
 }

 FUNC_5(VAR_9, VAR_15);
 VAR_15[2] -= VAR_5;
 VAR_7->trace (&VAR_13, VAR_9, VAR_7->mins, VAR_7->maxs, VAR_15, VAR_7->ps->clientNum, VAR_7->tracemask);
 FUNC_6(VAR_14, 0, 0, 1);

 if ( VAR_7->ps->velocity[2] > 0 && (VAR_13.fraction == 1.0 ||
          FUNC_1(VAR_13.plane.normal, VAR_14) < 0.7)) {
  return;
 }

 FUNC_5 (VAR_7->ps->origin, VAR_11);
 FUNC_5 (VAR_7->ps->velocity, VAR_12);

 FUNC_5 (VAR_9, VAR_14);
 VAR_14[2] += VAR_5;


 VAR_7->trace (&VAR_13, VAR_9, VAR_7->mins, VAR_7->maxs, VAR_14, VAR_7->ps->clientNum, VAR_7->tracemask);
 if ( VAR_13.allsolid ) {
  if ( VAR_7->debugLevel ) {
   FUNC_0("%i:bend can't step\n", VAR_6);
  }
  return;
 }

 VAR_16 = VAR_13.endpos[2] - VAR_9[2];

 FUNC_5 (VAR_13.endpos, VAR_7->ps->origin);
 FUNC_5 (VAR_10, VAR_7->ps->velocity);

 FUNC_4( VAR_8 );


 FUNC_5 (VAR_7->ps->origin, VAR_15);
 VAR_15[2] -= VAR_16;
 VAR_7->trace (&VAR_13, VAR_7->ps->origin, VAR_7->mins, VAR_7->maxs, VAR_15, VAR_7->ps->clientNum, VAR_7->tracemask);
 if ( !VAR_13.allsolid ) {
  FUNC_5 (VAR_13.endpos, VAR_7->ps->origin);
 }
 if ( VAR_13.fraction < 1.0 ) {
  FUNC_3( VAR_7->ps->velocity, VAR_13.plane.normal, VAR_7->ps->velocity, VAR_4 );
 }
 {

  float VAR_17;

  VAR_17 = VAR_7->ps->origin[2] - VAR_9[2];
  if ( VAR_17 > 2 ) {
   if ( VAR_17 < 7 ) {
    FUNC_2( VAR_2 );
   } else if ( VAR_17 < 11 ) {
    FUNC_2( VAR_3 );
   } else if ( VAR_17 < 15 ) {
    FUNC_2( VAR_0 );
   } else {
    FUNC_2( VAR_1 );
   }
  }
  if ( VAR_7->debugLevel ) {
   FUNC_0("%i:stepped\n", VAR_6);
  }
 }
}
