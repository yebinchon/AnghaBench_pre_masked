
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ulist_node {scalar_t__ val; unsigned long aux; } ;
struct ulist {int nnodes; int nodes_alloced; struct ulist_node* nodes; int int_nodes; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ulist_node* FUNC_0 (void*,int,int ) ;
 int FUNC_1 (struct ulist_node*,int ,int) ;

int FUNC_2(struct ulist *VAR_2, u64 VAR_3, unsigned long VAR_4,
      unsigned long *VAR_5, gfp_t VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->nnodes; ++VAR_7) {
  if (VAR_2->nodes[VAR_7].val == VAR_3) {
   if (VAR_5)
    *VAR_5 = VAR_2->nodes[VAR_7].aux;
   return 0;
  }
 }

 if (VAR_2->nnodes >= VAR_2->nodes_alloced) {
  u64 VAR_8 = VAR_2->nodes_alloced + 128;
  struct ulist_node *VAR_9;
  void *VAR_10 = ((void*)0);





  if (VAR_2->nodes_alloced > VAR_1)
   VAR_10 = VAR_2->nodes;

  VAR_9 = FUNC_0(VAR_10, sizeof(*VAR_9) * VAR_8,
         VAR_6);
  if (!VAR_9)
   return -VAR_0;

  if (!VAR_10)
   FUNC_1(VAR_9, VAR_2->int_nodes,
          sizeof(VAR_2->int_nodes));

  VAR_2->nodes = VAR_9;
  VAR_2->nodes_alloced = VAR_8;
 }
 VAR_2->nodes[VAR_2->nnodes].val = VAR_3;
 VAR_2->nodes[VAR_2->nnodes].aux = VAR_4;
 ++VAR_2->nnodes;

 return 1;
}
