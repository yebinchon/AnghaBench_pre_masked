
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct radix_node_head {struct radix_node* rnh_treetop; } ;
struct radix_node {int rn_offset; int rn_bit; int rn_bmask; scalar_t__ rn_mask; int* rn_key; int rn_flags; struct radix_node* rn_dupedkey; struct radix_mask* rn_mklist; struct radix_node* rn_parent; struct radix_node* rn_left; struct radix_node* rn_right; } ;
struct radix_mask {int rm_flags; int rm_bit; scalar_t__ rm_mask; struct radix_mask* rm_mklist; struct radix_node* rm_leaf; } ;
typedef int rn_matchf_t ;
typedef int* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct radix_node*,int *,void*) ;
 int FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (int*,struct radix_node*,int,int *,void*) ;
 struct radix_node* FUNC_3 (int*,struct radix_node*,scalar_t__) ;

struct radix_node *
FUNC_4(void *VAR_2, struct radix_node_head *VAR_3,
    rn_matchf_t *VAR_4, void *VAR_5)
{
 caddr_t VAR_6 = VAR_2;
 struct radix_node *VAR_7 = VAR_3->rnh_treetop, *VAR_8;
 caddr_t VAR_9 = VAR_6, VAR_10;
 caddr_t VAR_11;
 struct radix_node *VAR_12, *VAR_13 = VAR_7;
 int VAR_14 = VAR_7->rn_offset, VAR_15 = *(u_char *)VAR_9, VAR_16;
 int VAR_17, VAR_18, VAR_19;





 for (; VAR_7->rn_bit >= 0; ) {
  if (VAR_7->rn_bmask & VAR_9[VAR_7->rn_offset])
   VAR_7 = VAR_7->rn_right;
  else
   VAR_7 = VAR_7->rn_left;
 }
 if (VAR_7->rn_mask)
  VAR_15 = *(u_char *)VAR_7->rn_mask;
 VAR_9 += VAR_14; VAR_10 = VAR_7->rn_key + VAR_14; VAR_11 = VAR_6 + VAR_15;
 for (; VAR_9 < VAR_11; VAR_9++, VAR_10++)
  if (*VAR_9 != *VAR_10)
   goto on1;







 if (VAR_7->rn_flags & VAR_1)
  VAR_7 = VAR_7->rn_dupedkey;
 if (VAR_7 == ((void*)0) || FUNC_0(VAR_7, VAR_4, VAR_5)) {
  return (VAR_7);
 } else {





  if (VAR_7->rn_parent->rn_flags & VAR_1) {

   return (((void*)0));
  }
  VAR_18 = 0;
  goto keeplooking;
 }
on1:
 VAR_17 = (*VAR_9 ^ *VAR_10) & 0xff;
 for (VAR_18 = 7; (VAR_17 >>= 1) > 0;)
  VAR_18--;
keeplooking:
 VAR_16 = VAR_9 - VAR_6;
 VAR_18 += VAR_16 << 3;
 VAR_19 = -1 - VAR_18;



 if ((VAR_12 = VAR_7)->rn_mask == 0)
  VAR_7 = VAR_7->rn_dupedkey;
 for (; VAR_7; VAR_7 = VAR_7->rn_dupedkey) {





  if (VAR_7->rn_flags & VAR_0) {
   if ((VAR_19 <= VAR_7->rn_bit) && FUNC_0(VAR_7, VAR_4, VAR_5))
    return (VAR_7);
  } else if (FUNC_2(VAR_6, VAR_7, VAR_16, VAR_4, VAR_5)) {
   return (VAR_7);
  }
 }
 VAR_7 = VAR_12;

 do {
  struct radix_mask *VAR_20;
  VAR_7 = VAR_7->rn_parent;
  VAR_20 = VAR_7->rn_mklist;






  while (VAR_20) {
   if (VAR_20->rm_flags & VAR_0) {
    if ((VAR_19 <= VAR_20->rm_bit) &&
        FUNC_0(VAR_20->rm_leaf, VAR_4, VAR_5))
     return (VAR_20->rm_leaf);
   } else {
    VAR_14 = FUNC_1(VAR_7->rn_offset, VAR_16);
    VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_20->rm_mask);
    while (VAR_8 && VAR_8->rn_mask != VAR_20->rm_mask)
     VAR_8 = VAR_8->rn_dupedkey;
    if (VAR_8 && FUNC_2(VAR_6, VAR_8, VAR_14, VAR_4, VAR_5))
     return (VAR_8);
   }
   VAR_20 = VAR_20->rm_mklist;
  }
 } while (VAR_7 != VAR_13);
 return (((void*)0));
}
