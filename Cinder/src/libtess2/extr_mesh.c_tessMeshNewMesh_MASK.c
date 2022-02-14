
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int meshEdgeBucketSize; int meshVertexBucketSize; int meshFaceBucketSize; int userData; scalar_t__ (* memalloc ) (int ,int) ;} ;
struct TYPE_12__ {void* inside; void* marked; int * trail; int * anEdge; struct TYPE_12__* prev; struct TYPE_12__* next; } ;
struct TYPE_11__ {int * activeRegion; scalar_t__ winding; int * Lface; int * Org; int * Lnext; int * Onext; struct TYPE_11__* Sym; struct TYPE_11__* next; } ;
struct TYPE_9__ {int * anEdge; struct TYPE_9__* prev; struct TYPE_9__* next; } ;
struct TYPE_10__ {TYPE_3__ eHeadSym; TYPE_3__ eHead; TYPE_4__ fHead; TYPE_1__ vHead; void* faceBucket; void* vertexBucket; void* edgeBucket; } ;
typedef TYPE_1__ TESSvertex ;
typedef TYPE_2__ TESSmesh ;
typedef TYPE_3__ TESShalfEdge ;
typedef TYPE_4__ TESSface ;
typedef TYPE_5__ TESSalloc ;
typedef int EdgePair ;


 void* VAR_0 ;
 void* FUNC_0 (TYPE_5__*,char*,int,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

TESSmesh *FUNC_2( TESSalloc* VAR_1 )
{
 TESSvertex *VAR_2;
 TESSface *VAR_3;
 TESShalfEdge *VAR_4;
 TESShalfEdge *VAR_5;
 TESSmesh *VAR_6 = (TESSmesh *)VAR_1->memalloc( VAR_1->userData, sizeof( TESSmesh ));
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }

 if (VAR_1->meshEdgeBucketSize < 16)
  VAR_1->meshEdgeBucketSize = 16;
 if (VAR_1->meshEdgeBucketSize > 4096)
  VAR_1->meshEdgeBucketSize = 4096;

 if (VAR_1->meshVertexBucketSize < 16)
  VAR_1->meshVertexBucketSize = 16;
 if (VAR_1->meshVertexBucketSize > 4096)
  VAR_1->meshVertexBucketSize = 4096;

 if (VAR_1->meshFaceBucketSize < 16)
  VAR_1->meshFaceBucketSize = 16;
 if (VAR_1->meshFaceBucketSize > 4096)
  VAR_1->meshFaceBucketSize = 4096;

 VAR_6->edgeBucket = FUNC_0( VAR_1, "Mesh Edges", sizeof(EdgePair), VAR_1->meshEdgeBucketSize );
 VAR_6->vertexBucket = FUNC_0( VAR_1, "Mesh Vertices", sizeof(TESSvertex), VAR_1->meshVertexBucketSize );
 VAR_6->faceBucket = FUNC_0( VAR_1, "Mesh Faces", sizeof(TESSface), VAR_1->meshFaceBucketSize );

 VAR_2 = &VAR_6->vHead;
 VAR_3 = &VAR_6->fHead;
 VAR_4 = &VAR_6->eHead;
 VAR_5 = &VAR_6->eHeadSym;

 VAR_2->next = VAR_2->prev = VAR_2;
 VAR_2->anEdge = ((void*)0);

 VAR_3->next = VAR_3->prev = VAR_3;
 VAR_3->anEdge = ((void*)0);
 VAR_3->trail = ((void*)0);
 VAR_3->marked = VAR_0;
 VAR_3->inside = VAR_0;

 VAR_4->next = VAR_4;
 VAR_4->Sym = VAR_5;
 VAR_4->Onext = ((void*)0);
 VAR_4->Lnext = ((void*)0);
 VAR_4->Org = ((void*)0);
 VAR_4->Lface = ((void*)0);
 VAR_4->winding = 0;
 VAR_4->activeRegion = ((void*)0);

 VAR_5->next = VAR_5;
 VAR_5->Sym = VAR_4;
 VAR_5->Onext = ((void*)0);
 VAR_5->Lnext = ((void*)0);
 VAR_5->Org = ((void*)0);
 VAR_5->Lface = ((void*)0);
 VAR_5->winding = 0;
 VAR_5->activeRegion = ((void*)0);

 return VAR_6;
}
