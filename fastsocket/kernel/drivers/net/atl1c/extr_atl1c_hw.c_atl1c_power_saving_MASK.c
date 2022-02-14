
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct atl1c_hw {int phy_configured; scalar_t__ nic_type; scalar_t__ revision_id; scalar_t__ adapter; } ;
struct atl1c_adapter {scalar_t__ link_speed; scalar_t__ link_duplex; struct pci_dev* pdev; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
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
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int FUNC_3 (struct atl1c_hw*,int ,int *) ;
 scalar_t__ FUNC_4 (struct atl1c_hw*,int ,int ) ;
 int FUNC_5 (int *,char*,int ,...) ;

int FUNC_6(struct atl1c_hw *VAR_35, u32 VAR_36)
{
 struct atl1c_adapter *VAR_37 = (struct atl1c_adapter *)VAR_35->adapter;
 struct pci_dev *VAR_38 = VAR_37->pdev;
 u32 VAR_39, VAR_40, VAR_41;
 u32 VAR_42, VAR_43;
 u16 VAR_44;

 VAR_42 = 0;
 VAR_43 = VAR_37->link_speed == VAR_26 ?
  VAR_16 : VAR_17;

 FUNC_0(VAR_35, VAR_24, &VAR_39);
 FUNC_0(VAR_35, VAR_23, &VAR_40);
 FUNC_0(VAR_35, VAR_22, &VAR_41);

 VAR_39 &= ~VAR_19;
 VAR_40 = FUNC_2(VAR_40, VAR_15, VAR_43);
 VAR_40 &= ~(VAR_13 | VAR_14 | VAR_18);
 if (VAR_37->link_duplex == VAR_2)
  VAR_40 |= VAR_13;
 VAR_41 &= ~(VAR_4 | VAR_3);
 VAR_41 |= VAR_9 | VAR_6 |
  VAR_5;
 if (!VAR_36) {
  VAR_39 |= VAR_19;
  VAR_41 |= VAR_7 | VAR_8;
  FUNC_1(VAR_35, VAR_24, VAR_39);
  FUNC_1(VAR_35, VAR_23, VAR_40);
  FUNC_1(VAR_35, VAR_22, VAR_41);
  FUNC_1(VAR_35, VAR_25, 0);
  VAR_35->phy_configured = 0;
  return 0;
 }
 VAR_41 |= VAR_4;
 if (VAR_36 & VAR_1) {
  VAR_40 |= VAR_14 | VAR_12;
  VAR_42 |= VAR_29 | VAR_30;
  if (VAR_35->nic_type == VAR_33 && VAR_35->revision_id == VAR_11)
   VAR_42 |= VAR_31 | VAR_32;
 }
 if (VAR_36 & VAR_0) {
  VAR_42 |= VAR_27 | VAR_28;
  if (FUNC_4(VAR_35, VAR_20, VAR_10) != 0) {
   FUNC_5(&VAR_38->dev, "%s: write phy MII_IER faild.\n",
    VAR_34);
  }
 }

 FUNC_3(VAR_35, VAR_21, &VAR_44);

 FUNC_5(&VAR_38->dev, "%s: suspend MAC=%x,MASTER=%x,PHY=0x%x,WOL=%x\n",
  VAR_34, VAR_40, VAR_39, VAR_41, VAR_42);
 FUNC_1(VAR_35, VAR_24, VAR_39);
 FUNC_1(VAR_35, VAR_23, VAR_40);
 FUNC_1(VAR_35, VAR_22, VAR_41);
 FUNC_1(VAR_35, VAR_25, VAR_42);

 return 0;
}
