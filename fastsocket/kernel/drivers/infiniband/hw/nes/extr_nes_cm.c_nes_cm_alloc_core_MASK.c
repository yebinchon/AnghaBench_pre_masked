
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list; } ;
struct TYPE_4__ {int function; } ;
struct nes_cm_core {void* disconn_wq; int post_event; void* event_wq; TYPE_1__ listen_list; int listen_list_lock; int ht_lock; int * api; int events_posted; int free_tx_pkt_max; int state; int mtu; TYPE_2__ tcp_timer; int connected_nodes; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct nes_cm_core* FUNC_4 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct nes_cm_core*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct nes_cm_core *FUNC_8(void)
{
 struct nes_cm_core *VAR_8;



 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 FUNC_0(&VAR_8->connected_nodes);
 FUNC_3(&VAR_8->tcp_timer);
 VAR_8->tcp_timer.function = VAR_7;

 VAR_8->mtu = VAR_2;
 VAR_8->state = VAR_3;
 VAR_8->free_tx_pkt_max = VAR_1;

 FUNC_1(&VAR_8->events_posted, 0);

 VAR_8->api = &VAR_5;

 FUNC_7(&VAR_8->ht_lock);
 FUNC_7(&VAR_8->listen_list_lock);

 FUNC_0(&VAR_8->listen_list.list);

 FUNC_5(VAR_4, "Init CM Core completed -- cm_core=%p\n", VAR_8);

 FUNC_5(VAR_4, "Enable QUEUE EVENTS\n");
 VAR_8->event_wq = FUNC_2("nesewq");
 VAR_8->post_event = VAR_6;
 FUNC_5(VAR_4, "Enable QUEUE DISCONNECTS\n");
 VAR_8->disconn_wq = FUNC_2("nesdwq");

 FUNC_6(VAR_8);
 return VAR_8;
}
