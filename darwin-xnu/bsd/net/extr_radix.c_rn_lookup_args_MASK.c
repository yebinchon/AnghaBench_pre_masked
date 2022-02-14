
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radix_node_head {TYPE_1__* rnh_treetop; } ;
struct radix_node {scalar_t__ rn_key; scalar_t__ rn_mask; struct radix_node* rn_dupedkey; } ;
typedef int rn_matchf_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int rn_offset; } ;


 struct radix_node* FUNC_0 (void*,int,int ) ;
 struct radix_node* FUNC_1 (void*,struct radix_node_head*,int *,void*) ;

struct radix_node *
FUNC_2(void *VAR_0, void *VAR_1, struct radix_node_head *VAR_2,
    rn_matchf_t *VAR_3, void *VAR_4)
{
 struct radix_node *VAR_5;
 caddr_t VAR_6 = ((void*)0);

 if (VAR_1) {
  VAR_5 = FUNC_0(VAR_1, 1, VAR_2->rnh_treetop->rn_offset);
  if (VAR_5 == 0)
   return (((void*)0));
  VAR_6 = VAR_5->rn_key;
 }
 VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);
 if (VAR_5 && VAR_6) {
  while (VAR_5 && VAR_5->rn_mask != VAR_6)
   VAR_5 = VAR_5->rn_dupedkey;
 }
 return VAR_5;
}
