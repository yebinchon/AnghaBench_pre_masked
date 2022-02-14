
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_pbuf {struct uip_eth_hdr* payload; } ;
struct uip_netif {int (* input ) (struct uip_pbuf*,struct uip_netif*) ;scalar_t__ state; } ;
struct uip_eth_hdr {int type; } ;
struct bba_priv {int ethaddr; } ;
typedef int s32 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct uip_pbuf*,struct uip_netif*) ;
 int FUNC_2 (struct uip_netif*,int ,struct uip_pbuf*) ;
 int FUNC_3 (struct uip_netif*,struct uip_pbuf*) ;
 int FUNC_4 (struct uip_pbuf*) ;
 int FUNC_5 (struct uip_pbuf*,int const) ;

__attribute__((used)) static void FUNC_6(struct uip_pbuf *VAR_0,struct uip_netif *VAR_1)
{
 struct uip_eth_hdr *VAR_2 = ((void*)0);
 struct bba_priv *VAR_3 = (struct bba_priv*)VAR_1->state;
 const s32 VAR_4 = sizeof(struct uip_eth_hdr);

 if(VAR_0) {
  VAR_2 = VAR_0->payload;
  switch(FUNC_0(VAR_2->type)) {
   case 128:
    FUNC_3(VAR_1,VAR_0);
    FUNC_5(VAR_0,-(VAR_4));
    VAR_1->input(VAR_0,VAR_1);
    break;
   case 129:
    FUNC_2(VAR_1,VAR_3->ethaddr,VAR_0);
    break;
   default:
    FUNC_4(VAR_0);
    break;
  }
 }
}
