
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8_t ;
struct uip_pbuf {struct uip_eth_hdr* payload; } ;
struct uip_ip_addr {scalar_t__ addr; } ;
struct uip_netif {size_t hwaddr_len; int (* linkoutput ) (struct uip_netif*,struct uip_pbuf*) ;scalar_t__ hwaddr; struct uip_ip_addr gw; int netmask; int ip_addr; } ;
struct TYPE_4__ {int* addr; } ;
struct TYPE_3__ {int* addr; } ;
struct uip_eth_hdr {int type; TYPE_2__ src; TYPE_1__ dest; } ;
struct uip_eth_addr {int* addr; } ;
typedef int s8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uip_ip_addr*) ;
 int FUNC_3 (struct uip_ip_addr*) ;
 int FUNC_4 (struct uip_ip_addr*) ;
 scalar_t__ FUNC_5 (struct uip_ip_addr*,struct uip_netif*) ;
 scalar_t__ FUNC_6 (struct uip_ip_addr*) ;
 int FUNC_7 (struct uip_ip_addr*,int *,int *) ;
 int FUNC_8 (struct uip_netif*,struct uip_pbuf*) ;
 int FUNC_9 (struct uip_netif*,struct uip_ip_addr*,struct uip_pbuf*) ;
 scalar_t__ FUNC_10 (struct uip_pbuf*,int) ;

s8_t FUNC_11(struct uip_netif *VAR_4,struct uip_ip_addr *VAR_5,struct uip_pbuf *VAR_6)
{
 u8_t VAR_7;
 struct uip_eth_addr *VAR_8,*VAR_9,VAR_10;
 struct uip_eth_hdr *VAR_11;

 if(FUNC_10(VAR_6,sizeof(struct uip_eth_hdr))!=0) {
  FUNC_0("uip_arp_out: could not allocate room for header.\n");
  return VAR_0;
 }

 VAR_8 = ((void*)0);
 if(FUNC_5(VAR_5,VAR_4)) {
  VAR_8 = (struct uip_eth_addr*)&VAR_3;
 } else if(FUNC_6(VAR_5)) {

  VAR_10.addr[0] = 0x01;
  VAR_10.addr[1] = 0x00;
  VAR_10.addr[2] = 0x5e;
  VAR_10.addr[3] = FUNC_2(VAR_5) & 0x7f;
  VAR_10.addr[4] = FUNC_3(VAR_5);
  VAR_10.addr[5] = FUNC_4(VAR_5);

    VAR_8 = &VAR_10;
 } else {
  if(!FUNC_7(VAR_5,&VAR_4->ip_addr,&VAR_4->netmask)) {
   if(VAR_4->gw.addr!=0) VAR_5 = &VAR_4->gw;
   else return VAR_1;
  }
  return FUNC_9(VAR_4,VAR_5,VAR_6);
 }

 VAR_9 = (struct uip_eth_addr*)VAR_4->hwaddr;
 VAR_11 = VAR_6->payload;
 for(VAR_7=0;VAR_7<VAR_4->hwaddr_len;VAR_7++) {
  VAR_11->dest.addr[VAR_7] = VAR_8->addr[VAR_7];
  VAR_11->src.addr[VAR_7] = VAR_9->addr[VAR_7];
 }

 VAR_11->type = FUNC_1(VAR_2);
 return VAR_4->linkoutput(VAR_4,VAR_6);
}
