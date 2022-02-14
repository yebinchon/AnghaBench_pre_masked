
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pbuf {struct ethip_hdr* payload; } ;
struct netif {int netmask; int ip_addr; } ;
struct TYPE_3__ {int src; } ;
struct TYPE_4__ {int src; } ;
struct ethip_hdr {TYPE_1__ eth; TYPE_2__ ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (struct netif*,int *,int *,int ) ;

void
FUNC_4(struct netif *VAR_2, struct pbuf *VAR_3)
{
  struct ethip_hdr *VAR_4;
  FUNC_0("netif != NULL", VAR_2 != ((void*)0));


  VAR_4 = VAR_3->payload;

  if (!FUNC_2(&(VAR_4->ip.src), &(VAR_2->ip_addr), &(VAR_2->netmask))) {

    return;
  }

  FUNC_1(VAR_1 | VAR_0, ("etharp_ip_input: updating ETHARP table.\n"));



  FUNC_3(VAR_2, &(VAR_4->ip.src), &(VAR_4->eth.src), 0);
}
