
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef int qboolean ;
struct TYPE_6__ {struct TYPE_6__* prev; struct TYPE_6__* next; } ;
struct TYPE_7__ {void* dist1; void* dist2; int normal2; scalar_t__* origin; int normal1; scalar_t__* dir; TYPE_1__ chain; } ;
typedef TYPE_2__ edgeLine_t ;
typedef int drawVert_t ;
struct TYPE_8__ {float length; int ** dv; } ;


 void* FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,TYPE_2__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_3 (scalar_t__*,int ,int ) ;
 float VAR_2 ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 float FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 double FUNC_7 (scalar_t__) ;
 int VAR_5 ;
 size_t VAR_6 ;
 TYPE_3__* VAR_7 ;

int FUNC_8( vec3_t VAR_8, vec3_t VAR_9, qboolean VAR_10 ) {
 int VAR_11;
 edgeLine_t *VAR_12;
 float VAR_13;
 vec3_t VAR_14;

 FUNC_6( VAR_9, VAR_8, VAR_14 );
 VAR_13 = FUNC_5( VAR_14, VAR_14 );
 if ( VAR_13 < 0.1 ) {

  VAR_3++;
  return -1;
 }

 if ( !VAR_10 ) {
  if ( FUNC_7( VAR_14[0] + VAR_14[1] + VAR_14[2] ) != 1.0 ) {
   if ( VAR_6 == VAR_1 ) {
    FUNC_1( "MAX_ORIGINAL_EDGES" );
   }
   VAR_7[ VAR_6 ].dv[0] = (drawVert_t *)VAR_8;
   VAR_7[ VAR_6 ].dv[1] = (drawVert_t *)VAR_9;
   VAR_7[ VAR_6 ].length = VAR_13;
   VAR_6++;
   return -1;
  }
 }

 for ( VAR_11 = 0 ; VAR_11 < VAR_5 ; VAR_11++ ) {
  VAR_12 = &VAR_4[VAR_11];

  VAR_13 = FUNC_0( VAR_8, VAR_12->normal1 ) - VAR_12->dist1;
  if ( VAR_13 < -VAR_2 || VAR_13 > VAR_2 ) {
   continue;
  }
  VAR_13 = FUNC_0( VAR_8, VAR_12->normal2 ) - VAR_12->dist2;
  if ( VAR_13 < -VAR_2 || VAR_13 > VAR_2 ) {
   continue;
  }

  VAR_13 = FUNC_0( VAR_9, VAR_12->normal1 ) - VAR_12->dist1;
  if ( VAR_13 < -VAR_2 || VAR_13 > VAR_2 ) {
   continue;
  }
  VAR_13 = FUNC_0( VAR_9, VAR_12->normal2 ) - VAR_12->dist2;
  if ( VAR_13 < -VAR_2 || VAR_13 > VAR_2 ) {
   continue;
  }


  FUNC_2( VAR_8, VAR_12 );
  FUNC_2( VAR_9, VAR_12 );
  return VAR_11;
 }


 if ( VAR_5 >= VAR_0 ) {
  FUNC_1( "MAX_EDGE_LINES" );
 }

 VAR_12 = &VAR_4[ VAR_5 ];
 VAR_5++;

 VAR_12->chain.next = VAR_12->chain.prev = &VAR_12->chain;

 FUNC_4( VAR_8, VAR_12->origin );
 FUNC_4( VAR_14, VAR_12->dir );

 FUNC_3( VAR_12->dir, VAR_12->normal1, VAR_12->normal2 );
 VAR_12->dist1 = FUNC_0( VAR_12->origin, VAR_12->normal1 );
 VAR_12->dist2 = FUNC_0( VAR_12->origin, VAR_12->normal2 );

 FUNC_2( VAR_8, VAR_12 );
 FUNC_2( VAR_9, VAR_12 );

 return VAR_5 - 1;
}
