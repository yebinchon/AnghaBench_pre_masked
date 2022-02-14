
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_netif {int netmask; int ip_addr; struct uip_netif* next; } ;
struct uip_ip_addr {int dummy; } ;


 scalar_t__ FUNC_0 (struct uip_ip_addr*,int *,int *) ;
 struct uip_netif* VAR_0 ;
 struct uip_netif* VAR_1 ;

struct uip_netif* FUNC_1(struct uip_ip_addr *VAR_2)
{
 struct uip_netif *VAR_3;

 for(VAR_3=VAR_1;VAR_3!=((void*)0);VAR_3=VAR_3->next) {
  if(FUNC_0(VAR_2,&VAR_3->ip_addr,&VAR_3->netmask)) return VAR_3;
 }

 return VAR_0;
}
