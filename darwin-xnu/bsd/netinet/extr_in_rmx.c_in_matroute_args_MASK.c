
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int dummy; } ;
struct radix_node_head {int dummy; } ;
struct radix_node {int dummy; } ;
typedef int rn_matchf_t ;


 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct radix_node*) ;
 struct radix_node* FUNC_3 (void*,struct radix_node_head*,int *,void*) ;

__attribute__((used)) static struct radix_node *
FUNC_4(void *VAR_0, struct radix_node_head *VAR_1,
    rn_matchf_t *VAR_2, void *VAR_3)
{
 struct radix_node *VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4 != ((void*)0)) {
  FUNC_0((struct rtentry *)VAR_4);
  FUNC_2(VAR_4);
  FUNC_1((struct rtentry *)VAR_4);
 }
 return (VAR_4);
}
