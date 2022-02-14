
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numFacets; int * facets; int * shader; int patch; } ;
typedef TYPE_1__ surfaceTest_t ;
typedef int shaderInfo_t ;
struct TYPE_6__ {int numIndexes; int firstIndex; int firstVert; } ;
typedef TYPE_2__ dsurface_t ;
typedef int drawVert_t ;


 scalar_t__ FUNC_0 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int *,int *) ;
 int* VAR_0 ;
 int * VAR_1 ;
 int * FUNC_2 (int) ;
 int VAR_2 ;

void FUNC_3( dsurface_t *VAR_3, shaderInfo_t *VAR_4, surfaceTest_t *VAR_5 ) {
 int VAR_6;
 drawVert_t *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_5->patch = VAR_2;
 VAR_5->numFacets = VAR_3->numIndexes / 3;
 VAR_5->facets = FUNC_2( sizeof( VAR_5->facets[0] ) * VAR_5->numFacets );
 VAR_5->shader = VAR_4;

 VAR_11 = 0;
 for ( VAR_6 = 0 ; VAR_6 < VAR_5->numFacets ; VAR_6++ ) {
  VAR_12 = VAR_0[ VAR_3->firstIndex + VAR_6*3 ];
  VAR_13 = VAR_0[ VAR_3->firstIndex + VAR_6*3 + 1 ];
  VAR_14 = VAR_0[ VAR_3->firstIndex + VAR_6*3 + 2 ];

  VAR_7 = &VAR_1[ VAR_3->firstVert + VAR_12 ];
  VAR_8 = &VAR_1[ VAR_3->firstVert + VAR_13 ];
  VAR_9 = &VAR_1[ VAR_3->firstVert + VAR_14 ];


  if ( VAR_6 != VAR_5->numFacets - 1 ) {
   VAR_15 = VAR_0[ VAR_3->firstIndex + VAR_6*3 + 3 ];
   VAR_16 = VAR_0[ VAR_3->firstIndex + VAR_6*3 + 4 ];
   VAR_17 = VAR_0[ VAR_3->firstIndex + VAR_6*3 + 5 ];
   if ( VAR_15 == VAR_14 && VAR_16 == VAR_13 ) {
    VAR_10 = &VAR_1[ VAR_3->firstVert + VAR_17 ];
    if ( FUNC_1( &VAR_5->facets[VAR_11], VAR_7, VAR_8, VAR_10, VAR_9 ) ) {
     VAR_11++;
     VAR_6++;
     continue;
    }
   }
  }

  if (FUNC_0( &VAR_5->facets[VAR_11], VAR_7, VAR_8, VAR_9 ))
   VAR_11++;
 }


 VAR_5->numFacets = VAR_11;
}
