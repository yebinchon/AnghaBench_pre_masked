
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_12__ {float* start; float* end; TYPE_1__* trace; } ;
typedef TYPE_2__ traceWork_t ;
struct TYPE_13__ {int surfaceFlags; } ;
typedef TYPE_3__ shaderInfo_t ;
struct TYPE_14__ {int numBoundaries; float* surface; float** boundaries; } ;
typedef TYPE_4__ cFacet_t ;
struct TYPE_11__ {float hitFraction; int filter; } ;


 float FUNC_0 (float*,float*) ;
 float VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,TYPE_4__*,float*) ;
 int FUNC_2 (int ) ;

void FUNC_3( traceWork_t *VAR_2, shaderInfo_t *VAR_3, cFacet_t *VAR_4 ) {
 int VAR_5;
 float VAR_6, VAR_7, VAR_8, VAR_9;
 vec3_t VAR_10;
 float VAR_11;


 if ( VAR_4->numBoundaries < 3 ) {
  return;
 }

 VAR_11 = VAR_4->surface[3];


 VAR_6 = FUNC_0( VAR_2->start, VAR_4->surface ) - VAR_11;
 if ( VAR_6 > -1 && VAR_6 < 1 ) {
  return;
 }
 VAR_7 = FUNC_0( VAR_2->end, VAR_4->surface ) - VAR_11;
 if ( VAR_7 > -1 && VAR_7 < 1 ) {
  return;
 }


 VAR_9 = ( VAR_6 - VAR_0 ) / ( VAR_6 - VAR_7 );
 if ( VAR_9 <= 0 ) {
  return;
 }
 if ( VAR_9 >= VAR_2->trace->hitFraction ) {
  return;
 }


 for ( VAR_5 = 0 ; VAR_5 < 3 ; VAR_5++ ) {
  VAR_10[VAR_5] = VAR_2->start[VAR_5] + VAR_9 * ( VAR_2->end[VAR_5] - VAR_2->start[VAR_5] );
 }


 for ( VAR_5 = 0 ; VAR_5 < VAR_4->numBoundaries ; VAR_5++ ) {

  VAR_11 = VAR_4->boundaries[VAR_5][3];

  VAR_8 = FUNC_0( VAR_10, VAR_4->boundaries[VAR_5] );
  if ( VAR_8 > VAR_11 + VAR_0 ) {
   break;
  }
 }

 if ( VAR_5 != VAR_4->numBoundaries ) {
  return;
 }




 if ( VAR_3->surfaceFlags & VAR_1 ) {
  FUNC_1( VAR_2, VAR_3, VAR_4, VAR_10 );
 } else {

  FUNC_2( VAR_2->trace->filter );
  VAR_2->trace->hitFraction = VAR_9;
 }



}
