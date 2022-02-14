
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct atl1c_hw {int autoneg_advertised; int phy_configured; scalar_t__ adapter; } ;
struct atl1c_adapter {int link_speed; int link_duplex; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 scalar_t__ FUNC_0 (struct atl1c_hw*,int*,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int*) ;
 scalar_t__ FUNC_2 (struct atl1c_hw*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int) ;

int FUNC_5(struct atl1c_hw *VAR_16)
{
 struct atl1c_adapter *VAR_17 = (struct atl1c_adapter *)VAR_16->adapter;
 struct pci_dev *VAR_18 = VAR_17->pdev;
 int VAR_19 = 0;
 u16 VAR_20 = VAR_3;
 u16 VAR_21;
 u16 VAR_22;
 u16 VAR_23;
 u16 VAR_24 = VAR_14;
 u16 VAR_25 = VAR_6;
 int VAR_26;

 FUNC_1(VAR_16, VAR_12, &VAR_22);
 FUNC_1(VAR_16, VAR_12, &VAR_22);
 if (VAR_22 & VAR_5) {
  FUNC_1(VAR_16, VAR_13, &VAR_23);
  if (VAR_23 & VAR_10)
   VAR_20 = VAR_2;
  else if (VAR_23 & VAR_11)
   VAR_20 = VAR_3;
  else if (VAR_23 & VAR_9)
   VAR_20 = VAR_1;
  else if (VAR_23 & VAR_8)
   VAR_20 = VAR_0;

  VAR_21 = VAR_16->autoneg_advertised;
  VAR_16->phy_configured = 0;
  VAR_16->autoneg_advertised = VAR_20;
  if (FUNC_2(VAR_16) != 0) {
   FUNC_3(&VAR_18->dev, "phy autoneg failed\n");
   VAR_19 = -1;
  }
  VAR_16->autoneg_advertised = VAR_21;

  if (VAR_23) {
   for (VAR_26 = 0; VAR_26 < VAR_4; VAR_26++) {
    FUNC_4(100);
    FUNC_1(VAR_16, VAR_12, &VAR_22);
    FUNC_1(VAR_16, VAR_12, &VAR_22);
    if (VAR_22 & VAR_5) {
     if (FUNC_0(VAR_16, &VAR_24,
         &VAR_25) != 0)
      FUNC_3(&VAR_18->dev,
       "get speed and duplex failed\n");
     break;
    }
   }
  }
 } else {
  VAR_24 = VAR_15;
  VAR_25 = VAR_7;
 }
 VAR_17->link_speed = VAR_24;
 VAR_17->link_duplex = VAR_25;

 return VAR_19;
}
