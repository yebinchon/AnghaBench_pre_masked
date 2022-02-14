
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uip_pbuf {struct uip_eth_hdr* payload; } ;
struct uip_netif {size_t hwaddr_len; size_t (* linkoutput ) (struct uip_netif*,struct uip_pbuf*) ;scalar_t__ hwaddr; } ;
struct uip_ip_addr {int dummy; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_5__ {int * addr; } ;
struct uip_eth_hdr {int type; TYPE_3__ src; TYPE_1__ dest; } ;
struct uip_eth_addr {int * addr; } ;
typedef size_t s8_t ;
struct TYPE_6__ {int * addr; } ;
struct TYPE_8__ {scalar_t__ state; TYPE_2__ ethaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 TYPE_4__* VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct uip_ip_addr*) ;
 scalar_t__ FUNC_3 (struct uip_ip_addr*,struct uip_netif*) ;
 scalar_t__ FUNC_4 (struct uip_ip_addr*) ;
 size_t FUNC_5 (struct uip_netif*,struct uip_pbuf*) ;
 size_t FUNC_6 (struct uip_netif*,struct uip_ip_addr*) ;
 size_t FUNC_7 (struct uip_ip_addr*,int ) ;

s8_t FUNC_8(struct uip_netif *VAR_8,struct uip_ip_addr *VAR_9,struct uip_pbuf *VAR_10)
{
 s8_t VAR_11,VAR_12;
 s8_t VAR_13 = VAR_5;
 struct uip_eth_addr *VAR_14 = (struct uip_eth_addr*)VAR_8->hwaddr;

 if(FUNC_3(VAR_9,VAR_8) ||
  FUNC_4(VAR_9) ||
  FUNC_2(VAR_9)) return VAR_4;

 VAR_11 = FUNC_7(VAR_9,VAR_3);
 if(VAR_11<0) return VAR_11;

 if(VAR_7[VAR_11].state==VAR_0) VAR_7[VAR_11].state = VAR_1;
 if(VAR_7[VAR_11].state==VAR_1 || VAR_10==((void*)0)) VAR_13 = FUNC_6(VAR_8,VAR_9);

 if(VAR_10!=((void*)0)) {
  if(VAR_7[VAR_11].state==VAR_2) {

   struct uip_eth_hdr *VAR_15 = VAR_10->payload;
   for(VAR_12=0;VAR_12<VAR_8->hwaddr_len;VAR_12++) {
    VAR_15->dest.addr[VAR_12] = VAR_7[VAR_11].ethaddr.addr[VAR_12];
    VAR_15->src.addr[VAR_12] = VAR_14->addr[VAR_12];
   }

   VAR_15->type = FUNC_1(VAR_6);
   VAR_13 = VAR_8->linkoutput(VAR_8,VAR_10);
  } else if(VAR_7[VAR_11].state==VAR_1) {
   FUNC_0("uip_arp_query: Ethernet destination address unknown, queueing disabled, packet dropped.\n");
  }
 }
 return VAR_13;
}
