
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* walktree_f_t ) (struct radix_node*,void*) ;
typedef int u_char ;
struct radix_node_head {int rnh_cnt; struct radix_node* rnh_treetop; } ;
struct radix_node {int rn_bit; int rn_bmask; size_t rn_offset; int rn_flags; struct radix_node* rn_dupedkey; struct radix_node* rn_left; struct radix_node* rn_right; struct radix_node* rn_parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct radix_node*,void*) ;

__attribute__((used)) static int
FUNC_1(struct radix_node_head *VAR_1, void *VAR_2, void *VAR_3, walktree_f_t *VAR_4,
    void *VAR_5)
{
 int VAR_6;
 struct radix_node *VAR_7, *VAR_8;
 u_char *VAR_9 = (u_char *)VAR_2;
 u_char *VAR_10 = (u_char *)VAR_3;
 struct radix_node *VAR_11, *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
restart:
 VAR_12 = ((void*)0);
 VAR_13 = 0;
 VAR_15 = VAR_1->rnh_cnt;




 for (VAR_11 = VAR_1->rnh_treetop; VAR_11->rn_bit >= 0; ) {
  VAR_12 = VAR_11;
  if (!(VAR_11->rn_bmask & VAR_10[VAR_11->rn_offset]))
   break;

  if (VAR_11->rn_bmask & VAR_9[VAR_11->rn_offset])
   VAR_11 = VAR_11->rn_right;
  else
   VAR_11 = VAR_11->rn_left;
 }







 VAR_11 = VAR_12;
 VAR_14 = VAR_11->rn_bit;


 while (VAR_11->rn_bit >= 0)
  VAR_11 = VAR_11->rn_left;

 while (!VAR_13) {
  VAR_7 = VAR_11;

  while (VAR_11->rn_parent->rn_right == VAR_11
         && !(VAR_11->rn_flags & VAR_0)) {
   VAR_11 = VAR_11->rn_parent;


   if (VAR_11->rn_bit <= VAR_14) {
    VAR_13 = 1;







   }
  }
  for (VAR_11 = VAR_11->rn_parent->rn_right; VAR_11->rn_bit >= 0;)
   VAR_11 = VAR_11->rn_left;
  VAR_8 = VAR_11;

  while ((VAR_11 = VAR_7) != 0) {
   VAR_7 = VAR_11->rn_dupedkey;
   if (!(VAR_11->rn_flags & VAR_0)
       && (VAR_6 = (*VAR_4)(VAR_11, VAR_5)))
    return (VAR_6);
  }

  if (VAR_1->rnh_cnt < VAR_15)
   goto restart;
  VAR_11 = VAR_8;
  if (VAR_11->rn_flags & VAR_0)
   VAR_13 = 1;
 }
 return 0;
}
