
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_priv {int hw_restart_in_progress; scalar_t__ hw_restart_owner; int pending_tx_pkts; int tx_lock; int * tx_wait; int fw_reload; int watchdog_event_pending; } ;
struct ieee80211_hw {int wiphy; struct mwl8k_priv* priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct ieee80211_hw*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 unsigned long FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_hw *VAR_5)
{
 struct mwl8k_priv *VAR_6 = VAR_5->priv;
 FUNC_0(VAR_4);
 int VAR_7;
 int VAR_8;

 FUNC_4();






 if (VAR_6->hw_restart_in_progress) {
  if (VAR_6->hw_restart_owner == VAR_3)
   return 0;
  else
   return -VAR_0;
 }

 if (FUNC_2(&VAR_6->watchdog_event_pending))
  return 0;





 if (!VAR_6->pending_tx_pkts)
  return 0;

 VAR_7 = 0;
 VAR_8 = 0;

 FUNC_7(&VAR_6->tx_lock);
 VAR_6->tx_wait = &VAR_4;
 while (!VAR_8) {
  int VAR_9;
  unsigned long VAR_10;

  VAR_9 = VAR_6->pending_tx_pkts;

  FUNC_8(&VAR_6->tx_lock);
  VAR_10 = FUNC_9(&VAR_4,
       FUNC_5(VAR_2));

  if (FUNC_2(&VAR_6->watchdog_event_pending)) {
   FUNC_7(&VAR_6->tx_lock);
   VAR_6->tx_wait = ((void*)0);
   FUNC_8(&VAR_6->tx_lock);
   return 0;
  }

  FUNC_7(&VAR_6->tx_lock);

  if (VAR_10) {
   FUNC_1(VAR_6->pending_tx_pkts);
   if (VAR_7)
    FUNC_11(VAR_5->wiphy, "tx rings drained\n");
   break;
  }

  if (VAR_6->pending_tx_pkts < VAR_9) {
   FUNC_11(VAR_5->wiphy,
         "waiting for tx rings to drain (%d -> %d pkts)\n",
         VAR_9, VAR_6->pending_tx_pkts);
   VAR_7 = 1;
   continue;
  }

  VAR_6->tx_wait = ((void*)0);

  FUNC_10(VAR_5->wiphy, "tx rings stuck for %d ms\n",
     VAR_2);
  FUNC_6(VAR_5);
  VAR_6->hw_restart_in_progress = 1;
  FUNC_3(VAR_5, &VAR_6->fw_reload);

  VAR_8 = -VAR_1;
 }
 VAR_6->tx_wait = ((void*)0);
 FUNC_8(&VAR_6->tx_lock);

 return VAR_8;
}
