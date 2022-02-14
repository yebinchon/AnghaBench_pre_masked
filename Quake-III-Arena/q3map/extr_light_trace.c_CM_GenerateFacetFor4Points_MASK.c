
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef float* vec4_t ;
typedef int qboolean ;
struct TYPE_12__ {float* xyz; } ;
typedef TYPE_1__ drawVert_t ;
struct TYPE_13__ {float* surface; int numBoundaries; float** points; int * boundaries; } ;
typedef TYPE_2__ cFacet_t ;


 int FUNC_0 (int ,float*,float*,float*) ;
 double FUNC_1 (float*,float*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (float*,float*,float*,float*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (float*,float*) ;
 scalar_t__ FUNC_5 (float) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_6( cFacet_t *VAR_3, drawVert_t *VAR_4, drawVert_t *VAR_5, drawVert_t *VAR_6, drawVert_t *VAR_7 ) {
 float VAR_8;
 int VAR_9;
 vec4_t VAR_10;


 if ( !FUNC_2( VAR_3->surface, VAR_4->xyz, VAR_5->xyz, VAR_6->xyz ) ) {
  VAR_3->numBoundaries = 0;
  return VAR_1;
 }


 VAR_8 = FUNC_1( VAR_7->xyz, VAR_3->surface ) - VAR_3->surface[3];
 if ( FUNC_5( VAR_8 ) > VAR_0 ) {
  VAR_3->numBoundaries = 0;
  return VAR_1;
 }


 VAR_3->numBoundaries = 4;

 FUNC_0( VAR_3->boundaries[0], VAR_3->surface, VAR_4->xyz, VAR_5->xyz );
 FUNC_0( VAR_3->boundaries[1], VAR_3->surface, VAR_5->xyz, VAR_6->xyz );
 FUNC_0( VAR_3->boundaries[2], VAR_3->surface, VAR_6->xyz, VAR_7->xyz );
 FUNC_0( VAR_3->boundaries[3], VAR_3->surface, VAR_7->xyz, VAR_4->xyz );

 FUNC_4( VAR_4->xyz, VAR_3->points[0] );
 FUNC_4( VAR_5->xyz, VAR_3->points[1] );
 FUNC_4( VAR_6->xyz, VAR_3->points[2] );
 FUNC_4( VAR_7->xyz, VAR_3->points[3] );

 for (VAR_9 = 1; VAR_9 < 4; VAR_9++)
 {
  if ( !FUNC_2( VAR_10, VAR_3->points[VAR_9], VAR_3->points[(VAR_9+1) % 4], VAR_3->points[(VAR_9+2) % 4]) ) {
   VAR_3->numBoundaries = 0;
   return VAR_1;
  }

  if (FUNC_1(VAR_3->surface, VAR_10) < 0.9) {
   VAR_3->numBoundaries = 0;
   return VAR_1;
  }
 }

 FUNC_3( VAR_3, VAR_4, VAR_5, VAR_6 );

 return VAR_2;
}
