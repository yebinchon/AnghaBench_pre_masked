
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* levels; } ;
typedef TYPE_2__ rtree_t ;
typedef int rtree_node_elm_t ;
struct TYPE_5__ {int subtree; } ;


 int * FUNC_0 (TYPE_2__*,unsigned int,int *) ;

rtree_node_elm_t *
FUNC_1(rtree_t *VAR_0, unsigned VAR_1)
{

 return (FUNC_0(VAR_0, VAR_1, &VAR_0->levels[VAR_1].subtree));
}
