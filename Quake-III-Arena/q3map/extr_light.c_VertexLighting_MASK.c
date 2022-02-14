
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
typedef int traceWork_t ;
typedef int qboolean ;
struct TYPE_5__ {int numVerts; int firstVert; scalar_t__ surfaceType; scalar_t__ patchWidth; int * lightmapVecs; } ;
typedef TYPE_1__ dsurface_t ;
struct TYPE_6__ {float* normal; float* color; int xyz; } ;
typedef TYPE_2__ drawVert_t ;


 int FUNC_0 (int ,float*,float*,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,float*) ;
 int FUNC_2 (float*,int,float*) ;
 TYPE_2__* VAR_1 ;

void FUNC_3( dsurface_t *VAR_2, qboolean VAR_3, qboolean VAR_4, float VAR_5, traceWork_t *VAR_6 ) {
 int VAR_7, VAR_8;
 drawVert_t *VAR_9;
 vec3_t VAR_10, VAR_11;
 float VAR_12;

 FUNC_1( VAR_2->lightmapVecs[2], VAR_11 );


 for ( VAR_7 = 0 ; VAR_7 < VAR_2->numVerts ; VAR_7++ ) {
  VAR_9 = &VAR_1[ VAR_2->firstVert + VAR_7 ];

  if ( VAR_2->patchWidth ) {
   FUNC_0( VAR_9->xyz, VAR_9->normal, VAR_10, VAR_3, VAR_4, VAR_6 );
  }
  else if (VAR_2->surfaceType == VAR_0) {
   FUNC_0( VAR_9->xyz, VAR_9->normal, VAR_10, VAR_3, VAR_4, VAR_6 );
  }
  else {
   FUNC_0( VAR_9->xyz, VAR_11, VAR_10, VAR_3, VAR_4, VAR_6 );
  }

  if (VAR_5 >= 0)
   FUNC_2(VAR_10, VAR_5, VAR_10);

  VAR_12 = VAR_10[0];
  if ( VAR_10[1] > VAR_12 ) {
   VAR_12 = VAR_10[1];
  }
  if ( VAR_10[2] > VAR_12 ) {
   VAR_12 = VAR_10[2];
  }
  if ( VAR_12 > 255 ) {
   FUNC_2( VAR_10, 255/VAR_12, VAR_10 );
  }


  for ( VAR_8 = 0 ; VAR_8 < 3 ; VAR_8++ ) {
   if ( VAR_10[VAR_8] > 255 ) {
    VAR_10[VAR_8] = 255;
   }
   VAR_9->color[VAR_8] = VAR_10[VAR_8];
  }




 }
}
