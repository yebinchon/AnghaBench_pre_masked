
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int shaderInfo_t ;
struct TYPE_7__ {int numFacets; int * facets; int * shader; void* trisoup; void* patch; } ;
typedef TYPE_1__ lsurfaceTest_t ;
struct TYPE_8__ {scalar_t__ surfaceType; int numIndexes; int firstIndex; int firstVert; } ;
typedef TYPE_2__ dsurface_t ;
typedef int drawVert_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *,int *,int *,int *,int *) ;
 int* VAR_1 ;
 int * VAR_2 ;
 int * FUNC_2 (int) ;
 void* VAR_3 ;
 void* VAR_4 ;

void FUNC_3( dsurface_t *VAR_5, shaderInfo_t *VAR_6, lsurfaceTest_t *VAR_7 ) {
 int VAR_8;
 drawVert_t *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 int VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_7->patch = VAR_3;
 if (VAR_5->surfaceType == VAR_0)
  VAR_7->trisoup = VAR_4;
 else
  VAR_7->trisoup = VAR_3;
 VAR_7->numFacets = VAR_5->numIndexes / 3;
 VAR_7->facets = FUNC_2( sizeof( VAR_7->facets[0] ) * VAR_7->numFacets );
 VAR_7->shader = VAR_6;

 VAR_13 = 0;
 for ( VAR_8 = 0 ; VAR_8 < VAR_7->numFacets ; VAR_8++ ) {
  VAR_14 = VAR_1[ VAR_5->firstIndex + VAR_8*3 ];
  VAR_15 = VAR_1[ VAR_5->firstIndex + VAR_8*3 + 1 ];
  VAR_16 = VAR_1[ VAR_5->firstIndex + VAR_8*3 + 2 ];

  VAR_9 = &VAR_2[ VAR_5->firstVert + VAR_14 ];
  VAR_10 = &VAR_2[ VAR_5->firstVert + VAR_15 ];
  VAR_11 = &VAR_2[ VAR_5->firstVert + VAR_16 ];


  if ( VAR_8 != VAR_7->numFacets - 1 ) {
   VAR_17 = VAR_1[ VAR_5->firstIndex + VAR_8*3 + 3 ];
   VAR_18 = VAR_1[ VAR_5->firstIndex + VAR_8*3 + 4 ];
   VAR_19 = VAR_1[ VAR_5->firstIndex + VAR_8*3 + 5 ];
   if ( VAR_17 == VAR_16 && VAR_18 == VAR_15 ) {
    VAR_12 = &VAR_2[ VAR_5->firstVert + VAR_19 ];
    if ( FUNC_1( VAR_5, VAR_6, &VAR_7->facets[VAR_13], VAR_9, VAR_10, VAR_12, VAR_11 ) ) {
     VAR_13++;
     VAR_8++;
     continue;
    }
   }
  }

  if (FUNC_0( VAR_5, VAR_6, &VAR_7->facets[VAR_13], VAR_9, VAR_10, VAR_11 )) {
   VAR_13++;
  }
 }


 VAR_7->numFacets = VAR_13;
}
