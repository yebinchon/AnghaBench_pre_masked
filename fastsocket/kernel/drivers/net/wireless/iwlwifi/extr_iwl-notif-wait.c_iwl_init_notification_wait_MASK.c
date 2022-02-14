
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_notification_wait {int (* fn ) (struct iwl_notif_wait_data*,struct iwl_rx_packet*,void*) ;int n_cmds; int triggered; int aborted; int list; int cmds; void* fn_data; } ;
struct iwl_notif_wait_data {int notif_wait_lock; int notif_waits; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct iwl_notif_wait_data *VAR_1,
      struct iwl_notification_wait *VAR_2,
      const u8 *VAR_3, int VAR_4,
      bool (*VAR_5)(struct iwl_notif_wait_data *VAR_6,
          struct iwl_rx_packet *VAR_7, void *VAR_8),
      void *VAR_9)
{
 if (FUNC_0(VAR_4 > VAR_0))
  VAR_4 = VAR_0;

 VAR_2->fn = VAR_5;
 VAR_2->fn_data = VAR_9;
 VAR_2->n_cmds = VAR_4;
 FUNC_2(VAR_2->cmds, VAR_3, VAR_4);
 VAR_2->triggered = 0;
 VAR_2->aborted = 0;

 FUNC_3(&VAR_1->notif_wait_lock);
 FUNC_1(&VAR_2->list, &VAR_1->notif_waits);
 FUNC_4(&VAR_1->notif_wait_lock);
}
