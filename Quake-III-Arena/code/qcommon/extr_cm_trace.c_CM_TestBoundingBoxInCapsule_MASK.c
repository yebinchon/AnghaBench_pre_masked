
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_7__ {double radius; double halfheight; int offset; int use; } ;
struct TYPE_8__ {double* start; double* end; int * size; TYPE_1__ sphere; } ;
typedef TYPE_2__ traceWork_t ;
struct TYPE_9__ {int leaf; } ;
typedef TYPE_3__ cmodel_t ;
typedef int clipHandle_t ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ,double*,double*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int ,int ,int ,double) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_5( traceWork_t *VAR_2, clipHandle_t VAR_3 ) {
 vec3_t VAR_4, VAR_5, VAR_6, VAR_7[2];
 clipHandle_t VAR_8;
 cmodel_t *VAR_9;
 int VAR_10;


 FUNC_1(VAR_3, VAR_4, VAR_5);


 for ( VAR_10 = 0 ; VAR_10 < 3 ; VAR_10++ ) {
  VAR_6[VAR_10] = ( VAR_4[VAR_10] + VAR_5[VAR_10] ) * 0.5;
  VAR_7[0][VAR_10] = VAR_4[VAR_10] - VAR_6[VAR_10];
  VAR_7[1][VAR_10] = VAR_5[VAR_10] - VAR_6[VAR_10];
  VAR_2->start[VAR_10] -= VAR_6[VAR_10];
  VAR_2->end[VAR_10] -= VAR_6[VAR_10];
 }


 VAR_2->sphere.use = VAR_1;
 VAR_2->sphere.radius = ( VAR_7[1][0] > VAR_7[1][2] ) ? VAR_7[1][2]: VAR_7[1][0];
 VAR_2->sphere.halfheight = VAR_7[1][2];
 FUNC_4( VAR_2->sphere.offset, 0, 0, VAR_7[1][2] - VAR_2->sphere.radius );


 VAR_8 = FUNC_2(VAR_2->size[0], VAR_2->size[1], VAR_0);

 VAR_9 = FUNC_0( VAR_8 );
 FUNC_3( VAR_2, &VAR_9->leaf );
}
