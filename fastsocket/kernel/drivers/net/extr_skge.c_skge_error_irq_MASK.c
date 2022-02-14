
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct skge_hw {scalar_t__ chip_id; int intr_mask; struct pci_dev* pdev; TYPE_1__** dev; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct skge_hw*,int) ;
 int FUNC_5 (struct skge_hw*,int ) ;
 int FUNC_6 (struct skge_hw*,int ,int ) ;
 int FUNC_7 (struct skge_hw*,int ,int ) ;
 int FUNC_8 (struct skge_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct skge_hw *VAR_35)
{
 struct pci_dev *VAR_36 = VAR_35->pdev;
 u32 VAR_37 = FUNC_5(VAR_35, VAR_0);

 if (VAR_35->chip_id == VAR_5) {

  if (VAR_37 & (VAR_15|VAR_17))
   FUNC_6(VAR_35, VAR_31, VAR_23);
  if (VAR_37 & (VAR_16|VAR_18))
   FUNC_6(VAR_35, VAR_32, VAR_23);
 } else {

  if (VAR_37 & VAR_12)
   FUNC_8(VAR_35, VAR_7, VAR_8);
 }

 if (VAR_37 & VAR_21) {
  FUNC_0(&VAR_36->dev, "Ram read data parity error\n");
  FUNC_6(VAR_35, VAR_4, VAR_29);
 }

 if (VAR_37 & VAR_22) {
  FUNC_0(&VAR_36->dev, "Ram write data parity error\n");
  FUNC_6(VAR_35, VAR_4, VAR_30);
 }

 if (VAR_37 & VAR_13)
  FUNC_4(VAR_35, 0);

 if (VAR_37 & VAR_14)
  FUNC_4(VAR_35, 1);

 if (VAR_37 & VAR_19) {
  FUNC_0(&VAR_36->dev, "%s: receive queue parity error\n",
   VAR_35->dev[0]->name);
  FUNC_7(VAR_35, VAR_1, VAR_6);
 }

 if (VAR_37 & VAR_20) {
  FUNC_0(&VAR_36->dev, "%s: receive queue parity error\n",
   VAR_35->dev[1]->name);
  FUNC_7(VAR_35, VAR_2, VAR_6);
 }

 if (VAR_37 & (VAR_10|VAR_11)) {
  u16 VAR_38, VAR_39;

  FUNC_2(VAR_36, VAR_24, &VAR_39);
  FUNC_2(VAR_36, VAR_27, &VAR_38);

  FUNC_0(&VAR_36->dev, "PCI error cmd=%#x status=%#x\n",
   VAR_39, VAR_38);


  VAR_38 &= VAR_28;
  FUNC_8(VAR_35, VAR_3, VAR_34);
  FUNC_3(VAR_36, VAR_24,
          VAR_39 | VAR_26 | VAR_25);
  FUNC_3(VAR_36, VAR_27, VAR_38);
  FUNC_8(VAR_35, VAR_3, VAR_33);


  VAR_37 = FUNC_5(VAR_35, VAR_0);
  if (VAR_37 & VAR_11) {
   FUNC_1(&VAR_35->pdev->dev, "unable to clear error (so ignoring them)\n");
   VAR_35->intr_mask &= ~VAR_9;
  }
 }
}
