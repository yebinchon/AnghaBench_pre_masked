
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int cluster; void* nummarksurfaces; scalar_t__ firstmarksurface; void* area; void** maxs; void** mins; struct TYPE_11__** children; int contents; scalar_t__ plane; } ;
typedef TYPE_1__ mnode_t ;
struct TYPE_12__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_2__ lump_t ;
struct TYPE_13__ {int * children; int planeNum; int * maxs; int * mins; } ;
typedef TYPE_3__ dnode_t ;
struct TYPE_14__ {int numLeafSurfaces; int firstLeafSurface; int area; int cluster; int * maxs; int * mins; } ;
typedef TYPE_4__ dleaf_t ;
struct TYPE_16__ {TYPE_1__* (* Hunk_Alloc ) (int,int ) ;int (* Error ) (int ,char*,int ) ;} ;
struct TYPE_15__ {int numnodes; int numDecisionNodes; int numClusters; TYPE_1__* nodes; scalar_t__ marksurfaces; scalar_t__ planes; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 int FUNC_2 (int ,char*,int ) ;
 TYPE_1__* FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4 (lump_t *VAR_6, lump_t *VAR_7) {
 int VAR_8, VAR_9, VAR_10;
 dnode_t *VAR_11;
 dleaf_t *VAR_12;
 mnode_t *VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = (void *)(VAR_2 + VAR_6->fileofs);
 if (VAR_6->filelen % sizeof(dnode_t) ||
  VAR_7->filelen % sizeof(dleaf_t) ) {
  VAR_4.Error (VAR_1, "LoadMap: funny lump size in %s",VAR_5.name);
 }
 VAR_14 = VAR_6->filelen / sizeof(dnode_t);
 VAR_15 = VAR_7->filelen / sizeof(dleaf_t);

 VAR_13 = VAR_4.Hunk_Alloc ( (VAR_14 + VAR_15) * sizeof(*VAR_13), VAR_3);

 VAR_5.nodes = VAR_13;
 VAR_5.numnodes = VAR_14 + VAR_15;
 VAR_5.numDecisionNodes = VAR_14;


 for ( VAR_8=0 ; VAR_8<VAR_14; VAR_8++, VAR_11++, VAR_13++)
 {
  for (VAR_9=0 ; VAR_9<3 ; VAR_9++)
  {
   VAR_13->mins[VAR_9] = FUNC_0 (VAR_11->mins[VAR_9]);
   VAR_13->maxs[VAR_9] = FUNC_0 (VAR_11->maxs[VAR_9]);
  }

  VAR_10 = FUNC_0(VAR_11->planeNum);
  VAR_13->plane = VAR_5.planes + VAR_10;

  VAR_13->contents = VAR_0;

  for (VAR_9=0 ; VAR_9<2 ; VAR_9++)
  {
   VAR_10 = FUNC_0 (VAR_11->children[VAR_9]);
   if (VAR_10 >= 0)
    VAR_13->children[VAR_9] = VAR_5.nodes + VAR_10;
   else
    VAR_13->children[VAR_9] = VAR_5.nodes + VAR_14 + (-1 - VAR_10);
  }
 }


 VAR_12 = (void *)(VAR_2 + VAR_7->fileofs);
 for ( VAR_8=0 ; VAR_8<VAR_15 ; VAR_8++, VAR_12++, VAR_13++)
 {
  for (VAR_9=0 ; VAR_9<3 ; VAR_9++)
  {
   VAR_13->mins[VAR_9] = FUNC_0 (VAR_12->mins[VAR_9]);
   VAR_13->maxs[VAR_9] = FUNC_0 (VAR_12->maxs[VAR_9]);
  }

  VAR_13->cluster = FUNC_0(VAR_12->cluster);
  VAR_13->area = FUNC_0(VAR_12->area);

  if ( VAR_13->cluster >= VAR_5.numClusters ) {
   VAR_5.numClusters = VAR_13->cluster + 1;
  }

  VAR_13->firstmarksurface = VAR_5.marksurfaces +
   FUNC_0(VAR_12->firstLeafSurface);
  VAR_13->nummarksurfaces = FUNC_0(VAR_12->numLeafSurfaces);
 }


 FUNC_1 (VAR_5.nodes, ((void*)0));
}
