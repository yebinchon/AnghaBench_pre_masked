
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct uip_pbuf {int dummy; } ;
struct uip_netif {int dummy; } ;
struct uip_ip_addr {int dummy; } ;
typedef int s8_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct uip_pbuf*,struct uip_ip_addr*,struct uip_ip_addr*,int ,int ,int ,struct uip_netif*) ;
 struct uip_netif* FUNC_2 (struct uip_ip_addr*) ;

s8_t FUNC_3(struct uip_pbuf *VAR_1,struct uip_ip_addr *VAR_2,struct uip_ip_addr *VAR_3,u8_t VAR_4,u8_t VAR_5,u8_t VAR_6)
{
 struct uip_netif *VAR_7;

 if((VAR_7=FUNC_2(VAR_3))==((void*)0)) {
  FUNC_0("uip_ipoutput: No route found.\n");
  return VAR_0;
 }
 return FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,VAR_7);
}
