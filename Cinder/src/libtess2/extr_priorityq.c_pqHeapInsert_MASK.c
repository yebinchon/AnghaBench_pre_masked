
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {size_t node; size_t handle; int key; } ;
struct TYPE_11__ {int size; int max; size_t freeList; scalar_t__ initialized; TYPE_3__* handles; TYPE_3__* nodes; } ;
struct TYPE_10__ {int userData; scalar_t__ (* memrealloc ) (int ,TYPE_3__*,size_t) ;} ;
typedef TYPE_1__ TESSalloc ;
typedef TYPE_2__ PriorityQHeap ;
typedef TYPE_3__ PQnode ;
typedef int PQkey ;
typedef TYPE_3__ PQhandleElem ;
typedef size_t PQhandle ;


 int FUNC_0 (TYPE_2__*,int) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,size_t) ;
 scalar_t__ FUNC_3 (int ,TYPE_3__*,size_t) ;

PQhandle FUNC_4( TESSalloc* VAR_1, PriorityQHeap *VAR_2, PQkey VAR_3 )
{
 int VAR_4;
 PQhandle VAR_5;

 VAR_4 = ++ VAR_2->size;
 if( (VAR_4*2) > VAR_2->max ) {
  if (!VAR_1->memrealloc)
  {
   return VAR_0;
  }
  else
  {
   PQnode *VAR_6= VAR_2->nodes;
   PQhandleElem *VAR_7= VAR_2->handles;


   VAR_2->max <<= 1;
   VAR_2->nodes = (PQnode *)VAR_1->memrealloc( VAR_1->userData, VAR_2->nodes,
    (size_t)((VAR_2->max + 1) * sizeof( VAR_2->nodes[0] )));
   if (VAR_2->nodes == ((void*)0)) {
    VAR_2->nodes = VAR_6;
    return VAR_0;
   }
   VAR_2->handles = (PQhandleElem *)VAR_1->memrealloc( VAR_1->userData, VAR_2->handles,
    (size_t) ((VAR_2->max + 1) * sizeof( VAR_2->handles[0] )));
   if (VAR_2->handles == ((void*)0)) {
    VAR_2->handles = VAR_7;
    return VAR_0;
   }
  }
 }

 if( VAR_2->freeList == 0 ) {
  VAR_5 = VAR_4;
 } else {
  VAR_5 = VAR_2->freeList;
  VAR_2->freeList = VAR_2->handles[VAR_5].node;
 }

 VAR_2->nodes[VAR_4].handle = VAR_5;
 VAR_2->handles[VAR_5].node = VAR_4;
 VAR_2->handles[VAR_5].key = VAR_3;

 if( VAR_2->initialized ) {
  FUNC_0( VAR_2, VAR_4 );
 }
 FUNC_1(VAR_5 != VAR_0);
 return VAR_5;
}
