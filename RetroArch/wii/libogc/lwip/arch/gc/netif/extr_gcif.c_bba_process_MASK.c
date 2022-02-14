
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {struct eth_hdr* payload; } ;
struct netif {scalar_t__ state; } ;
struct eth_hdr {int type; } ;
struct bba_priv {int ethaddr; } ;
typedef int s32 ;




 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct netif*,int ,struct pbuf*) ;
 int FUNC_2 (struct netif*,struct pbuf*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pbuf*,struct netif*) ;
 int FUNC_5 (struct pbuf*) ;
 int FUNC_6 (struct pbuf*,int const) ;

void FUNC_7(struct pbuf *VAR_1,struct netif *VAR_2)
{
 struct eth_hdr *VAR_3 = ((void*)0);
 struct bba_priv *VAR_4 = (struct bba_priv*)VAR_2->state;
 const s32 VAR_5 = sizeof(struct eth_hdr);

 if(VAR_1) {
  VAR_3 = VAR_1->payload;
  switch(FUNC_3(VAR_3->type)) {
   case 128:
    FUNC_0(VAR_0,("bba_process: passing packet up to IP layer\n"));

    FUNC_2(VAR_2,VAR_1);
    FUNC_6(VAR_1,-(VAR_5));
    FUNC_4(VAR_1,VAR_2);
    break;
   case 129:

    FUNC_0(VAR_0,("bba_process: passing packet up to ARP layer\n"));
    FUNC_1(VAR_2, VAR_4->ethaddr, VAR_1);
    break;

   default:

    FUNC_5(VAR_1);
    break;
  }
 }
}
