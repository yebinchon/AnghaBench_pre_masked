
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uipdev_s ;
struct uip_netif {int mtu; int hwaddr_len; scalar_t__ hwaddr; int flags; int linkoutput; int output; int * name; } ;
struct uip_eth_addr {int dummy; } ;
struct TYPE_4__ {int state; struct uip_eth_addr* ethaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 struct uip_netif* VAR_7 ;

uipdev_s FUNC_0(struct uip_netif *VAR_8)
{
 VAR_8->name[0] = VAR_0;
 VAR_8->name[1] = VAR_1;

 VAR_8->output = VAR_5;
 VAR_8->linkoutput = VAR_4;
 VAR_8->mtu = 1500;
 VAR_8->flags = VAR_3;
 VAR_8->hwaddr_len = 6;

 VAR_6.ethaddr = (struct uip_eth_addr*)VAR_8->hwaddr;
 VAR_6.state = VAR_2;

 VAR_7 = VAR_8;
 return &VAR_6;
}
