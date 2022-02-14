
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
struct netif {int flags; int * name; struct netif* next; scalar_t__ loop_cnt_current; int * addr_hint; int input; scalar_t__ num; void* state; int * loop_last; int * loop_first; int * igmp_mac_filter; int * link_callback; int * status_callback; int * autoip; int * dhcps_pcb; int * dhcp; int gw; int netmask; int ip_addr; } ;
typedef int netif_input_fn ;
typedef scalar_t__ (* netif_init_fn ) (struct netif*) ;
typedef int ip_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct netif*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 struct netif* VAR_3 ;
 int FUNC_5 (struct netif*,int *,int *,int *) ;
 int FUNC_6 () ;

struct netif *
FUNC_7(struct netif *VAR_4, ip_addr_t *VAR_5, ip_addr_t *VAR_6,
  ip_addr_t *VAR_7, void *VAR_8, netif_init_fn VAR_9, netif_input_fn VAR_10)
{
  static u8_t VAR_11 = 0;

  FUNC_0("No init function given", VAR_9 != ((void*)0));


  FUNC_4(&VAR_4->ip_addr);
  FUNC_4(&VAR_4->netmask);
  FUNC_4(&VAR_4->gw);
  VAR_4->flags = 0;
  VAR_4->state = VAR_8;
  VAR_4->num = VAR_11++;
  VAR_4->input = VAR_10;







  FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);


  if (VAR_9(VAR_4) != VAR_0) {
    return ((void*)0);
  }


  VAR_4->next = VAR_3;
  VAR_3 = VAR_4;
  FUNC_6();
  FUNC_1(VAR_1, ("netif: added interface %c%c IP addr ",
    VAR_4->name[0], VAR_4->name[1]));
  FUNC_3(VAR_1, VAR_5);
  FUNC_1(VAR_1, (" netmask "));
  FUNC_3(VAR_1, VAR_6);
  FUNC_1(VAR_1, (" gw "));
  FUNC_3(VAR_1, VAR_7);
  FUNC_1(VAR_1, ("\n"));
  return VAR_4;
}
