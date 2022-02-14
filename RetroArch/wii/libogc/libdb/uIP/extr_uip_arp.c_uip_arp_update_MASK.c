
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct uip_netif {size_t hwaddr_len; } ;
struct uip_ip_addr {int dummy; } ;
struct uip_eth_addr {int * addr; } ;
typedef size_t s8_t ;
struct TYPE_3__ {int * addr; } ;
struct TYPE_4__ {TYPE_1__ ethaddr; int state; scalar_t__ time; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_0 (struct uip_ip_addr*) ;
 scalar_t__ FUNC_1 (struct uip_ip_addr*,struct uip_netif*) ;
 scalar_t__ FUNC_2 (struct uip_ip_addr*) ;
 size_t FUNC_3 (struct uip_ip_addr*,int ) ;

__attribute__((used)) static s8_t FUNC_4(struct uip_netif *VAR_4,struct uip_ip_addr *VAR_5, struct uip_eth_addr *VAR_6,u8_t VAR_7)
{
 s8_t VAR_8,VAR_9;

 if(FUNC_0(VAR_5) ||
  FUNC_1(VAR_5,VAR_4) ||
  FUNC_2(VAR_5)) return VAR_1;

 VAR_8 = FUNC_3(VAR_5,VAR_7);
 if(VAR_8<0) return VAR_8;

 VAR_3[VAR_8].time = 0;
 VAR_3[VAR_8].state = VAR_0;
 for(VAR_9=0;VAR_9<VAR_4->hwaddr_len;VAR_9++) VAR_3[VAR_8].ethaddr.addr[VAR_9] = VAR_6->addr[VAR_9];

 return VAR_2;
}
