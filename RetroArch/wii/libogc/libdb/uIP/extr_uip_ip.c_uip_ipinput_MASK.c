
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16_t ;
struct uip_pbuf {int len; struct uip_ip_hdr* payload; } ;
struct uip_netif {int ip_addr; struct uip_netif* next; } ;
struct uip_ip_hdr {int dst; } ;
typedef int s8_t ;
struct TYPE_3__ {int drop; int chkerr; } ;
struct TYPE_4__ {TYPE_1__ ip; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uip_ip_hdr*) ;
 int FUNC_2 (struct uip_ip_hdr*) ;
 int FUNC_3 (struct uip_ip_hdr*) ;
 int FUNC_4 (struct uip_ip_hdr*) ;
 int FUNC_5 (struct uip_ip_hdr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*) ;


 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,struct uip_netif*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct uip_pbuf*,int ) ;
 int FUNC_15 (struct uip_pbuf*,struct uip_netif*) ;
 scalar_t__ FUNC_16 (struct uip_ip_hdr*,int) ;
 struct uip_pbuf* FUNC_17 (struct uip_pbuf*) ;
 scalar_t__ FUNC_18 (struct uip_netif*) ;
 struct uip_netif* VAR_4 ;
 int FUNC_19 (struct uip_pbuf*) ;
 int FUNC_20 (struct uip_pbuf*,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_21 (struct uip_pbuf*,struct uip_netif*) ;

s8_t FUNC_22(struct uip_pbuf *VAR_6,struct uip_netif *VAR_7)
{
 u16_t VAR_8;
 struct uip_ip_hdr *VAR_9;
 struct uip_netif *VAR_10;

 VAR_9 = VAR_6->payload;
 if(FUNC_5(VAR_9)!=4) {
  FUNC_0("uip_ipinput: ip packet dropped due to bad version number.\n");
  FUNC_19(VAR_6);
  return 0;
 }

 VAR_8 = FUNC_1(VAR_9);
 VAR_8 *= 4;

 if(VAR_8>VAR_6->len) {
  FUNC_0("uip_ipinput: ip packet dropped due to too small packet size.\n");
  FUNC_19(VAR_6);
  return 0;
 }

 if(FUNC_16(VAR_9,VAR_8)!=0) {
     FUNC_7(++VAR_5.ip.drop);
     FUNC_7(++VAR_5.ip.chkerr);
  FUNC_0("uip_ipinput: bad checksum.\n");
  FUNC_19(VAR_6);
  return 0;
 }

 FUNC_20(VAR_6,FUNC_13(FUNC_2(VAR_9)));

 for(VAR_10=VAR_4;VAR_10!=((void*)0);VAR_10=VAR_10->next) {
  if(FUNC_18(VAR_10) && !FUNC_10(&VAR_10->ip_addr)) {
   if(FUNC_9(&VAR_9->dst,&VAR_10->ip_addr) ||
    FUNC_11(&VAR_9->dst,VAR_10)) break;
  }
 }

 if(!VAR_10) {
  FUNC_0("uip_ipinput: no route found.\n");
  FUNC_19(VAR_6);
  return 0;
 }

 if((FUNC_3(VAR_9)&FUNC_8(VAR_3|VAR_2))!=0) {






  FUNC_19(VAR_6);
     FUNC_7(++VAR_5.ip.drop);
  FUNC_0("ip: fragment dropped.\n");
  return 0;

 }

 switch(FUNC_4(VAR_9)) {
  case 128:
   FUNC_21(VAR_6,VAR_7);
   break;
  case 129:
   FUNC_15(VAR_6,VAR_7);
   break;
  default:
   FUNC_6("uip_ipinput: Unsupported protocol.\n");
   if(!FUNC_11(&(VAR_9->dst),VAR_7)
    && !FUNC_12(&(VAR_9->dst))) {
    VAR_6->payload = VAR_9;
    FUNC_14(VAR_6,VAR_1);
   }
   FUNC_19(VAR_6);
   break;
 }
 return 0;
}
