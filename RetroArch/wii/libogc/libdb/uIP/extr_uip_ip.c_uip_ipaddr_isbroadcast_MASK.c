
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8_t ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {int addr; } ;
struct uip_netif {int flags; TYPE_4__ netmask; TYPE_3__ ip_addr; } ;
struct uip_ip_addr {int addr; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct uip_ip_addr*,TYPE_3__*,TYPE_4__*) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

u8_t FUNC_1(struct uip_ip_addr *VAR_3,struct uip_netif *VAR_4)
{
 if(VAR_3->addr==VAR_2.addr
  || VAR_3->addr==VAR_1.addr)
  return 1;
 else if(!(VAR_4->flags&VAR_0))
  return 0;
 else if(VAR_3->addr==VAR_4->ip_addr.addr)
  return 0;
 else if(FUNC_0(VAR_3,&VAR_4->ip_addr,&VAR_4->netmask)
  && ((VAR_3->addr&~VAR_4->netmask.addr)==(VAR_2.addr&~VAR_4->netmask.addr)))
  return 1;
 else
  return 0;
}
