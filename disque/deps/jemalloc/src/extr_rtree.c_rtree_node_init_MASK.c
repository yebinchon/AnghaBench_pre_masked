
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* levels; int * (* alloc ) (int) ;} ;
typedef TYPE_2__ rtree_t ;
typedef int rtree_node_elm_t ;
struct TYPE_4__ {int bits; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void**,int *,int *) ;
 int * FUNC_2 (void**) ;
 int FUNC_3 (void**,int *) ;
 int * FUNC_4 (int) ;

__attribute__((used)) static rtree_node_elm_t *
FUNC_5(rtree_t *VAR_2, unsigned VAR_3, rtree_node_elm_t **VAR_4)
{
 rtree_node_elm_t *VAR_5;

 if (FUNC_1((void **)VAR_4, ((void*)0), VAR_1)) {




  do {
   VAR_0;
   VAR_5 = FUNC_2((void **)VAR_4);
  } while (VAR_5 == VAR_1);
 } else {
  VAR_5 = VAR_2->alloc(FUNC_0(1) << VAR_2->levels[VAR_3].bits);
  if (VAR_5 == ((void*)0))
   return (((void*)0));
  FUNC_3((void **)VAR_4, VAR_5);
 }

 return (VAR_5);
}
