
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node_head {int (* rnh_walktree ) (struct radix_node_head*,int ,void*) ;} ;
struct in6_addr {int * s6_addr16; } ;
struct ifnet {int if_index; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct radix_node_head** VAR_3 ;
 int FUNC_4 (struct radix_node_head*,int ,void*) ;

void
FUNC_5(
 struct in6_addr *VAR_4,
 struct ifnet *VAR_5)
{
 struct radix_node_head *VAR_6 = VAR_3[VAR_0];


 if (!FUNC_0(VAR_4)) {
  return;
 }
 FUNC_2(VAR_1);

 VAR_4->s6_addr16[1] = FUNC_1(VAR_5->if_index);

 VAR_6->rnh_walktree(VAR_6, VAR_2, (void *)VAR_4);
 FUNC_3(VAR_1);
}
