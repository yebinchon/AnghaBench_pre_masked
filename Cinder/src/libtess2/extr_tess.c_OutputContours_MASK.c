
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__* anEdge; int inside; struct TYPE_14__* next; } ;
struct TYPE_13__ {struct TYPE_13__* Lnext; TYPE_2__* Org; } ;
struct TYPE_12__ {TYPE_6__ fHead; } ;
struct TYPE_9__ {int userData; scalar_t__ (* memalloc ) (int ,int) ;} ;
struct TYPE_11__ {int vertexCount; int elementCount; int* elements; int * vertices; TYPE_1__ alloc; } ;
struct TYPE_10__ {int * coords; } ;
typedef TYPE_3__ TESStesselator ;
typedef int TESSreal ;
typedef TYPE_4__ TESSmesh ;
typedef int TESSindex ;
typedef TYPE_5__ TESShalfEdge ;
typedef TYPE_6__ TESSface ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

void FUNC_2( TESStesselator *VAR_0, TESSmesh *VAR_1, int VAR_2 )
{
 TESSface *VAR_3 = 0;
 TESShalfEdge *VAR_4 = 0;
 TESShalfEdge *VAR_5 = 0;
 TESSreal *VAR_6 = 0;
 TESSindex *VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;

 VAR_0->vertexCount = 0;
 VAR_0->elementCount = 0;

 for ( VAR_3 = VAR_1->fHead.next; VAR_3 != &VAR_1->fHead; VAR_3 = VAR_3->next )
 {
  if ( !VAR_3->inside ) continue;

  VAR_5 = VAR_4 = VAR_3->anEdge;
  do
  {
   ++VAR_0->vertexCount;
   VAR_4 = VAR_4->Lnext;
  }
  while ( VAR_4 != VAR_5 );

  ++VAR_0->elementCount;
 }

 VAR_0->elements = (TESSindex*)VAR_0->alloc.memalloc( VAR_0->alloc.userData,
               sizeof(TESSindex) * VAR_0->elementCount * 2 );
 VAR_0->vertices = (TESSreal*)VAR_0->alloc.memalloc( VAR_0->alloc.userData,
              sizeof(TESSreal) * VAR_0->vertexCount * VAR_2 );

 VAR_6 = VAR_0->vertices;
 VAR_7 = VAR_0->elements;

 VAR_8 = 0;

 for ( VAR_3 = VAR_1->fHead.next; VAR_3 != &VAR_1->fHead; VAR_3 = VAR_3->next )
 {
  if ( !VAR_3->inside ) continue;

  VAR_9 = 0;
  VAR_5 = VAR_4 = VAR_3->anEdge;
  do
  {
   *VAR_6++ = VAR_4->Org->coords[0];
   *VAR_6++ = VAR_4->Org->coords[1];
   if ( VAR_2 > 2 )
    *VAR_6++ = VAR_4->Org->coords[2];
   ++VAR_9;
   VAR_4 = VAR_4->Lnext;
  }
  while ( VAR_4 != VAR_5 );

  VAR_7[0] = VAR_8;
  VAR_7[1] = VAR_9;
  VAR_7 += 2;

  VAR_8 += VAR_9;
 }
}
