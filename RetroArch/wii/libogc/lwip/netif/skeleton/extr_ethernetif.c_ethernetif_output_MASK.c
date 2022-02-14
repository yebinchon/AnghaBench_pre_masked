
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct pbuf {int dummy; } ;
struct netif {struct ethernetif* state; } ;
struct ip_addr {int dummy; } ;
struct ethernetif {int dummy; } ;
struct eth_hdr {int dummy; } ;
struct eth_addr {int dummy; } ;
typedef int err_t ;


 int VAR_0 ;
 struct pbuf* FUNC_0 (struct netif*,struct ip_addr*,struct pbuf*) ;
 int FUNC_1 (struct ethernetif*,struct pbuf*) ;

__attribute__((used)) static err_t
FUNC_2(struct netif *VAR_1, struct pbuf *VAR_2,
      struct ip_addr *VAR_3)
{
  struct ethernetif *VAR_4;
  struct pbuf *VAR_5;
  struct eth_hdr *VAR_6;
  struct eth_addr *VAR_7, VAR_8;
  struct ip_addr *VAR_9;
  err_t VAR_10;
  u8_t VAR_11;

  VAR_4 = VAR_1->state;


  VAR_2 = FUNC_0(VAR_1, VAR_3, VAR_2);


  if (VAR_2 == ((void*)0))
  {


   return VAR_0;
  }


  return FUNC_1(VAR_4, VAR_2);

}
