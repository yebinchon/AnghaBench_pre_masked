
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int node; int * key; } ;
struct TYPE_8__ {size_t handle; } ;
struct TYPE_7__ {int max; size_t size; int freeList; TYPE_3__* handles; TYPE_2__* nodes; } ;
typedef TYPE_1__ PriorityQHeap ;
typedef TYPE_2__ PQnode ;
typedef TYPE_3__ PQhandleElem ;
typedef int PQhandle ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;

void FUNC_4( PriorityQHeap *VAR_0, PQhandle VAR_1 )
{
 PQnode *VAR_2 = VAR_0->nodes;
 PQhandleElem *VAR_3 = VAR_0->handles;
 int VAR_4;

 FUNC_3( VAR_1 >= 1 && VAR_1 <= VAR_0->max && VAR_3[VAR_1].key != ((void*)0) );

 VAR_4 = VAR_3[VAR_1].node;
 VAR_2[VAR_4].handle = VAR_2[VAR_0->size].handle;
 VAR_3[VAR_2[VAR_4].handle].node = VAR_4;

 if( VAR_4 <= -- VAR_0->size ) {
  if( VAR_4 <= 1 || FUNC_2( VAR_3[VAR_2[VAR_4>>1].handle].key, VAR_3[VAR_2[VAR_4].handle].key )) {
   FUNC_0( VAR_0, VAR_4 );
  } else {
   FUNC_1( VAR_0, VAR_4 );
  }
 }
 VAR_3[VAR_1].key = ((void*)0);
 VAR_3[VAR_1].node = VAR_0->freeList;
 VAR_0->freeList = VAR_1;
}
