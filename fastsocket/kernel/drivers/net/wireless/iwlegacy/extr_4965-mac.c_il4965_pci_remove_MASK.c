
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct TYPE_8__ {scalar_t__ bd; } ;
struct TYPE_5__ {int firmware_loading_complete; } ;
struct il_priv {int hw; int beacon_skb; int hw_base; TYPE_3__* pci_dev; int * workqueue; TYPE_4__ rxq; int lock; scalar_t__ mac80211_registered; int status; TYPE_1__ _4965; } ;
struct TYPE_7__ {int irq; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct il_priv*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct il_priv*) ;
 int FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*) ;
 int FUNC_10 (struct il_priv*,TYPE_4__*) ;
 int FUNC_11 (struct il_priv*) ;
 int FUNC_12 (struct il_priv*) ;
 int FUNC_13 (struct il_priv*) ;
 int VAR_1 ;
 int FUNC_14 (struct il_priv*) ;
 int FUNC_15 (struct il_priv*) ;
 int FUNC_16 (struct il_priv*) ;
 int FUNC_17 (struct il_priv*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (TYPE_3__*) ;
 struct il_priv* FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*,int *) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *,unsigned long) ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static void
FUNC_29(struct pci_dev *VAR_2)
{
 struct il_priv *VAR_3 = FUNC_21(VAR_2);
 unsigned long VAR_4;

 if (!VAR_3)
  return;

 FUNC_28(&VAR_3->_4965.firmware_loading_complete);

 FUNC_0("*** UNLOAD DRIVER ***\n");

 FUNC_14(VAR_3);
 FUNC_27(&VAR_2->dev.kobj, &VAR_1);





 FUNC_24(VAR_0, &VAR_3->status);

 FUNC_17(VAR_3);

 if (VAR_3->mac80211_registered) {
  FUNC_6(VAR_3->hw);
  VAR_3->mac80211_registered = 0;
 } else {
  FUNC_8(VAR_3);
 }
 FUNC_13(VAR_3);




 FUNC_25(&VAR_3->lock, VAR_4);
 FUNC_15(VAR_3);
 FUNC_26(&VAR_3->lock, VAR_4);

 FUNC_11(VAR_3);

 FUNC_7(VAR_3);

 if (VAR_3->rxq.bd)
  FUNC_10(VAR_3, &VAR_3->rxq);
 FUNC_9(VAR_3);

 FUNC_16(VAR_3);


 FUNC_3(VAR_3->workqueue);




 FUNC_1(VAR_3->workqueue);
 VAR_3->workqueue = ((void*)0);

 FUNC_4(VAR_3->pci_dev->irq, VAR_3);
 FUNC_20(VAR_3->pci_dev);
 FUNC_18(VAR_3->hw_base);
 FUNC_22(VAR_2);
 FUNC_19(VAR_2);
 FUNC_23(VAR_2, ((void*)0));

 FUNC_12(VAR_3);

 FUNC_2(VAR_3->beacon_skb);

 FUNC_5(VAR_3->hw);
}
