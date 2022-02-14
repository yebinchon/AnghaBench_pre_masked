
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_11__ {double* normal; } ;
struct TYPE_13__ {int fraction; double* endpos; TYPE_3__ plane; int entityNum; scalar_t__ allsolid; } ;
typedef TYPE_5__ trace_t ;
typedef int qboolean ;
struct TYPE_15__ {TYPE_4__* ps; int tracemask; int maxs; int mins; int (* trace ) (TYPE_5__*,double*,int ,int ,double*,int ,int ) ;} ;
struct TYPE_9__ {double* normal; } ;
struct TYPE_10__ {TYPE_1__ plane; } ;
struct TYPE_14__ {double frametime; float impactSpeed; TYPE_2__ groundTrace; scalar_t__ groundPlane; } ;
struct TYPE_12__ {double* velocity; double gravity; double* origin; scalar_t__ pm_time; int clientNum; } ;


 int FUNC_0 (double*,double*,double*) ;
 double FUNC_1 (double*,double*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (double*,double*,double*,int ) ;
 int FUNC_4 (double*,double*,double*) ;
 int FUNC_5 (double*) ;
 int FUNC_6 (double*,double*) ;
 int FUNC_7 (double*,float,double*,double*) ;
 int FUNC_8 (double*) ;
 int FUNC_9 (double*,double*) ;
 int FUNC_10 (double*,float,double*) ;
 TYPE_8__* VAR_2 ;
 TYPE_7__ VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (TYPE_5__*,double*,int ,int ,double*,int ,int ) ;

qboolean FUNC_12( qboolean VAR_5 ) {
 int VAR_6, VAR_7;
 vec3_t VAR_8;
 float VAR_9;
 int VAR_10;
 vec3_t VAR_11[VAR_0];
 vec3_t VAR_12;
 vec3_t VAR_13;
 int VAR_14, VAR_15, VAR_16;
 trace_t VAR_17;
 vec3_t VAR_18;
 float VAR_19;
 float VAR_20;
 vec3_t VAR_21;
 vec3_t VAR_22;

 VAR_7 = 4;

 FUNC_6 (VAR_2->ps->velocity, VAR_12);

 if ( VAR_5 ) {
  FUNC_6( VAR_2->ps->velocity, VAR_21 );
  VAR_21[2] -= VAR_2->ps->gravity * VAR_3.frametime;
  VAR_2->ps->velocity[2] = ( VAR_2->ps->velocity[2] + VAR_21[2] ) * 0.5;
  VAR_12[2] = VAR_21[2];
  if ( VAR_3.groundPlane ) {

   FUNC_3 (VAR_2->ps->velocity, VAR_3.groundTrace.plane.normal,
    VAR_2->ps->velocity, VAR_1 );
  }
 }

 VAR_19 = VAR_3.frametime;


 if ( VAR_3.groundPlane ) {
  VAR_10 = 1;
  FUNC_6( VAR_3.groundTrace.plane.normal, VAR_11[0] );
 } else {
  VAR_10 = 0;
 }


 FUNC_9( VAR_2->ps->velocity, VAR_11[VAR_10] );
 VAR_10++;

 for ( VAR_6=0 ; VAR_6 < VAR_7 ; VAR_6++ ) {


  FUNC_7( VAR_2->ps->origin, VAR_19, VAR_2->ps->velocity, VAR_18 );


  VAR_2->trace ( &VAR_17, VAR_2->ps->origin, VAR_2->mins, VAR_2->maxs, VAR_18, VAR_2->ps->clientNum, VAR_2->tracemask);

  if (VAR_17.allsolid) {

   VAR_2->ps->velocity[2] = 0;
   return VAR_4;
  }

  if (VAR_17.fraction > 0) {

   FUNC_6 (VAR_17.endpos, VAR_2->ps->origin);
  }

  if (VAR_17.fraction == 1) {
    break;
  }


  FUNC_2( VAR_17.entityNum );

  VAR_19 -= VAR_19 * VAR_17.fraction;

  if (VAR_10 >= VAR_0) {

   FUNC_5( VAR_2->ps->velocity );
   return VAR_4;
  }






  for ( VAR_14 = 0 ; VAR_14 < VAR_10 ; VAR_14++ ) {
   if ( FUNC_1( VAR_17.plane.normal, VAR_11[VAR_14] ) > 0.99 ) {
    FUNC_4( VAR_17.plane.normal, VAR_2->ps->velocity, VAR_2->ps->velocity );
    break;
   }
  }
  if ( VAR_14 < VAR_10 ) {
   continue;
  }
  FUNC_6 (VAR_17.plane.normal, VAR_11[VAR_10]);
  VAR_10++;






  for ( VAR_14 = 0 ; VAR_14 < VAR_10 ; VAR_14++ ) {
   VAR_20 = FUNC_1( VAR_2->ps->velocity, VAR_11[VAR_14] );
   if ( VAR_20 >= 0.1 ) {
    continue;
   }


   if ( -VAR_20 > VAR_3.impactSpeed ) {
    VAR_3.impactSpeed = -VAR_20;
   }


   FUNC_3 (VAR_2->ps->velocity, VAR_11[VAR_14], VAR_13, VAR_1 );


   FUNC_3 (VAR_21, VAR_11[VAR_14], VAR_22, VAR_1 );


   for ( VAR_15 = 0 ; VAR_15 < VAR_10 ; VAR_15++ ) {
    if ( VAR_15 == VAR_14 ) {
     continue;
    }
    if ( FUNC_1( VAR_13, VAR_11[VAR_15] ) >= 0.1 ) {
     continue;
    }


    FUNC_3( VAR_13, VAR_11[VAR_15], VAR_13, VAR_1 );
    FUNC_3( VAR_22, VAR_11[VAR_15], VAR_22, VAR_1 );


    if ( FUNC_1( VAR_13, VAR_11[VAR_14] ) >= 0 ) {
     continue;
    }


    FUNC_0 (VAR_11[VAR_14], VAR_11[VAR_15], VAR_8);
    FUNC_8( VAR_8 );
    VAR_9 = FUNC_1( VAR_8, VAR_2->ps->velocity );
    FUNC_10( VAR_8, VAR_9, VAR_13 );

    FUNC_0 (VAR_11[VAR_14], VAR_11[VAR_15], VAR_8);
    FUNC_8( VAR_8 );
    VAR_9 = FUNC_1( VAR_8, VAR_21 );
    FUNC_10( VAR_8, VAR_9, VAR_22 );


    for ( VAR_16 = 0 ; VAR_16 < VAR_10 ; VAR_16++ ) {
     if ( VAR_16 == VAR_14 || VAR_16 == VAR_15 ) {
      continue;
     }
     if ( FUNC_1( VAR_13, VAR_11[VAR_16] ) >= 0.1 ) {
      continue;
     }


     FUNC_5( VAR_2->ps->velocity );
     return VAR_4;
    }
   }


   FUNC_6( VAR_13, VAR_2->ps->velocity );
   FUNC_6( VAR_22, VAR_21 );
   break;
  }
 }

 if ( VAR_5 ) {
  FUNC_6( VAR_21, VAR_2->ps->velocity );
 }


 if ( VAR_2->ps->pm_time ) {
  FUNC_6( VAR_12, VAR_2->ps->velocity );
 }

 return ( VAR_6 != 0 );
}
