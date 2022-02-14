
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node {scalar_t__ rn_bit; int rn_bmask; size_t rn_offset; struct radix_node* rn_left; struct radix_node* rn_right; } ;
typedef int* caddr_t ;



__attribute__((used)) static struct radix_node *
FUNC_0(void *VAR_0, struct radix_node *VAR_1)
{
 struct radix_node *VAR_2;
 caddr_t VAR_3;

 for (VAR_2 = VAR_1, VAR_3 = VAR_0; VAR_2->rn_bit >= 0;) {
  if (VAR_2->rn_bmask & VAR_3[VAR_2->rn_offset])
   VAR_2 = VAR_2->rn_right;
  else
   VAR_2 = VAR_2->rn_left;
 }
 return (VAR_2);
}
