
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulist_node {int dummy; } ;
struct ulist_iterator {scalar_t__ i; } ;
struct ulist {scalar_t__ nnodes; struct ulist_node* nodes; } ;



struct ulist_node *FUNC_0(struct ulist *VAR_0, struct ulist_iterator *VAR_1)
{
 if (VAR_0->nnodes == 0)
  return ((void*)0);
 if (VAR_1->i < 0 || VAR_1->i >= VAR_0->nnodes)
  return ((void*)0);

 return &VAR_0->nodes[VAR_1->i++];
}
