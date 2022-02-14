
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct atl1c_hw {int ctrl_flags; scalar_t__ nic_type; struct atl1c_adapter* adapter; } ;
struct atl1c_adapter {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*) ;
 int FUNC_2 (struct atl1c_hw*,int ,int) ;
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
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int FUNC_3 (struct atl1c_hw*,int ,int*) ;
 int FUNC_4 (struct atl1c_hw*,int ,int) ;
 int FUNC_5 (struct atl1c_hw*,int ,int ,int ) ;
 int FUNC_6 (struct atl1c_hw*,int ,int) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (struct atl1c_adapter*) ;
 int FUNC_9 (int) ;

int FUNC_10(struct atl1c_hw *VAR_48)
{
 struct atl1c_adapter *VAR_49 = VAR_48->adapter;
 struct pci_dev *VAR_50 = VAR_49->pdev;
 u16 VAR_51;
 u32 VAR_52, VAR_53;
 int VAR_54;


 FUNC_0(VAR_48, VAR_36, &VAR_52);
 VAR_52 &= ~(VAR_5 | VAR_10 |
  VAR_7 | VAR_11 | VAR_4);
 VAR_52 |= VAR_12;
 if (!(VAR_48->ctrl_flags & VAR_1))
  VAR_52 |= (VAR_8 | VAR_9);
 else
  VAR_52 &= ~(VAR_8 | VAR_9);
 FUNC_2(VAR_48, VAR_36, VAR_52);
 FUNC_1(VAR_48);
 FUNC_9(10);
 FUNC_2(VAR_48, VAR_36, VAR_52 | VAR_5);
 FUNC_1(VAR_48);
 FUNC_9(10 * VAR_6);


 if (VAR_48->nic_type == VAR_46) {
  FUNC_3(VAR_48, VAR_23, &VAR_51);
  FUNC_4(VAR_48, VAR_23,
   VAR_51 & ~VAR_3);
 }


 if (VAR_48->nic_type == VAR_46 || VAR_48->nic_type == VAR_47) {
  FUNC_3(VAR_48, VAR_22, &VAR_51);
  VAR_51 |= VAR_2;
  FUNC_4(VAR_48, VAR_22, VAR_51);
 }


 if (!(VAR_48->ctrl_flags & VAR_1)) {
  if (VAR_48->nic_type == VAR_46 || VAR_48->nic_type == VAR_47) {
   FUNC_3(VAR_48, VAR_30, &VAR_51);
   VAR_51 &= ~VAR_43;
   FUNC_4(VAR_48, VAR_30, VAR_51);
  }

  VAR_51 =
   VAR_48->nic_type == VAR_44 || VAR_48->nic_type == VAR_45 ?
   VAR_17 : VAR_16;
  FUNC_4(VAR_48, VAR_25, VAR_51);

  FUNC_4(VAR_48, VAR_27,
   VAR_39);
 } else {

  FUNC_3(VAR_48, VAR_25, &VAR_51);
  FUNC_4(VAR_48, VAR_25,
   VAR_51 & ~VAR_19);

  FUNC_3(VAR_48, VAR_24, &VAR_51);
  FUNC_4(VAR_48, VAR_24,
   VAR_51 & VAR_13);
 }

 if (VAR_48->nic_type == VAR_44 || VAR_48->nic_type == VAR_45 ||
     VAR_48->nic_type == VAR_47) {
  FUNC_0(VAR_48, VAR_37, &VAR_53);
  FUNC_2(VAR_48, VAR_37, VAR_53 & ~VAR_20);
  FUNC_5(VAR_48, VAR_31, VAR_33, 0);
  FUNC_5(VAR_48, VAR_34, VAR_32,
   VAR_18);
 }


 FUNC_4(VAR_48, VAR_21, VAR_0);
 FUNC_4(VAR_48, VAR_26, VAR_38);
 FUNC_4(VAR_48, VAR_29, VAR_42);

 FUNC_4(VAR_48, VAR_28,
  VAR_40 | VAR_41);


 VAR_51 = VAR_15 | VAR_14;
 VAR_54 = FUNC_6(VAR_48, VAR_35, VAR_51);
 if (VAR_54) {
  if (FUNC_8(VAR_49))
   FUNC_7(&VAR_50->dev,
    "Error enable PHY linkChange Interrupt\n");
  return VAR_54;
 }
 return 0;
}
