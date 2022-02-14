
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {int irq_rx_tasklet; TYPE_1__* ieee80211; int qos_activate; int initialgain_operate_wq; int update_beacon_wq; int rfpath_check_wq; int txpower_tracking_wq; int watch_dog_wq; int reset_wq; void* priv_wq; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hw_sleep_wq; int hw_wakeup_wq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,int ) ;
 void* VAR_1 ;
 void* FUNC_2 (int ,...) ;
 void* VAR_2 ;
 void* VAR_3 ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_4 (int *,void (*) (unsigned long),unsigned long) ;

__attribute__((used)) static void FUNC_5(struct net_device* VAR_11)
{
 struct r8192_priv *VAR_12 = FUNC_3(VAR_11);




 VAR_12->priv_wq = FUNC_2(VAR_0);


 FUNC_1(&VAR_12->reset_wq, VAR_8);


 FUNC_0(&VAR_12->watch_dog_wq, VAR_10);
 FUNC_0(&VAR_12->txpower_tracking_wq, VAR_3);

 FUNC_0(&VAR_12->rfpath_check_wq, VAR_2);
 FUNC_0(&VAR_12->update_beacon_wq, VAR_9);
 FUNC_0(&VAR_12->initialgain_operate_wq, VAR_1);


 FUNC_1(&VAR_12->qos_activate, VAR_7);
 FUNC_0(&VAR_12->ieee80211->hw_wakeup_wq,(void*) VAR_5);
 FUNC_0(&VAR_12->ieee80211->hw_sleep_wq,(void*) VAR_4);

 FUNC_4(&VAR_12->irq_rx_tasklet,
      (void(*)(unsigned long))VAR_6,
      (unsigned long)VAR_12);
}
