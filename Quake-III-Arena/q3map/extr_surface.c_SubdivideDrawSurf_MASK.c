
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef float* vec3_t ;
struct TYPE_11__ {int fogNum; int side; int mapBrush; } ;
typedef TYPE_2__ mapDrawSurface_t ;


 int FUNC_0 (int ,float*,float*) ;
 int FUNC_1 (float*,float*) ;
 int FUNC_2 (TYPE_1__*,float*,float,float const,TYPE_1__**,TYPE_1__**) ;
 float FUNC_3 (float*,float*) ;
 TYPE_2__* FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (char*) ;
 float FUNC_6 (float) ;
 float FUNC_7 (float) ;

void FUNC_8( mapDrawSurface_t *VAR_0, winding_t *VAR_1, float VAR_2 ) {
 int VAR_3;
 int VAR_4;
 vec3_t VAR_5[2];
 const float VAR_6 = 0.1;
 int VAR_7, VAR_8;
 winding_t *VAR_9, *VAR_10;
 mapDrawSurface_t *VAR_11;

 if ( !VAR_1 ) {
  return;
 }
 if ( VAR_1->numpoints < 3 ) {
  FUNC_5( "SubdivideDrawSurf: Bad w->numpoints" );
 }

 FUNC_1( VAR_5[0], VAR_5[1] );
 for ( VAR_3 = 0 ; VAR_3 < VAR_1->numpoints ; VAR_3++ ) {
  FUNC_0( VAR_1->p[VAR_3], VAR_5[0], VAR_5[1] );
 }

 for ( VAR_4 = 0 ; VAR_4 < 3 ; VAR_4++ ) {
  vec3_t VAR_12 = { 0, 0, 0 };
  vec3_t VAR_13 = { 0, 0, 0 };
  float VAR_14;

  VAR_7 = FUNC_7( VAR_5[0][VAR_4] / VAR_2 ) * VAR_2;
  VAR_8 = FUNC_6( VAR_5[1][VAR_4] / VAR_2 ) * VAR_2;

  VAR_12[VAR_4] = VAR_7 + VAR_2;
  VAR_13[VAR_4] = -1;

  VAR_14 = FUNC_3( VAR_12, VAR_13 );


  if ( VAR_8 - VAR_7 > VAR_2 ) {

   FUNC_2( VAR_1, VAR_13, VAR_14, VAR_6, &VAR_9, &VAR_10 );


   if ( !VAR_9 ) {
    VAR_1 = VAR_10;
   } else if ( !VAR_10 ) {
    VAR_1 = VAR_9;
   } else {
    FUNC_8( VAR_0, VAR_9, VAR_2 );
    FUNC_8( VAR_0, VAR_10, VAR_2 );

    return;
   }
  }
 }


 VAR_11 = FUNC_4( VAR_0->mapBrush, VAR_0->side, VAR_1 );
 VAR_11->fogNum = VAR_0->fogNum;
}
