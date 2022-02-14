
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int meshEdgeBucketSize; int meshVertexBucketSize; int meshFaceBucketSize; int dictNodeBucketSize; int regionBucketSize; int userData; scalar_t__ (* memalloc ) (int ,int) ;} ;
struct TYPE_7__ {scalar_t__ elementCount; scalar_t__ elements; scalar_t__ vertexCount; scalar_t__ vertices; int * mesh; TYPE_2__ alloc; int regionPool; int * callCombine; int windingRule; scalar_t__* bmax; scalar_t__* bmin; scalar_t__* normal; } ;
typedef TYPE_1__ TESStesselator ;
typedef TYPE_2__ TESSalloc ;
typedef int ActiveRegion ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int,int) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;

TESStesselator* FUNC_2( TESSalloc* VAR_3 )
{
 TESStesselator* VAR_4;

 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_1;





 VAR_4 = (TESStesselator *)VAR_3->memalloc( VAR_3->userData, sizeof( TESStesselator ));
 if ( VAR_4 == ((void*)0) ) {
  return 0;
 }
 VAR_4->alloc = *VAR_3;

 if (VAR_4->alloc.meshEdgeBucketSize == 0)
  VAR_4->alloc.meshEdgeBucketSize = 512;
 if (VAR_4->alloc.meshVertexBucketSize == 0)
  VAR_4->alloc.meshVertexBucketSize = 512;
 if (VAR_4->alloc.meshFaceBucketSize == 0)
  VAR_4->alloc.meshFaceBucketSize = 256;
 if (VAR_4->alloc.dictNodeBucketSize == 0)
  VAR_4->alloc.dictNodeBucketSize = 512;
 if (VAR_4->alloc.regionBucketSize == 0)
  VAR_4->alloc.regionBucketSize = 256;

 VAR_4->normal[0] = 0;
 VAR_4->normal[1] = 0;
 VAR_4->normal[2] = 0;

 VAR_4->bmin[0] = 0;
 VAR_4->bmin[1] = 0;
 VAR_4->bmax[0] = 0;
 VAR_4->bmax[1] = 0;

 VAR_4->windingRule = VAR_0;

 VAR_4->callCombine = &VAR_2;

 if (VAR_4->alloc.regionBucketSize < 16)
  VAR_4->alloc.regionBucketSize = 16;
 if (VAR_4->alloc.regionBucketSize > 4096)
  VAR_4->alloc.regionBucketSize = 4096;
 VAR_4->regionPool = FUNC_0( &VAR_4->alloc, "Regions",
           sizeof(ActiveRegion), VAR_4->alloc.regionBucketSize );


 VAR_4->mesh = ((void*)0);

 VAR_4->vertices = 0;
 VAR_4->vertexCount = 0;
 VAR_4->elements = 0;
 VAR_4->elementCount = 0;

 return VAR_4;
}
