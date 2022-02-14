
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pbuf {struct eth_hdr* payload; } ;
struct netif {int (* input ) (struct pbuf*,struct netif*) ;struct ethernetif* state; } ;
struct ethernetif {int ethaddr; } ;
struct eth_hdr {int type; } ;
struct TYPE_3__ {int recv; } ;
struct TYPE_4__ {TYPE_1__ link; } ;




 struct pbuf* FUNC_0 (struct netif*,int ,struct pbuf*) ;
 struct pbuf* FUNC_1 (struct netif*,struct pbuf*) ;
 int FUNC_2 (int ) ;
 struct pbuf* FUNC_3 (struct ethernetif*) ;
 int FUNC_4 (struct ethernetif*,struct pbuf*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_5 (struct pbuf*) ;
 int FUNC_6 (struct pbuf*,int) ;
 int FUNC_7 (struct pbuf*,struct netif*) ;

__attribute__((used)) static void
FUNC_8(struct netif *VAR_1)
{
  struct ethernetif *VAR_2;
  struct eth_hdr *VAR_3;
  struct pbuf *VAR_4, *VAR_5;

  VAR_2 = VAR_1->state;

  VAR_4 = FUNC_3(VAR_2);

  if (VAR_4 != ((void*)0))
    return;





  VAR_3 = VAR_4->payload;
  VAR_5 = ((void*)0);

  switch (FUNC_2(VAR_3->type)) {
    case 128:
      VAR_5 = FUNC_1(VAR_1, VAR_4);
      FUNC_6(VAR_4, -14);
      VAR_1->input(VAR_4, VAR_1);
      break;

    case 129:
      VAR_5 = FUNC_0(VAR_1, VAR_2->ethaddr, VAR_4);
      break;
    default:
      FUNC_5(VAR_4);
      VAR_4 = ((void*)0);
      break;
  }
  if (VAR_5 != ((void*)0)) {
    FUNC_4(VAR_2, VAR_5);
    FUNC_5(VAR_5);
    VAR_5 = ((void*)0);
  }
}
