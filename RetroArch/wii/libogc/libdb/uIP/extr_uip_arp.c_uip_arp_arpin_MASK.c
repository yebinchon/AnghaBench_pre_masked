
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8_t ;
struct uip_pbuf {int tot_len; struct uip_arp_hdr* payload; } ;
struct TYPE_12__ {scalar_t__ addr; } ;
struct uip_netif {size_t hwaddr_len; int (* linkoutput ) (struct uip_netif*,struct uip_pbuf*) ;TYPE_6__ ip_addr; } ;
struct uip_ip_addr2 {int dummy; } ;
struct uip_ip_addr {int dummy; } ;
struct uip_eth_addr {int * addr; } ;
struct TYPE_9__ {int * addr; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_10__ {TYPE_3__ src; TYPE_1__ dest; } ;
struct TYPE_8__ {int * addr; } ;
struct TYPE_11__ {int * addr; } ;
struct uip_arp_hdr {int opcode; int hwtype; int protocol; TYPE_4__ ethhdr; TYPE_2__ dhwaddr; TYPE_5__ shwaddr; struct uip_ip_addr2 sipaddr; struct uip_ip_addr2 dipaddr; } ;


 int FUNC_0 (struct uip_arp_hdr*,size_t) ;
 int FUNC_1 (struct uip_arp_hdr*,int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (struct uip_ip_addr*,TYPE_6__*) ;
 int FUNC_5 (struct uip_netif*,struct uip_pbuf*) ;
 int FUNC_6 (struct uip_netif*,struct uip_ip_addr*,TYPE_5__*,int ) ;
 int FUNC_7 (struct uip_pbuf*) ;

void
FUNC_8(struct uip_netif *VAR_3,struct uip_eth_addr *VAR_4,struct uip_pbuf *VAR_5)
{
 u8_t VAR_6,VAR_7;
 struct uip_ip_addr VAR_8,VAR_9;
 struct uip_arp_hdr *VAR_10;

 if(VAR_5->tot_len<sizeof(struct uip_arp_hdr)) {
  FUNC_7(VAR_5);
  return;
 }

 VAR_10 = VAR_5->payload;

 *(struct uip_ip_addr2*)((void*)&VAR_8) = VAR_10->sipaddr;
 *(struct uip_ip_addr2*)((void*)&VAR_9) = VAR_10->dipaddr;

 if(VAR_3->ip_addr.addr==0) VAR_7 = 0;
 else VAR_7 = FUNC_4(&VAR_9,&VAR_3->ip_addr);

 if(VAR_7) FUNC_6(VAR_3,&VAR_8,&VAR_10->shwaddr,VAR_1);
 else FUNC_6(VAR_3,&VAR_8,&VAR_10->shwaddr,0);

 switch(FUNC_3(VAR_10->opcode)) {
  case 128:
   if(VAR_7) {
    VAR_10->opcode = FUNC_3(129);
    VAR_10->dipaddr = VAR_10->sipaddr;
    VAR_10->sipaddr = *(struct uip_ip_addr2*)((void*)&VAR_3->ip_addr);

    for(VAR_6=0;VAR_6<VAR_3->hwaddr_len;VAR_6++) {
     VAR_10->dhwaddr.addr[VAR_6] = VAR_10->shwaddr.addr[VAR_6];
     VAR_10->shwaddr.addr[VAR_6] = VAR_4->addr[VAR_6];
     VAR_10->ethhdr.dest.addr[VAR_6] = VAR_10->dhwaddr.addr[VAR_6];
     VAR_10->ethhdr.src.addr[VAR_6] = VAR_4->addr[VAR_6];
    }

    VAR_10->hwtype = FUNC_3(VAR_0);
    FUNC_0(VAR_10,VAR_3->hwaddr_len);

    VAR_10->protocol = FUNC_3(VAR_2);
    FUNC_1(VAR_10,sizeof(struct uip_ip_addr));

    VAR_3->linkoutput(VAR_3,VAR_5);
   } else {
    FUNC_2("uip_arp_arpin: ip packet not for us.\n");
   }
   break;
  case 129:
   break;
  default:
   FUNC_2("uip_arp_arpin: ARP unknown opcode type.\n");
   break;
 }
 FUNC_7(VAR_5);
}
