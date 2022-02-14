
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node_head {int (* rnh_walktree ) (struct radix_node_head*,int ,struct ifnet*) ;} ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct radix_node_head** VAR_3 ;
 int FUNC_2 (struct radix_node_head*,int ,struct ifnet*) ;

void
FUNC_3(struct ifnet *VAR_4, int VAR_5)
{
 struct radix_node_head *VAR_6;

 if ((VAR_5 <= VAR_0) && (VAR_5 >= 0) &&
  ((VAR_6 = VAR_3[VAR_5]) != ((void*)0)) && (VAR_4 != ((void*)0))) {
  FUNC_0(VAR_2);
  (void) VAR_6->rnh_walktree(VAR_6, VAR_1, VAR_4);
  FUNC_1(VAR_2);
 }
}
