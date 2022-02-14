
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8_t ;
typedef int u16_t ;
struct uip_pbuf {int tot_len; struct uip_ip_hdr* payload; } ;
struct uip_netif {int dummy; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {int addr; } ;
struct uip_ip_hdr {TYPE_1__ src; int chksum; TYPE_2__ dst; } ;
struct uip_ip_addr {int addr; } ;
struct uip_icmp_echo_hdr {TYPE_1__ src; int chksum; TYPE_2__ dst; } ;
typedef int s16_t ;


 int FUNC_0 (struct uip_ip_hdr*,int ) ;

 int VAR_0 ;
 int FUNC_1 (struct uip_ip_hdr*) ;
 int FUNC_2 (struct uip_ip_hdr*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int const) ;
 int FUNC_5 (TYPE_2__*,struct uip_netif*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct uip_pbuf*) ;
 int FUNC_8 (struct uip_pbuf*,TYPE_1__*,int *,int ,int ,int ,struct uip_netif*) ;
 int FUNC_9 (struct uip_pbuf*) ;
 scalar_t__ FUNC_10 (struct uip_pbuf*,int) ;

void FUNC_11(struct uip_pbuf *VAR_2,struct uip_netif *VAR_3)
{
 u8_t VAR_4;
 u16_t VAR_5;
 struct uip_ip_addr VAR_6;
 struct uip_ip_hdr *VAR_7;
 struct uip_icmp_echo_hdr *VAR_8;

 VAR_7 = VAR_2->payload;
 VAR_5 = FUNC_1(VAR_7)*4;
 if(FUNC_10(VAR_2,-((s16_t)VAR_5)) || VAR_2->tot_len<sizeof(u16_t)*2) {
  FUNC_3("uip_icmpinput: short ICMP received.\n");
  FUNC_9(VAR_2);
  return;
 }

 VAR_4 = *((u8_t*)VAR_2->payload);

 switch(VAR_4) {
  case 128:
   if(FUNC_5(&VAR_7->dst,VAR_3) || FUNC_6(&VAR_7->dst)) {
    FUNC_3("uip_icmpinput: Not echoing to broadcast pings.\n");
    FUNC_9(VAR_2);
    return;
   }

   if(VAR_2->tot_len<sizeof(struct uip_icmp_echo_hdr)) {
    FUNC_3("uip_icmpinput: bad ICMP echo received.\n");
    FUNC_9(VAR_2);
    return;
   }

   VAR_8 = VAR_2->payload;
   if(FUNC_7(VAR_2)!=0) {
    FUNC_3("uip_icmpinput: checksum failed for received ICMP echo.\n");
    FUNC_9(VAR_2);
    return;
   }

   VAR_6.addr = VAR_7->src.addr;
   VAR_7->src.addr = VAR_7->dst.addr;
   VAR_7->dst.addr = VAR_6.addr;
   FUNC_0(VAR_8,VAR_0);

   if(VAR_8->chksum>=FUNC_4(0xffff-(128<<8))) VAR_8->chksum += FUNC_4(128<<8)+1;
   else VAR_8->chksum += FUNC_4(128<<8);

   FUNC_10(VAR_2,VAR_5);
   FUNC_8(VAR_2,&VAR_7->src,((void*)0),FUNC_2(VAR_7),0,VAR_1,VAR_3);
   break;
  default:
   FUNC_3("uip_icmpinput: ICMP type/code not supported.\n");
   break;
 }
 FUNC_9(VAR_2);
}
