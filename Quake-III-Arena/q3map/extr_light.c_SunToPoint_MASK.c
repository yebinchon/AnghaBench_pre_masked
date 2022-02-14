
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_5__ {scalar_t__* hit; int* filter; } ;
typedef TYPE_1__ trace_t ;
typedef int traceWork_t ;
struct TYPE_6__ {scalar_t__** bounds; } ;
typedef TYPE_2__ skyBrush_t ;


 int VAR_0 ;
 int FUNC_0 (int* const,int*,TYPE_1__*,int ,int *) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int* const,int,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;

void FUNC_3( const vec3_t VAR_9, traceWork_t *VAR_10, vec3_t VAR_11 ) {
 int VAR_12;
 trace_t VAR_13;
 skyBrush_t *VAR_14;
 vec3_t VAR_15;

 if ( !VAR_3 ) {
  FUNC_1( VAR_11 );
  return;
 }

 FUNC_2( VAR_9, VAR_0 * 2, VAR_7, VAR_15 );

 FUNC_0( VAR_9, VAR_15, &VAR_13, VAR_5, VAR_10 );


 for ( VAR_12 = 0 ; VAR_12 < VAR_3 ; VAR_12++) {
  VAR_14 = &VAR_6[ VAR_12 ];


  if ( VAR_13.hit[0] < VAR_14->bounds[0][0]
   || VAR_13.hit[0] > VAR_14->bounds[1][0]
   || VAR_13.hit[1] < VAR_14->bounds[0][1]
   || VAR_13.hit[1] > VAR_14->bounds[1][1]
   || VAR_13.hit[2] < VAR_14->bounds[0][2]
   || VAR_13.hit[2] > VAR_14->bounds[1][2] ) {
   continue;
  }



  FUNC_0( VAR_9, VAR_13.hit, &VAR_13, VAR_5, VAR_10 );


  if ( VAR_4 == 1 ) {
   VAR_1++;
  }
  VAR_11[0] = VAR_13.filter[0] * VAR_8[0];
  VAR_11[1] = VAR_13.filter[1] * VAR_8[1];
  VAR_11[2] = VAR_13.filter[2] * VAR_8[2];

  return;
 }

 if ( VAR_4 == 1 ) {
  VAR_2++;
 }

 FUNC_1( VAR_11 );
}
