
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef float* vec3_t ;
struct TYPE_17__ {double fraction; int endpos; } ;
typedef TYPE_1__ trace_t ;
struct TYPE_19__ {float* origin; float* lightingOrigin; int axis; int renderfx; } ;
struct TYPE_16__ {scalar_t__ trType; } ;
struct TYPE_18__ {int endTime; int leFlags; scalar_t__ leBounceSoundType; TYPE_3__ refEntity; TYPE_15__ angles; TYPE_15__ pos; } ;
typedef TYPE_2__ localEntity_t ;
struct TYPE_20__ {int time; } ;


 int FUNC_0 (float*,int ) ;
 int FUNC_1 (TYPE_15__*,int,float*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,float*,int *,int *,float*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (float*,float*) ;
 TYPE_4__ VAR_7 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_3__*) ;

void FUNC_11( localEntity_t *VAR_8 ) {
 vec3_t VAR_9;
 trace_t VAR_10;

 if ( VAR_8->pos.trType == VAR_6 ) {

  int VAR_11;
  float VAR_12;

  VAR_11 = VAR_8->endTime - VAR_7.time;
  if ( VAR_11 < VAR_5 ) {



   FUNC_8( VAR_8->refEntity.origin, VAR_8->refEntity.lightingOrigin );
   VAR_8->refEntity.renderfx |= VAR_4;
   VAR_12 = VAR_8->refEntity.origin[2];
   VAR_8->refEntity.origin[2] -= 16 * ( 1.0 - (float)VAR_11 / VAR_5 );
   FUNC_10( &VAR_8->refEntity );
   VAR_8->refEntity.origin[2] = VAR_12;
  } else {
   FUNC_10( &VAR_8->refEntity );
  }

  return;
 }


 FUNC_1( &VAR_8->pos, VAR_7.time, VAR_9 );


 FUNC_7( &VAR_10, VAR_8->refEntity.origin, ((void*)0), ((void*)0), VAR_9, -1, VAR_1 );
 if ( VAR_10.fraction == 1.0 ) {

  FUNC_8( VAR_9, VAR_8->refEntity.origin );

  if ( VAR_8->leFlags & VAR_3 ) {
   vec3_t VAR_13;

   FUNC_1( &VAR_8->angles, VAR_7.time, VAR_13 );
   FUNC_0( VAR_13, VAR_8->refEntity.axis );
  }

  FUNC_10( &VAR_8->refEntity );


  if ( VAR_8->leBounceSoundType == VAR_2 ) {
   FUNC_2( VAR_8 );
  }

  return;
 }




 if ( FUNC_9( VAR_10.endpos, 0 ) & VAR_0 ) {
  FUNC_5( VAR_8 );
  return;
 }


 FUNC_3( VAR_8, &VAR_10 );


 FUNC_4( VAR_8, &VAR_10 );


 FUNC_6( VAR_8, &VAR_10 );

 FUNC_10( &VAR_8->refEntity );
}
