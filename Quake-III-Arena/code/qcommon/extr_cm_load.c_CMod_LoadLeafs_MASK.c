
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_7__ {int numLeafSurfaces; int firstLeafSurface; int numLeafBrushes; int firstLeafBrush; int area; int cluster; } ;
typedef TYPE_2__ dleaf_t ;
struct TYPE_8__ {scalar_t__ cluster; int area; void* numLeafSurfaces; void* firstLeafSurface; void* numLeafBrushes; void* firstLeafBrush; } ;
typedef TYPE_3__ cLeaf_t ;
struct TYPE_9__ {int numLeafs; scalar_t__ numClusters; int numAreas; void* areaPortals; void* areas; TYPE_3__* leafs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 void* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 TYPE_4__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_3 (lump_t *VAR_5)
{
 int VAR_6;
 cLeaf_t *VAR_7;
 dleaf_t *VAR_8;
 int VAR_9;

 VAR_8 = (void *)(VAR_3 + VAR_5->fileofs);
 if (VAR_5->filelen % sizeof(*VAR_8))
  FUNC_0 (VAR_1, "MOD_LoadBmodel: funny lump size");
 VAR_9 = VAR_5->filelen / sizeof(*VAR_8);

 if (VAR_9 < 1)
  FUNC_0 (VAR_1, "Map with no leafs");

 VAR_2.leafs = FUNC_1( ( VAR_0 + VAR_9 ) * sizeof( *VAR_2.leafs ), VAR_4 );
 VAR_2.numLeafs = VAR_9;

 VAR_7 = VAR_2.leafs;
 for ( VAR_6=0 ; VAR_6<VAR_9 ; VAR_6++, VAR_8++, VAR_7++)
 {
  VAR_7->cluster = FUNC_2 (VAR_8->cluster);
  VAR_7->area = FUNC_2 (VAR_8->area);
  VAR_7->firstLeafBrush = FUNC_2 (VAR_8->firstLeafBrush);
  VAR_7->numLeafBrushes = FUNC_2 (VAR_8->numLeafBrushes);
  VAR_7->firstLeafSurface = FUNC_2 (VAR_8->firstLeafSurface);
  VAR_7->numLeafSurfaces = FUNC_2 (VAR_8->numLeafSurfaces);

  if (VAR_7->cluster >= VAR_2.numClusters)
   VAR_2.numClusters = VAR_7->cluster + 1;
  if (VAR_7->area >= VAR_2.numAreas)
   VAR_2.numAreas = VAR_7->area + 1;
 }

 VAR_2.areas = FUNC_1( VAR_2.numAreas * sizeof( *VAR_2.areas ), VAR_4 );
 VAR_2.areaPortals = FUNC_1( VAR_2.numAreas * VAR_2.numAreas * sizeof( *VAR_2.areaPortals ), VAR_4 );
}
