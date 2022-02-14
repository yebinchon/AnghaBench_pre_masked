
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_6__ {float radius; float halfheight; int offset; } ;
struct TYPE_7__ {scalar_t__** bounds; scalar_t__* start; scalar_t__* end; TYPE_1__ sphere; } ;
typedef TYPE_2__ traceWork_t ;
typedef int clipHandle_t ;


 int FUNC_0 (int ,double*,double*) ;
 int FUNC_1 (TYPE_2__*,double*,float,double*,double*) ;
 int FUNC_2 (TYPE_2__*,double*,float,float,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__*,int ,double*) ;
 int FUNC_4 (double*,double*) ;
 int FUNC_5 (scalar_t__*,int ,double*) ;

void FUNC_6( traceWork_t *VAR_1, clipHandle_t VAR_2 ) {
 int VAR_3;
 vec3_t VAR_4, VAR_5;
 vec3_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 vec3_t VAR_12, VAR_13[2];
 float VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 FUNC_0(VAR_2, VAR_4, VAR_5);

 if ( VAR_1->bounds[0][0] > VAR_5[0] + VAR_0
  || VAR_1->bounds[0][1] > VAR_5[1] + VAR_0
  || VAR_1->bounds[0][2] > VAR_5[2] + VAR_0
  || VAR_1->bounds[1][0] < VAR_4[0] - VAR_0
  || VAR_1->bounds[1][1] < VAR_4[1] - VAR_0
  || VAR_1->bounds[1][2] < VAR_4[2] - VAR_0
  ) {
  return;
 }

 FUNC_3(VAR_1->start, VAR_1->sphere.offset, VAR_8);
 FUNC_5(VAR_1->start, VAR_1->sphere.offset, VAR_9);
 FUNC_3(VAR_1->end, VAR_1->sphere.offset, VAR_10);
 FUNC_5(VAR_1->end, VAR_1->sphere.offset, VAR_11);


 for ( VAR_3 = 0 ; VAR_3 < 3 ; VAR_3++ ) {
  VAR_12[VAR_3] = ( VAR_4[VAR_3] + VAR_5[VAR_3] ) * 0.5;
  VAR_13[0][VAR_3] = VAR_4[VAR_3] - VAR_12[VAR_3];
  VAR_13[1][VAR_3] = VAR_5[VAR_3] - VAR_12[VAR_3];
 }
 VAR_15 = VAR_13[ 1 ][ 0 ];
 VAR_16 = VAR_13[ 1 ][ 2 ];
 VAR_14 = ( VAR_15 > VAR_16 ) ? VAR_16 : VAR_15;
 VAR_17 = VAR_16 - VAR_14;
 FUNC_4(VAR_12, VAR_6);
 VAR_6[2] += VAR_17;
 FUNC_4(VAR_12, VAR_7);
 VAR_7[2] -= VAR_17;

 VAR_14 += VAR_1->sphere.radius;

 if ( VAR_1->start[0] != VAR_1->end[0] || VAR_1->start[1] != VAR_1->end[1] ) {

  VAR_18 = VAR_16 + VAR_1->sphere.halfheight - VAR_14;

  if ( VAR_18 > 0 ) {

   FUNC_2(VAR_1, VAR_12, VAR_14, VAR_18, VAR_1->start, VAR_1->end);
  }
 }

 FUNC_1(VAR_1, VAR_6, VAR_14, VAR_9, VAR_11);
 FUNC_1(VAR_1, VAR_7, VAR_14, VAR_8, VAR_10);
}
