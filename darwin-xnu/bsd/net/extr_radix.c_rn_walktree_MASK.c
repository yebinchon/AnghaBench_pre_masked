
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* walktree_f_t ) (struct radix_node*,void*) ;
struct radix_node_head {int rnh_cnt; struct radix_node* rnh_treetop; } ;
struct radix_node {scalar_t__ rn_bit; int rn_flags; struct radix_node* rn_dupedkey; struct radix_node* rn_left; struct radix_node* rn_right; struct radix_node* rn_parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct radix_node*,void*) ;

__attribute__((used)) static int
FUNC_1(struct radix_node_head *VAR_1, walktree_f_t *VAR_2, void *VAR_3)
{
 int VAR_4;
 struct radix_node *VAR_5, *VAR_6;
 struct radix_node *VAR_7;
 int VAR_8;
restart:
 VAR_7 = VAR_1->rnh_treetop;
 VAR_8 = VAR_1->rnh_cnt;


 while (VAR_7->rn_bit >= 0)
  VAR_7 = VAR_7->rn_left;
 for (;;) {
  VAR_5 = VAR_7;

  while (VAR_7->rn_parent->rn_right == VAR_7 &&
      (VAR_7->rn_flags & VAR_0) == 0)
   VAR_7 = VAR_7->rn_parent;

  for (VAR_7 = VAR_7->rn_parent->rn_right; VAR_7->rn_bit >= 0;)
   VAR_7 = VAR_7->rn_left;
  VAR_6 = VAR_7;

  while ((VAR_7 = VAR_5) != ((void*)0)) {
   VAR_5 = VAR_7->rn_dupedkey;
   if (!(VAR_7->rn_flags & VAR_0)
       && (VAR_4 = (*VAR_2)(VAR_7, VAR_3)))
    return (VAR_4);
  }

  if (VAR_1->rnh_cnt < VAR_8)
   goto restart;
  VAR_7 = VAR_6;
  if (VAR_7->rn_flags & VAR_0)
   return (0);
 }

}
