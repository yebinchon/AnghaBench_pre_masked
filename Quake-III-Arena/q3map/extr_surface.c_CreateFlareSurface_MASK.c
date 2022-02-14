
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int numVerts; int * lightmapVecs; TYPE_2__* shaderInfo; int lightmapOrigin; TYPE_1__* verts; int flareSurface; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_7__ {char* flareShader; int color; } ;
struct TYPE_6__ {int xyz; } ;


 TYPE_3__* FUNC_0 () ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (int ,double,int ) ;
 int VAR_0 ;

void FUNC_7( mapDrawSurface_t *VAR_1 ) {
 mapDrawSurface_t *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0();

 if ( VAR_1->shaderInfo->flareShader[0] ) {
  VAR_2->shaderInfo = FUNC_1( VAR_1->shaderInfo->flareShader );
 } else {
  VAR_2->shaderInfo = FUNC_1( "flareshader" );
 }
 VAR_2->flareSurface = VAR_0;
 FUNC_4( VAR_1->lightmapVecs[2], VAR_2->lightmapVecs[2] );


 FUNC_3( VAR_2->lightmapOrigin );
 for ( VAR_3 = 0 ; VAR_3 < VAR_1->numVerts ; VAR_3++ ) {
  FUNC_2( VAR_2->lightmapOrigin, VAR_1->verts[VAR_3].xyz, VAR_2->lightmapOrigin );
 }
 FUNC_6( VAR_2->lightmapOrigin, 1.0/VAR_1->numVerts, VAR_2->lightmapOrigin );

 FUNC_5( VAR_2->lightmapOrigin, 2, VAR_2->lightmapVecs[2], VAR_2->lightmapOrigin );

 FUNC_4( VAR_1->shaderInfo->color, VAR_2->lightmapVecs[0] );


}
