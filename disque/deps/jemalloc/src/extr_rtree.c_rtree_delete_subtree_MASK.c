
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int height; int (* dalloc ) (TYPE_3__*) ;TYPE_1__* levels; } ;
typedef TYPE_2__ rtree_t ;
struct TYPE_9__ {struct TYPE_9__* child; } ;
typedef TYPE_3__ rtree_node_elm_t ;
struct TYPE_7__ {size_t bits; } ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(rtree_t *VAR_0, rtree_node_elm_t *VAR_1, unsigned VAR_2)
{

 if (VAR_2 + 1 < VAR_0->height) {
  size_t VAR_3, VAR_4;

  VAR_3 = FUNC_0(1) << VAR_0->levels[VAR_2].bits;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   rtree_node_elm_t *VAR_5 = VAR_1[VAR_4].child;
   if (VAR_5 != ((void*)0))
    FUNC_2(VAR_0, VAR_5, VAR_2 + 1);
  }
 }
 VAR_0->dalloc(VAR_1);
}
