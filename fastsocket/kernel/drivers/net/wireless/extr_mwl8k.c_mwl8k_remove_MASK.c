
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mwl8k_priv {scalar_t__ fw_state; int sram; int regs; int cookie_dma; int cookie; int pdev; int poll_rx_task; int poll_tx_task; int firmware_loading_complete; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct mwl8k_priv*) ;
 int FUNC_4 (struct ieee80211_hw*,int ) ;
 int FUNC_5 (struct mwl8k_priv*) ;
 int FUNC_6 (struct ieee80211_hw*,int) ;
 int FUNC_7 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int ,int,int ,int ) ;
 struct ieee80211_hw* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct pci_dev *VAR_2)
{
 struct ieee80211_hw *VAR_3 = FUNC_10(VAR_2);
 struct mwl8k_priv *VAR_4;
 int VAR_5;

 if (VAR_3 == ((void*)0))
  return;
 VAR_4 = VAR_3->priv;

 FUNC_15(&VAR_4->firmware_loading_complete);

 if (VAR_4->fw_state == VAR_0) {
  FUNC_3(VAR_4);
  goto unmap;
 }

 FUNC_1(VAR_3);

 FUNC_2(VAR_3);


 FUNC_14(&VAR_4->poll_tx_task);
 FUNC_14(&VAR_4->poll_rx_task);


 FUNC_3(VAR_4);


 for (VAR_5 = 0; VAR_5 < FUNC_5(VAR_4); VAR_5++)
  FUNC_7(VAR_3, VAR_5, VAR_1, 1);

 for (VAR_5 = 0; VAR_5 < FUNC_5(VAR_4); VAR_5++)
  FUNC_6(VAR_3, VAR_5);

 FUNC_4(VAR_3, 0);

 FUNC_9(VAR_4->pdev, 4, VAR_4->cookie, VAR_4->cookie_dma);

unmap:
 FUNC_11(VAR_2, VAR_4->regs);
 FUNC_11(VAR_2, VAR_4->sram);
 FUNC_13(VAR_2, ((void*)0));
 FUNC_0(VAR_3);
 FUNC_12(VAR_2);
 FUNC_8(VAR_2);
}
