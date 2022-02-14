
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_ifaddr {int addr; } ;
struct inet6_dev {int lock; struct inet6_ifaddr* addr_list; } ;
struct in6_addr {int dummy; } ;


 struct inet6_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct inet6_dev*) ;
 int FUNC_2 (struct in6_addr*,int *) ;
 int FUNC_3 (struct in6_addr*,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0, struct in6_addr *VAR_1)
{
 struct inet6_dev *VAR_2;
 struct inet6_ifaddr *VAR_3;

 if (!VAR_0)
  return;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return;

 FUNC_4(&VAR_2->lock);
 VAR_3 = VAR_2->addr_list;
 if (VAR_3)
  FUNC_2(VAR_1, &VAR_3->addr);
 else
  FUNC_3(VAR_1, 0, 0, 0, 0);

 FUNC_5(&VAR_2->lock);

 FUNC_1(VAR_2);
}
