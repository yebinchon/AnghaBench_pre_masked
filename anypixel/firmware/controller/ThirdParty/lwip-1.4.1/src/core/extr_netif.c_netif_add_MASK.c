
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int flags; int * name; struct netif* next; scalar_t__ loop_cnt_current; int input; scalar_t__ num; void* state; int * loop_last; int * loop_first; int * igmp_mac_filter; int * link_callback; int * status_callback; int * autoip; int * dhcp; int gw; int netmask; int ip_addr; } ;
typedef int netif_input_fn ;
typedef scalar_t__ (* netif_init_fn ) (struct netif*) ;
typedef int ip_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct netif*,int *) ;
 int FUNC_3 (struct netif*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 struct netif* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct netif*,int *,int *,int *) ;
 int FUNC_7 () ;

struct netif *
FUNC_8(struct netif *VAR_5, ip_addr_t *VAR_6, ip_addr_t *VAR_7,
  ip_addr_t *VAR_8, void *VAR_9, netif_init_fn VAR_10, netif_input_fn VAR_11)
{

  FUNC_0("No init function given", VAR_10 != ((void*)0));


  FUNC_5(&VAR_5->ip_addr);
  FUNC_5(&VAR_5->netmask);
  FUNC_5(&VAR_5->gw);
  VAR_5->flags = 0;
  VAR_5->state = VAR_9;
  VAR_5->num = VAR_4++;
  VAR_5->input = VAR_11;
  FUNC_2(VAR_5, ((void*)0));




  FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8);


  if (VAR_10(VAR_5) != VAR_0) {
    return ((void*)0);
  }


  VAR_5->next = VAR_3;
  VAR_3 = VAR_5;
  FUNC_7();
  FUNC_1(VAR_1, ("netif: added interface %c%c IP addr ",
    VAR_5->name[0], VAR_5->name[1]));
  FUNC_4(VAR_1, VAR_6);
  FUNC_1(VAR_1, (" netmask "));
  FUNC_4(VAR_1, VAR_7);
  FUNC_1(VAR_1, (" gw "));
  FUNC_4(VAR_1, VAR_8);
  FUNC_1(VAR_1, ("\n"));
  return VAR_5;
}
