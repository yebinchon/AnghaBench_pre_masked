
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int numFacets; int * facets; int * shader; int patch; } ;
typedef TYPE_1__ surfaceTest_t ;
typedef int shaderInfo_t ;
struct TYPE_14__ {int width; int height; int * verts; } ;
typedef TYPE_2__ mesh_t ;
struct TYPE_15__ {int patchWidth; int patchHeight; size_t firstVert; } ;
typedef TYPE_3__ dsurface_t ;
typedef int drawVert_t ;


 scalar_t__ FUNC_0 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__) ;
 int FUNC_4 (TYPE_2__) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_2__,int,int) ;
 int * VAR_0 ;
 int * FUNC_7 (int) ;
 int VAR_1 ;

void FUNC_8( dsurface_t *VAR_2, shaderInfo_t *VAR_3, surfaceTest_t *VAR_4 ) {
 int VAR_5, VAR_6;
 drawVert_t *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;
 mesh_t VAR_12, *VAR_13, *VAR_14;

 VAR_12.width = VAR_2->patchWidth;
 VAR_12.height = VAR_2->patchHeight;
 VAR_12.verts = &VAR_0[ VAR_2->firstVert ];


 VAR_14 = FUNC_6( VAR_12, 8, 999 );
 FUNC_4( *VAR_14 );
 FUNC_3( *VAR_14 );

 VAR_13 = FUNC_5( VAR_14 );
 FUNC_2(VAR_14);

 VAR_4->patch = VAR_1;
 VAR_4->numFacets = ( VAR_13->width - 1 ) * ( VAR_13->height - 1 ) * 2;
 VAR_4->facets = FUNC_7( sizeof( VAR_4->facets[0] ) * VAR_4->numFacets );
 VAR_4->shader = VAR_3;

 VAR_11 = 0;
 for ( VAR_5 = 0 ; VAR_5 < VAR_13->width - 1 ; VAR_5++ ) {
  for ( VAR_6 = 0 ; VAR_6 < VAR_13->height - 1 ; VAR_6++ ) {

   VAR_7 = VAR_13->verts + VAR_6 * VAR_13->width + VAR_5;
   VAR_8 = VAR_7 + 1;
   VAR_9 = VAR_7 + VAR_13->width + 1;
   VAR_10 = VAR_7 + VAR_13->width;

   if ( FUNC_1( &VAR_4->facets[VAR_11], VAR_7, VAR_10, VAR_9, VAR_8 ) ) {
    VAR_11++;
   } else {
    if (FUNC_0( &VAR_4->facets[VAR_11], VAR_7, VAR_10, VAR_9 ))
     VAR_11++;
    if (FUNC_0( &VAR_4->facets[VAR_11], VAR_7, VAR_9, VAR_8 ))
     VAR_11++;
   }
  }
 }
 VAR_4->numFacets = VAR_11;
 FUNC_2(VAR_13);
}
