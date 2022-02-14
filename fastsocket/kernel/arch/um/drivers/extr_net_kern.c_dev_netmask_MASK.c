
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct in_device* ip_ptr; } ;
struct in_ifaddr {int ifa_mask; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;
typedef int __be32 ;



int FUNC_0(void *VAR_0, void *VAR_1)
{
 struct net_device *VAR_2 = VAR_0;
 struct in_device *VAR_3 = VAR_2->ip_ptr;
 struct in_ifaddr *VAR_4;
 __be32 *VAR_5 = VAR_1;

 if (VAR_3 == ((void*)0))
  return 1;

 VAR_4 = VAR_3->ifa_list;
 if (VAR_4 == ((void*)0))
  return 1;

 *VAR_5 = VAR_4->ifa_mask;
 return 0;
}
