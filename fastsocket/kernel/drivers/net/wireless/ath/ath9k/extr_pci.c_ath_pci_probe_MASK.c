
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_device_id {int device; } ;
struct pci_dev {int irq; int dev; } ;
struct ieee80211_hw {int wiphy; struct ath_softc* priv; } ;
struct ath_softc {int irq; scalar_t__ mem; int sc_ah; int sc_flags; int * dev; struct ieee80211_hw* hw; } ;
typedef int hw_name ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ieee80211_hw*,int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,struct ath_softc*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,struct ath_softc*) ;
 struct ieee80211_hw* FUNC_7 (int,int *) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct pci_dev*,int ,int*) ;
 int FUNC_10 (struct pci_dev*,int,int*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,struct ieee80211_hw*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int ,int) ;
 int FUNC_16 (struct pci_dev*,int,int) ;
 scalar_t__ FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,int ,char*) ;
 scalar_t__* FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ,int ,int ,char*,struct ath_softc*) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int ,char*,char*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_24(struct pci_dev *VAR_11, const struct pci_device_id *VAR_12)
{
 struct ath_softc *VAR_13;
 struct ieee80211_hw *VAR_14;
 u8 VAR_15;
 u32 VAR_16;
 int VAR_17 = 0;
 char VAR_18[64];

 if (FUNC_17(VAR_11))
  return -VAR_0;

 VAR_17 = FUNC_12(VAR_11, FUNC_1(32));
 if (VAR_17) {
  FUNC_20("32-bit DMA not available\n");
  return VAR_17;
 }

 VAR_17 = FUNC_11(VAR_11, FUNC_1(32));
 if (VAR_17) {
  FUNC_20("32-bit DMA consistent DMA enable failed\n");
  return VAR_17;
 }





 FUNC_9(VAR_11, VAR_5, &VAR_15);
 if (VAR_15 == 0) {







  VAR_15 = VAR_4 / sizeof(u32);
  FUNC_15(VAR_11, VAR_5, VAR_15);
 }





 FUNC_15(VAR_11, VAR_6, 0xa8);

 FUNC_14(VAR_11);





 FUNC_10(VAR_11, 0x40, &VAR_16);
 if ((VAR_16 & 0x0000ff00) != 0)
  FUNC_16(VAR_11, 0x40, VAR_16 & 0xffff00ff);

 VAR_17 = FUNC_18(VAR_11, FUNC_0(0), "ath9k");
 if (VAR_17) {
  FUNC_5(&VAR_11->dev, "PCI memory region reserve error\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_7(sizeof(struct ath_softc), &VAR_8);
 if (!VAR_14) {
  FUNC_5(&VAR_11->dev, "No memory for ieee80211_hw\n");
  return -VAR_2;
 }

 FUNC_2(VAR_14, &VAR_11->dev);
 FUNC_13(VAR_11, VAR_14);

 VAR_13 = VAR_14->priv;
 VAR_13->hw = VAR_14;
 VAR_13->dev = &VAR_11->dev;
 VAR_13->mem = FUNC_19(VAR_11)[0];


 FUNC_22(VAR_7, &VAR_13->sc_flags);

 VAR_17 = FUNC_21(VAR_11->irq, VAR_9, VAR_3, "ath9k", VAR_13);
 if (VAR_17) {
  FUNC_5(&VAR_11->dev, "request_irq failed\n");
  goto err_irq;
 }

 VAR_13->irq = VAR_11->irq;

 VAR_17 = FUNC_4(VAR_12->device, VAR_13, &VAR_10);
 if (VAR_17) {
  FUNC_5(&VAR_11->dev, "Failed to initialize device\n");
  goto err_init;
 }

 FUNC_3(VAR_13->sc_ah, VAR_18, sizeof(VAR_18));
 FUNC_23(VAR_14->wiphy, "%s mem=0x%lx, irq=%d\n",
     VAR_18, (unsigned long)VAR_13->mem, VAR_11->irq);

 return 0;

err_init:
 FUNC_6(VAR_13->irq, VAR_13);
err_irq:
 FUNC_8(VAR_14);
 return VAR_17;
}
