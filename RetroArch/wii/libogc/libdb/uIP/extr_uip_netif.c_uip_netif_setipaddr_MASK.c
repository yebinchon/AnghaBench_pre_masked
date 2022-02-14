
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uip_ip_addr {int dummy; } ;
struct uip_tcp_pcb_listen {struct uip_ip_addr local_ip; struct uip_tcp_pcb_listen* next; } ;
struct uip_tcp_pcb {struct uip_tcp_pcb* next; struct uip_ip_addr local_ip; } ;
struct uip_netif {struct uip_ip_addr ip_addr; } ;
struct TYPE_2__ {struct uip_tcp_pcb_listen* listen_pcbs; } ;


 scalar_t__ FUNC_0 (struct uip_ip_addr*,struct uip_ip_addr*) ;
 int FUNC_1 (struct uip_ip_addr*,struct uip_ip_addr*) ;
 struct uip_tcp_pcb* VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_2(struct uip_netif *VAR_2,struct uip_ip_addr *VAR_3)
{
 FUNC_1(&VAR_2->ip_addr,VAR_3);
}
