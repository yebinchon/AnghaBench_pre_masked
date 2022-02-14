
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_5__ {scalar_t__ passSolid; } ;
typedef TYPE_1__ trace_t ;
typedef int traceWork_t ;
typedef int qboolean ;
struct TYPE_6__ {scalar_t__ type; float dist; float photons; float* color; int origin; scalar_t__ linearLight; int emitColor; scalar_t__ twosided; int w; int normal; } ;
typedef TYPE_2__ light_t ;


 float FUNC_0 (float* const,int ) ;
 float FUNC_1 (float* const,float*,int ) ;
 int FUNC_2 (float* const,int ,TYPE_1__*,int ,int *) ;
 int FUNC_3 (float*) ;
 float FUNC_4 (float*) ;
 scalar_t__ FUNC_5 (float*,float*) ;
 int FUNC_6 (int ,float,float*) ;
 int FUNC_7 (int ,float* const,float*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 float VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

qboolean FUNC_8( const light_t *VAR_7, const vec3_t VAR_8,
          vec3_t VAR_9, traceWork_t *VAR_10 ) {
 trace_t VAR_11;
 float VAR_12;

 VAR_12 = 0;

 FUNC_3( VAR_9 );


 if ( VAR_3 && VAR_7->type == VAR_0 ) {
  float VAR_13;
  float VAR_14;
  vec3_t VAR_15;


  VAR_14 = FUNC_0( VAR_8, VAR_7->normal ) - VAR_7->dist;
  if ( !VAR_7->twosided ) {
   if ( VAR_14 < 1 ) {
    return VAR_5;
   }
  }



  FUNC_2( VAR_8, VAR_7->origin, &VAR_11, VAR_5, VAR_10 );
  if ( VAR_11.passSolid ) {
   return VAR_5;
  }


  FUNC_7( VAR_7->origin, VAR_8, VAR_15 );
  if ( FUNC_5( VAR_15, VAR_15 ) == 0 ) {
   return VAR_5;
  }
  VAR_13 = FUNC_1( VAR_8, VAR_15, VAR_7->w );
  if ( VAR_13 <= 0 ) {
   if ( VAR_7->twosided ) {
    VAR_13 = -VAR_13;
   } else {
    return VAR_5;
   }
  }
  FUNC_6( VAR_7->emitColor, VAR_13, VAR_9 );
  return VAR_6;
 }


 if ( VAR_7->type == VAR_1 || VAR_7->type == VAR_2 ) {
  vec3_t VAR_16;
  float VAR_17;

  FUNC_7( VAR_7->origin, VAR_8, VAR_16 );
  VAR_17 = FUNC_4( VAR_16 );

  if ( VAR_17 < 16 ) {
   VAR_17 = 16;
  }
  if ( VAR_7->linearLight ) {
   VAR_12 = VAR_7->photons * VAR_4 - VAR_17;
   if ( VAR_12 < 0 ) {
    VAR_12 = 0;
   }
  } else {
   VAR_12 = VAR_7->photons / ( VAR_17 * VAR_17 );
  }
 } else {
  return VAR_5;
 }

 if ( VAR_12 <= 1.0 ) {
  return VAR_5;
 }


 FUNC_2( VAR_8, VAR_7->origin, &VAR_11, VAR_5, VAR_10 );


 if ( VAR_11.passSolid ) {
  return VAR_5;
 }


 VAR_9[0] = VAR_12 * VAR_7->color[0];
 VAR_9[1] = VAR_12 * VAR_7->color[1];
 VAR_9[2] = VAR_12 * VAR_7->color[2];

 return VAR_6;
}
