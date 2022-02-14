
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi {int stopped; int wmi_event_tasklet; int pending_tx_events; int cmd_wait; int multi_write_mutex; int op_mutex; int event_lock; int wmi_lock; int wmi_event_queue; struct ath9k_htc_priv* drv_priv; } ;
struct ath9k_htc_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct wmi* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,unsigned long) ;

struct wmi *FUNC_7(struct ath9k_htc_priv *VAR_2)
{
 struct wmi *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct wmi), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->drv_priv = VAR_2;
 VAR_3->stopped = 0;
 FUNC_4(&VAR_3->wmi_event_queue);
 FUNC_5(&VAR_3->wmi_lock);
 FUNC_5(&VAR_3->event_lock);
 FUNC_3(&VAR_3->op_mutex);
 FUNC_3(&VAR_3->multi_write_mutex);
 FUNC_1(&VAR_3->cmd_wait);
 FUNC_0(&VAR_3->pending_tx_events);
 FUNC_6(&VAR_3->wmi_event_tasklet, VAR_1,
       (unsigned long)VAR_3);

 return VAR_3;
}
