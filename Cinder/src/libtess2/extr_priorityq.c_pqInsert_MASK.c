
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; int max; int * keys; int heap; scalar_t__ initialized; } ;
struct TYPE_6__ {int userData; scalar_t__ (* memrealloc ) (int ,int *,size_t) ;} ;
typedef TYPE_1__ TESSalloc ;
typedef TYPE_2__ PriorityQ ;
typedef int PQkey ;
typedef int PQhandle ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,size_t) ;

PQhandle FUNC_3( TESSalloc* VAR_1, PriorityQ *VAR_2, PQkey VAR_3 )
{
 int VAR_4;

 if( VAR_2->initialized ) {
  return FUNC_1( VAR_1, VAR_2->heap, VAR_3 );
 }
 VAR_4 = VAR_2->size;
 if( ++ VAR_2->size >= VAR_2->max ) {
  if (!VAR_1->memrealloc)
  {
   return VAR_0;
  }
  else
  {
   PQkey *VAR_5= VAR_2->keys;

   VAR_2->max <<= 1;
   VAR_2->keys = (PQkey *)VAR_1->memrealloc( VAR_1->userData, VAR_2->keys,
    (size_t)(VAR_2->max * sizeof( VAR_2->keys[0] )));
   if (VAR_2->keys == ((void*)0)) {
    VAR_2->keys = VAR_5;
    return VAR_0;
   }
  }
 }
 FUNC_0(VAR_4 != VAR_0);
 VAR_2->keys[VAR_4] = VAR_3;


 return -(VAR_4+1);
}
