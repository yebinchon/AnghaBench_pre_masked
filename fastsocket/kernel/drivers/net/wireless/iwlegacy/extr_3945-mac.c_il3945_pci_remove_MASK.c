
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct pci_dev {int irq; TYPE_1__ dev; } ;
struct TYPE_6__ {scalar_t__ bd; } ;
struct TYPE_5__ {int rfkill_poll; } ;
struct il_priv {int hw; scalar_t__ beacon_skb; int scan_cmd; int hw_base; int * workqueue; TYPE_3__ rxq; TYPE_2__ _3945; int lock; scalar_t__ mac80211_registered; int status; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct il_priv*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*) ;
 int FUNC_10 (struct il_priv*) ;
 int FUNC_11 (struct il_priv*,TYPE_3__*) ;
 int FUNC_12 (struct il_priv*) ;
 int FUNC_13 (struct il_priv*) ;
 int FUNC_14 (struct il_priv*) ;
 int FUNC_15 (struct il_priv*) ;
 int FUNC_16 (struct il_priv*) ;
 int FUNC_17 (struct il_priv*) ;
 int FUNC_18 (struct il_priv*) ;
 int FUNC_19 (struct il_priv*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*) ;
 struct il_priv* FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*) ;
 int FUNC_26 (struct pci_dev*,int *) ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (int *,unsigned long) ;
 int FUNC_29 (int *,unsigned long) ;
 int FUNC_30 (int *,int *) ;

__attribute__((used)) static void
FUNC_31(struct pci_dev *VAR_2)
{
 struct il_priv *VAR_3 = FUNC_24(VAR_2);
 unsigned long VAR_4;

 if (!VAR_3)
  return;

 FUNC_0("*** UNLOAD DRIVER ***\n");

 FUNC_15(VAR_3);

 FUNC_27(VAR_0, &VAR_3->status);

 FUNC_19(VAR_3);

 if (VAR_3->mac80211_registered) {
  FUNC_7(VAR_3->hw);
  VAR_3->mac80211_registered = 0;
 } else {
  FUNC_9(VAR_3);
 }
 FUNC_14(VAR_3);




 FUNC_28(&VAR_3->lock, VAR_4);
 FUNC_16(VAR_3);
 FUNC_29(&VAR_3->lock, VAR_4);

 FUNC_12(VAR_3);

 FUNC_30(&VAR_2->dev.kobj, &VAR_1);

 FUNC_1(&VAR_3->_3945.rfkill_poll);

 FUNC_8(VAR_3);

 if (VAR_3->rxq.bd)
  FUNC_11(VAR_3, &VAR_3->rxq);
 FUNC_10(VAR_3);

 FUNC_13(VAR_3);


 FUNC_4(VAR_3->workqueue);




 FUNC_2(VAR_3->workqueue);
 VAR_3->workqueue = ((void*)0);

 FUNC_5(VAR_2->irq, VAR_3);
 FUNC_23(VAR_2);

 FUNC_20(VAR_3->hw_base);
 FUNC_25(VAR_2);
 FUNC_22(VAR_2);
 FUNC_26(VAR_2, ((void*)0));

 FUNC_17(VAR_3);
 FUNC_18(VAR_3);
 FUNC_21(VAR_3->scan_cmd);
 if (VAR_3->beacon_skb)
  FUNC_3(VAR_3->beacon_skb);

 FUNC_6(VAR_3->hw);
}
