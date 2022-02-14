
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_priv {int irq; int poll_rx_task; int poll_tx_task; TYPE_1__* pdev; scalar_t__ regs; int ap_fw; } ;
struct ieee80211_hw {int wiphy; struct mwl8k_priv* priv; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,char*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*,int ) ;
 int FUNC_8 (struct ieee80211_hw*,int ) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 int VAR_6 ;
 int FUNC_11 (int,int ,int ,int ,struct ieee80211_hw*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*) ;

__attribute__((used)) static int FUNC_15(struct ieee80211_hw *VAR_7)
{
 struct mwl8k_priv *VAR_8 = VAR_7->priv;
 int VAR_9;

 VAR_9 = FUNC_11(VAR_8->pdev->irq, VAR_6,
    VAR_1, VAR_5, VAR_7);
 if (VAR_9) {
  VAR_8->irq = -1;
  FUNC_14(VAR_7->wiphy, "failed to register IRQ handler\n");
  return -VAR_0;
 }
 VAR_8->irq = VAR_8->pdev->irq;


 FUNC_13(&VAR_8->poll_tx_task);
 FUNC_13(&VAR_8->poll_rx_task);


 FUNC_2(VAR_2, VAR_8->regs + VAR_3);
 FUNC_2(VAR_2,
    VAR_8->regs + VAR_4);

 VAR_9 = FUNC_9(VAR_7);
 if (!VAR_9) {
  VAR_9 = FUNC_4(VAR_7);

  if (!VAR_8->ap_fw) {
   if (!VAR_9)
    VAR_9 = FUNC_3(VAR_7, 0);

   if (!VAR_9)
    VAR_9 = FUNC_6(VAR_7);

   if (!VAR_9)
    VAR_9 = FUNC_5(VAR_7,
      "\x00\x00\x00\x00\x00\x00");
  }

  if (!VAR_9)
   VAR_9 = FUNC_7(VAR_7, 0);

  if (!VAR_9)
   VAR_9 = FUNC_8(VAR_7, 0);

  FUNC_10(VAR_7);
 }

 if (VAR_9) {
  FUNC_2(0, VAR_8->regs + VAR_3);
  FUNC_0(VAR_8->pdev->irq, VAR_7);
  VAR_8->irq = -1;
  FUNC_12(&VAR_8->poll_tx_task);
  FUNC_12(&VAR_8->poll_rx_task);
 } else {
  FUNC_1(VAR_7);
 }

 return VAR_9;
}
