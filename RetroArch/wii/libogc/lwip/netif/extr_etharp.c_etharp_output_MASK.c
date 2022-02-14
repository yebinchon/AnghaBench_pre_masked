
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8_t ;
struct pbuf {struct eth_hdr* payload; } ;
struct ip_addr {scalar_t__ addr; } ;
struct netif {size_t hwaddr_len; int (* linkoutput ) (struct netif*,struct pbuf*) ;scalar_t__ hwaddr; struct ip_addr gw; int netmask; int ip_addr; } ;
struct TYPE_5__ {int* addr; } ;
struct TYPE_4__ {int* addr; } ;
struct eth_hdr {int type; TYPE_2__ src; TYPE_1__ dest; } ;
struct eth_addr {int* addr; } ;
typedef int err_t ;
struct TYPE_6__ {int lenerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct netif*,struct ip_addr*,struct pbuf*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ip_addr*) ;
 int FUNC_5 (struct ip_addr*) ;
 int FUNC_6 (struct ip_addr*) ;
 scalar_t__ FUNC_7 (struct ip_addr*,struct netif*) ;
 scalar_t__ FUNC_8 (struct ip_addr*) ;
 int FUNC_9 (struct ip_addr*,int *,int *) ;
 TYPE_3__ VAR_6 ;
 scalar_t__ FUNC_10 (struct pbuf*,int) ;
 int FUNC_11 (struct netif*,struct pbuf*) ;

err_t
FUNC_12(struct netif *VAR_7, struct ip_addr *VAR_8, struct pbuf *VAR_9)
{
  struct eth_addr *VAR_10, *VAR_11, VAR_12;
  struct eth_hdr *VAR_13;
  u8_t VAR_14;


  if (FUNC_10(VAR_9, sizeof(struct eth_hdr)) != 0) {

    FUNC_1(VAR_3 | VAR_0 | 2, ("etharp_output: could not allocate room for header.\n"));
    FUNC_0(VAR_6.lenerr);
    return VAR_1;
  }


  VAR_10 = ((void*)0);




  if (FUNC_7(VAR_8, VAR_7)) {

    VAR_10 = (struct eth_addr *)&VAR_5;

  } else if (FUNC_8(VAR_8)) {

    VAR_12.addr[0] = 0x01;
    VAR_12.addr[1] = 0x00;
    VAR_12.addr[2] = 0x5e;
    VAR_12.addr[3] = FUNC_4(VAR_8) & 0x7f;
    VAR_12.addr[4] = FUNC_5(VAR_8);
    VAR_12.addr[5] = FUNC_6(VAR_8);

    VAR_10 = &VAR_12;

  } else {

    if (!FUNC_9(VAR_8, &(VAR_7->ip_addr), &(VAR_7->netmask))) {

      if (VAR_7->gw.addr != 0) {

        VAR_8 = &(VAR_7->gw);

      } else {

        return VAR_2;
      }
    }

    return FUNC_2(VAR_7, VAR_8, VAR_9);
  }



  VAR_11 = (struct eth_addr *)VAR_7->hwaddr;
  VAR_13 = VAR_9->payload;
  for (VAR_14 = 0; VAR_14 < VAR_7->hwaddr_len; VAR_14++) {
    VAR_13->dest.addr[VAR_14] = VAR_10->addr[VAR_14];
    VAR_13->src.addr[VAR_14] = VAR_11->addr[VAR_14];
  }
  VAR_13->type = FUNC_3(VAR_4);

  return VAR_7->linkoutput(VAR_7, VAR_9);
}
