
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pbuf {int dummy; } ;
struct netif {int (* output ) (struct netif*,struct pbuf*,struct ip_addr*) ;} ;
struct ip_hdr {scalar_t__ hoplim; scalar_t__ nexthdr; int dest; } ;
struct ip_addr {int dummy; } ;
struct TYPE_2__ {int xmit; int fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pbuf*,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int ,struct ip_addr*) ;
 struct netif* FUNC_5 (struct ip_addr*) ;
 int FUNC_6 (struct pbuf*) ;
 int FUNC_7 (struct netif*,struct pbuf*,struct ip_addr*) ;

__attribute__((used)) static void
FUNC_8(struct pbuf *VAR_5, struct ip_hdr *VAR_6)
{
  struct netif *VAR_7;

  VAR_3;

  if ((VAR_7 = FUNC_5((struct ip_addr *)&(VAR_6->dest))) == ((void*)0)) {

    FUNC_1(VAR_1, ("ip_input: no forwarding route found for "));



    FUNC_1(VAR_1, ("\n"));
    FUNC_6(VAR_5);
    return;
  }

  if (--VAR_6->hoplim == 0) {






    FUNC_6(VAR_5);
    return;
  }
  FUNC_1(VAR_1, ("ip_forward: forwarding packet to "));



  FUNC_1(VAR_1, ("\n"));

  FUNC_0(VAR_4.fw);
  FUNC_0(VAR_4.xmit);

  FUNC_2("ip_forward");

  VAR_7->output(VAR_7, VAR_5, (struct ip_addr *)&(VAR_6->dest));
}
