
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radix_node_head {int (* rnh_walktree ) (struct radix_node_head*,int ,struct in_ifadown_arg*) ;} ;
struct in_ifadown_arg {int del; struct ifaddr* ifa; struct radix_node_head* rnh; } ;
struct ifaddr {int ifa_flags; TYPE_1__* ifa_addr; } ;
struct TYPE_2__ {size_t sa_family; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ifaddr*) ;
 int VAR_1 ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 struct radix_node_head** VAR_5 ;
 int FUNC_4 (struct radix_node_head*,int ,struct in_ifadown_arg*) ;

int
FUNC_5(struct ifaddr *VAR_6, int VAR_7)
{
 struct in_ifadown_arg VAR_8;
 struct radix_node_head *VAR_9;

 FUNC_2(VAR_4, VAR_2);






 if (VAR_6->ifa_addr->sa_family != VAR_0)
  return (1);


 FUNC_3();

 VAR_8.rnh = VAR_9 = VAR_5[VAR_0];
 VAR_8.ifa = VAR_6;
 VAR_8.del = VAR_7;
 VAR_9->rnh_walktree(VAR_9, VAR_3, &VAR_8);
 FUNC_0(VAR_6);
 VAR_6->ifa_flags &= ~VAR_1;
 FUNC_1(VAR_6);
 return (0);
}
