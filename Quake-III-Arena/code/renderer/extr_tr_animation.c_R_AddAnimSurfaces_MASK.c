
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int trRefEntity_t ;
typedef int shader_t ;
struct TYPE_7__ {int ofsEnd; int shaderIndex; } ;
typedef TYPE_2__ md4Surface_t ;
struct TYPE_8__ {int ofsSurfaces; int numSurfaces; } ;
typedef TYPE_3__ md4LOD_t ;
struct TYPE_9__ {int ofsLODs; } ;
typedef TYPE_4__ md4Header_t ;
typedef int byte ;
struct TYPE_10__ {TYPE_1__* currentModel; } ;
struct TYPE_6__ {TYPE_4__* md4; } ;


 int FUNC_0 (void*,int *,int ,int ) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;

void FUNC_2( trRefEntity_t *VAR_2 ) {
 md4Header_t *VAR_3;
 md4Surface_t *VAR_4;
 md4LOD_t *VAR_5;
 shader_t *VAR_6;
 int VAR_7;

 VAR_3 = VAR_1.currentModel->md4;
 VAR_5 = (md4LOD_t *)( (byte *)VAR_3 + VAR_3->ofsLODs );

 VAR_4 = (md4Surface_t *)( (byte *)VAR_5 + VAR_5->ofsSurfaces );
 for ( VAR_7 = 0 ; VAR_7 < VAR_5->numSurfaces ; VAR_7++ ) {
  VAR_6 = FUNC_1( VAR_4->shaderIndex );
  FUNC_0( (void *)VAR_4, VAR_6, 0 , VAR_0 );
  VAR_4 = (md4Surface_t *)( (byte *)VAR_4 + VAR_4->ofsEnd );
 }
}
