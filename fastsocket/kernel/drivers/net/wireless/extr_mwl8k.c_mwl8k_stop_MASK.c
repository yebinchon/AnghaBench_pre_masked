
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_priv {int irq; int poll_rx_task; int poll_tx_task; int * beacon_skb; int watchdog_ba_handle; int finalize_join_worker; TYPE_1__* pdev; scalar_t__ regs; int hw_restart_in_progress; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct mwl8k_priv*) ;
 int FUNC_7 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_2)
{
 struct mwl8k_priv *VAR_3 = VAR_2->priv;
 int VAR_4;

 if (!VAR_3->hw_restart_in_progress)
  FUNC_5(VAR_2);

 FUNC_3(VAR_2);


 FUNC_4(0, VAR_3->regs + VAR_1);
 if (VAR_3->irq != -1) {
  FUNC_2(VAR_3->pdev->irq, VAR_2);
  VAR_3->irq = -1;
 }


 FUNC_0(&VAR_3->finalize_join_worker);
 FUNC_0(&VAR_3->watchdog_ba_handle);
 if (VAR_3->beacon_skb != ((void*)0))
  FUNC_1(VAR_3->beacon_skb);


 FUNC_8(&VAR_3->poll_tx_task);
 FUNC_8(&VAR_3->poll_rx_task);


 for (VAR_4 = 0; VAR_4 < FUNC_6(VAR_3); VAR_4++)
  FUNC_7(VAR_2, VAR_4, VAR_0, 1);
}
