
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
 int FUNC_2 () ;
 struct radix_node_head** VAR_3 ;
 int FUNC_3 (struct radix_node_head*,int ,struct ifnet*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_4)
{
 struct radix_node_head *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0 + 1; VAR_6++) {
  if ((VAR_5 = VAR_3[VAR_6]) == ((void*)0))
   continue;

  FUNC_0(VAR_2);
  (void) VAR_5->rnh_walktree(VAR_5, VAR_1, VAR_4);
  FUNC_1(VAR_2);
 }
 FUNC_2();
}
