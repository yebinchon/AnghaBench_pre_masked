
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rtree_t ;
struct TYPE_5__ {int child; } ;
typedef TYPE_1__ rtree_node_elm_t ;


 TYPE_1__* FUNC_0 (int *,unsigned int,int *) ;

rtree_node_elm_t *
FUNC_1(rtree_t *VAR_0, rtree_node_elm_t *VAR_1, unsigned VAR_2)
{

 return (FUNC_0(VAR_0, VAR_2, &VAR_1->child));
}
