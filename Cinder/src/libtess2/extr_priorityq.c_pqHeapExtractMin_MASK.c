
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int node; int * key; } ;
struct TYPE_7__ {size_t handle; } ;
struct TYPE_6__ {size_t size; int freeList; TYPE_3__* handles; TYPE_2__* nodes; } ;
typedef TYPE_1__ PriorityQHeap ;
typedef TYPE_2__ PQnode ;
typedef int * PQkey ;
typedef TYPE_3__ PQhandleElem ;
typedef size_t PQhandle ;


 int FUNC_0 (TYPE_1__*,int) ;

PQkey FUNC_1( PriorityQHeap *VAR_0 )
{
 PQnode *VAR_1 = VAR_0->nodes;
 PQhandleElem *VAR_2 = VAR_0->handles;
 PQhandle VAR_3 = VAR_1[1].handle;
 PQkey VAR_4 = VAR_2[VAR_3].key;

 if( VAR_0->size > 0 ) {
  VAR_1[1].handle = VAR_1[VAR_0->size].handle;
  VAR_2[VAR_1[1].handle].node = 1;

  VAR_2[VAR_3].key = ((void*)0);
  VAR_2[VAR_3].node = VAR_0->freeList;
  VAR_0->freeList = VAR_3;

  if( -- VAR_0->size > 0 ) {
   FUNC_0( VAR_0, 1 );
  }
 }
 return VAR_4;
}
