
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lightmapVecs; int lightmapOrigin; int fogNum; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_8__ {int * lightmapVecs; int lightmapOrigin; int fogNum; int shaderNum; int surfaceType; } ;
typedef TYPE_3__ dsurface_t ;
struct TYPE_6__ {int shader; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__* VAR_2 ;
 size_t VAR_3 ;

void FUNC_3( mapDrawSurface_t *VAR_4 ) {
 dsurface_t *VAR_5;

 if ( VAR_3 == VAR_0 ) {
  FUNC_1( "MAX_MAP_DRAW_SURFS" );
 }
 VAR_5 = &VAR_2[ VAR_3 ];
 VAR_3++;

 VAR_5->surfaceType = VAR_1;
 VAR_5->shaderNum = FUNC_0( VAR_4->shaderInfo->shader );
 VAR_5->fogNum = VAR_4->fogNum;

 FUNC_2( VAR_4->lightmapOrigin, VAR_5->lightmapOrigin );
 FUNC_2( VAR_4->lightmapVecs[0], VAR_5->lightmapVecs[0] );
 FUNC_2( VAR_4->lightmapVecs[2], VAR_5->lightmapVecs[2] );
}
