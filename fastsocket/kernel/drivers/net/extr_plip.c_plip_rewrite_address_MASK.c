
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * dev_addr; struct in_device* ip_ptr; } ;
struct in_ifaddr {int ifa_address; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;
struct ethhdr {scalar_t__ h_dest; scalar_t__ h_source; } ;


 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_2(const struct net_device *VAR_0, struct ethhdr *VAR_1)
{
 const struct in_device *VAR_2 = VAR_0->ip_ptr;

 if (VAR_2) {

  const struct in_ifaddr *VAR_3 = VAR_2->ifa_list;
  if (VAR_3) {
   FUNC_0(VAR_1->h_source, VAR_0->dev_addr, 6);
   FUNC_1(VAR_1->h_dest, 0xfc, 2);
   FUNC_0(VAR_1->h_dest+2, &VAR_3->ifa_address, 4);
  }
 }
}
