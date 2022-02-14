
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct uip_pbuf {scalar_t__ tot_len; struct uip_ip_hdr* payload; } ;
struct uip_ip_addr {int dummy; } ;
struct uip_netif {scalar_t__ mtu; int (* output ) (struct uip_netif*,struct uip_pbuf*,struct uip_ip_addr*) ;struct uip_ip_addr ip_addr; } ;
struct uip_ip_hdr {struct uip_ip_addr dst; struct uip_ip_addr src; } ;
typedef int s8_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct uip_ip_hdr*,int ) ;
 int FUNC_2 (struct uip_ip_hdr*,int ) ;
 int FUNC_3 (struct uip_ip_hdr*,int ) ;
 int FUNC_4 (struct uip_ip_hdr*,int ) ;
 int FUNC_5 (struct uip_ip_hdr*,int ) ;
 int FUNC_6 (struct uip_ip_hdr*,int ) ;
 int FUNC_7 (struct uip_ip_hdr*,int,int,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct uip_ip_addr*) ;
 int FUNC_10 (struct uip_ip_addr*,struct uip_ip_addr*) ;
 int FUNC_11 (struct uip_netif*,struct uip_pbuf*,struct uip_ip_addr*) ;
 int FUNC_12 (struct uip_ip_hdr*,int) ;
 int FUNC_13 (struct uip_pbuf*,struct uip_netif*,struct uip_ip_addr*) ;
 scalar_t__ FUNC_14 (struct uip_pbuf*,int) ;

s8_t FUNC_15(struct uip_pbuf *VAR_3,struct uip_ip_addr *VAR_4,struct uip_ip_addr *VAR_5,u8_t VAR_6,u8_t VAR_7,u8_t VAR_8,struct uip_netif *VAR_9)
{
 struct uip_ip_hdr *VAR_10 = ((void*)0);
 u16_t VAR_11 = 0;

 if(VAR_5!=((void*)0)) {
  if(FUNC_14(VAR_3,VAR_2)) {
   FUNC_0("uip_ipoutput_if: not enough room for IP header in pbuf.\n");
   return VAR_0;
  }

  VAR_10 = VAR_3->payload;

  FUNC_6(VAR_10,VAR_6);
  FUNC_5(VAR_10,VAR_8);

  FUNC_10(&VAR_10->dst,VAR_5);

  FUNC_7(VAR_10,4,(VAR_2/4),VAR_7);
  FUNC_3(VAR_10,FUNC_8(VAR_3->tot_len));
  FUNC_4(VAR_10,FUNC_8(VAR_1));
  FUNC_2(VAR_10,FUNC_8(VAR_11));
  ++VAR_11;

  if(FUNC_9(VAR_4)) FUNC_10(&VAR_10->src,&VAR_9->ip_addr);
  else FUNC_10(&VAR_10->src,VAR_4);

  FUNC_1(VAR_10,0);
  FUNC_1(VAR_10,FUNC_12(VAR_10,VAR_2));
 } else {
  VAR_10 = VAR_3->payload;
  VAR_5 = &VAR_10->dst;
 }




 return VAR_9->output(VAR_9,VAR_3,VAR_5);
}
