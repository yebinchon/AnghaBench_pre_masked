
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uip_pbuf {struct uip_ethip_hdr* payload; } ;
struct uip_netif {int netmask; int ip_addr; } ;
struct TYPE_4__ {int src; } ;
struct TYPE_3__ {int src; } ;
struct uip_ethip_hdr {TYPE_2__ ethhdr; TYPE_1__ ip; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct uip_netif*,int *,int *,int ) ;

void
FUNC_2(struct uip_netif *VAR_0,struct uip_pbuf *VAR_1)
{
 struct uip_ethip_hdr *VAR_2;

 VAR_2 = VAR_1->payload;
 if(!FUNC_0(&VAR_2->ip.src,&VAR_0->ip_addr,&VAR_0->netmask)) return;

 FUNC_1(VAR_0,&VAR_2->ip.src,&VAR_2->ethhdr.src,0);
 }
