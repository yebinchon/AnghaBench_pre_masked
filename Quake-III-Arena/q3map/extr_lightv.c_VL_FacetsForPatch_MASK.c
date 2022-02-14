
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int widthtable ;
struct TYPE_24__ {int lightmapSampleSize; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_25__ {scalar_t__ width; scalar_t__ height; int * verts; } ;
typedef TYPE_2__ mesh_t ;
struct TYPE_26__ {int numFacets; TYPE_5__* facets; TYPE_1__* shader; int trisoup; int patch; TYPE_2__* detailMesh; } ;
typedef TYPE_3__ lsurfaceTest_t ;
typedef int heighttable ;
struct TYPE_27__ {scalar_t__ patchWidth; scalar_t__ patchHeight; size_t firstVert; scalar_t__ lightmapNum; scalar_t__ lightmapWidth; scalar_t__ lightmapHeight; } ;
typedef TYPE_4__ dsurface_t ;
typedef int drawVert_t ;
struct TYPE_28__ {int x; int y; int width; int height; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__) ;
 int FUNC_3 (TYPE_2__) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__,int,int) ;
 TYPE_2__* FUNC_6 (TYPE_2__*,int,int,int*,int*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_1__*,TYPE_5__*,int *,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*,TYPE_1__*,TYPE_5__*,int *,int *,int *,int *) ;
 int * VAR_1 ;
 TYPE_5__* FUNC_9 (int) ;
 int FUNC_10 (int*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_11( dsurface_t *VAR_5, int VAR_6, shaderInfo_t *VAR_7, lsurfaceTest_t *VAR_8 ) {
 int VAR_9, VAR_10, VAR_11, VAR_12;
 drawVert_t *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 int VAR_17, VAR_18;
 mesh_t VAR_19;
 mesh_t *VAR_20, *VAR_21, *VAR_22;
 int VAR_23[VAR_0], VAR_24[VAR_0];

 VAR_19.width = VAR_5->patchWidth;
 VAR_19.height = VAR_5->patchHeight;
 VAR_19.verts = &VAR_1[ VAR_5->firstVert ];

 VAR_22 = FUNC_5( VAR_19, 8, 999 );
 FUNC_3( *VAR_22 );
 FUNC_2( *VAR_22 );

 VAR_20 = FUNC_4( VAR_22 );
 FUNC_1(VAR_22);




 VAR_18 = VAR_4;
 if (VAR_7->lightmapSampleSize)
  VAR_18 = VAR_7->lightmapSampleSize;

 if ( VAR_5->lightmapNum >= 0 ) {

  VAR_21 = FUNC_6( VAR_20, VAR_18, VAR_0, VAR_23, VAR_24);
  VAR_8->detailMesh = VAR_21;




  if ( VAR_21->width != VAR_5->lightmapWidth || VAR_21->height != VAR_5->lightmapHeight ) {
   FUNC_0( "Mesh lightmap miscount");
  }
 }
 else {
  VAR_8->detailMesh = ((void*)0);
  FUNC_10(VAR_23, 0, sizeof(VAR_23));
  FUNC_10(VAR_24, 0, sizeof(VAR_24));
 }

 VAR_8->patch = VAR_3;
 VAR_8->trisoup = VAR_2;
 VAR_8->numFacets = ( VAR_20->width - 1 ) * ( VAR_20->height - 1 ) * 2;
 VAR_8->facets = FUNC_9( sizeof( VAR_8->facets[0] ) * VAR_8->numFacets );
 VAR_8->shader = VAR_7;

 VAR_17 = 0;
 VAR_11 = 0;
 for ( VAR_9 = 0 ; VAR_9 < VAR_20->width - 1 ; VAR_9++ ) {
  VAR_12 = 0;
  for ( VAR_10 = 0 ; VAR_10 < VAR_20->height - 1 ; VAR_10++ ) {

   VAR_13 = VAR_20->verts + VAR_10 * VAR_20->width + VAR_9;
   VAR_14 = VAR_13 + 1;
   VAR_15 = VAR_13 + VAR_20->width + 1;
   VAR_16 = VAR_13 + VAR_20->width;

   if ( FUNC_8( VAR_5, VAR_7, &VAR_8->facets[VAR_17], VAR_13, VAR_16, VAR_15, VAR_14 ) ) {
    VAR_8->facets[VAR_17].x = VAR_11;
    VAR_8->facets[VAR_17].y = VAR_12;
    VAR_8->facets[VAR_17].width = VAR_23[VAR_9];
    VAR_8->facets[VAR_17].height = VAR_24[VAR_10];
    VAR_17++;
   } else {
    if (FUNC_7( VAR_5, VAR_7, &VAR_8->facets[VAR_17], VAR_13, VAR_16, VAR_15 )) {
     VAR_8->facets[VAR_17].x = VAR_11;
     VAR_8->facets[VAR_17].y = VAR_12;
     VAR_8->facets[VAR_17].width = VAR_23[VAR_9];
     VAR_8->facets[VAR_17].height = VAR_24[VAR_10];
     VAR_17++;
    }
    if (FUNC_7( VAR_5, VAR_7, &VAR_8->facets[VAR_17], VAR_13, VAR_15, VAR_14 )) {
     VAR_8->facets[VAR_17].x = VAR_11;
     VAR_8->facets[VAR_17].y = VAR_12;
     VAR_8->facets[VAR_17].width = VAR_23[VAR_9];
     VAR_8->facets[VAR_17].height = VAR_24[VAR_10];
     VAR_17++;
    }
   }
   VAR_12 += VAR_24[VAR_10];
  }
  VAR_11 += VAR_23[VAR_9];
 }
 VAR_8->numFacets = VAR_17;

 FUNC_1(VAR_20);
}
