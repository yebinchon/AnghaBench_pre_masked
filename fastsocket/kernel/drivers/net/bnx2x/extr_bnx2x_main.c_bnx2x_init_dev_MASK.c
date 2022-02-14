
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int enable_cnt; int devfn; int dev; int irq; int pm_cap; } ;
struct net_device {int features; int vlan_features; int * dcbnl_ops; int * netdev_ops; int watchdog_timeo; int irq; int mem_end; int mem_start; int base_addr; } ;
struct TYPE_2__ {int mode_support; int mdio_write; int mdio_read; struct net_device* dev; scalar_t__ mmds; int prtad; } ;
struct bnx2x {int flags; TYPE_1__ mdio; struct pci_dev* pdev; int pf_num; int regview; int pm_cap; struct net_device* dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
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
 int FUNC_2 (int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (struct net_device*,int *) ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_5 (int *) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,struct net_device*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int ,int*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,int) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int *) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*,int ,int ) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static int FUNC_24(struct bnx2x *VAR_44, struct pci_dev *VAR_45,
     struct net_device *VAR_46, unsigned long VAR_47)
{
 int VAR_48;
 u32 VAR_49;
 bool VAR_50 = (VAR_47 == VAR_0 ||
       VAR_47 == VAR_1 ||
       VAR_47 == VAR_2);

 FUNC_4(VAR_46, &VAR_45->dev);

 VAR_44->dev = VAR_46;
 VAR_44->pdev = VAR_45;

 VAR_48 = FUNC_10(VAR_45);
 if (VAR_48) {
  FUNC_8(&VAR_44->pdev->dev,
   "Cannot enable PCI device, aborting\n");
  goto err_out;
 }

 if (!(FUNC_17(VAR_45, 0) & VAR_7)) {
  FUNC_8(&VAR_44->pdev->dev,
   "Cannot find PCI device base address, aborting\n");
  VAR_48 = -VAR_5;
  goto err_out_disable;
 }

 if (FUNC_1(VAR_44) && !(FUNC_17(VAR_45, 2) & VAR_7)) {
  FUNC_8(&VAR_44->pdev->dev, "Cannot find second PCI device base address, aborting\n");
  VAR_48 = -VAR_5;
  goto err_out_disable;
 }

 FUNC_13(VAR_45, VAR_27, &VAR_49);
 if ((VAR_49 & VAR_26) ==
     VAR_25) {
  FUNC_23("PCI device error, probably due to fan failure, aborting\n");
  VAR_48 = -VAR_5;
  goto err_out_disable;
 }

 if (FUNC_5(&VAR_45->enable_cnt) == 1) {
  VAR_48 = FUNC_15(VAR_45, VAR_3);
  if (VAR_48) {
   FUNC_8(&VAR_44->pdev->dev,
    "Cannot obtain PCI resources, aborting\n");
   goto err_out_disable;
  }

  FUNC_21(VAR_45);
  FUNC_19(VAR_45);
 }

 if (FUNC_1(VAR_44)) {
  VAR_44->pm_cap = VAR_45->pm_cap;
  if (VAR_44->pm_cap == 0) {
   FUNC_8(&VAR_44->pdev->dev,
    "Cannot find power management capability, aborting\n");
   VAR_48 = -VAR_4;
   goto err_out_release;
  }
 }

 if (!FUNC_12(VAR_45)) {
  FUNC_8(&VAR_44->pdev->dev, "Not PCI Express, aborting\n");
  VAR_48 = -VAR_4;
  goto err_out_release;
 }

 VAR_48 = FUNC_6(VAR_44);
 if (VAR_48)
  goto err_out_release;

 VAR_46->mem_start = FUNC_18(VAR_45, 0);
 VAR_46->base_addr = VAR_46->mem_start;
 VAR_46->mem_end = FUNC_16(VAR_45, 0);

 VAR_46->irq = VAR_45->irq;

 VAR_44->regview = FUNC_11(VAR_45, 0);
 if (!VAR_44->regview) {
  FUNC_8(&VAR_44->pdev->dev,
   "Cannot map register space, aborting\n");
  VAR_48 = -VAR_6;
  goto err_out_release;
 }






 if (VAR_50) {
  VAR_44->pf_num = FUNC_2(VAR_45->devfn);
 } else {

  FUNC_13(VAR_44->pdev,
          VAR_24, &VAR_49);
  VAR_44->pf_num = (u8)((VAR_49 & VAR_11) >>
      VAR_12);
 }
 FUNC_0("me reg PF num: %d\n", VAR_44->pf_num);


 FUNC_22(VAR_44->pdev, VAR_23,
          VAR_28);




 if (FUNC_1(VAR_44)) {
  FUNC_3(VAR_44, VAR_30, 0);
  FUNC_3(VAR_44, VAR_32, 0);
  FUNC_3(VAR_44, VAR_34, 0);
  FUNC_3(VAR_44, VAR_36, 0);

  if (VAR_50) {
   FUNC_3(VAR_44, VAR_31, 0);
   FUNC_3(VAR_44, VAR_33, 0);
   FUNC_3(VAR_44, VAR_35, 0);
   FUNC_3(VAR_44, VAR_37, 0);
  }





  if (!VAR_50)
   FUNC_3(VAR_44,
          VAR_29, 1);
 }

 VAR_46->watchdog_timeo = VAR_38;

 VAR_46->netdev_ops = &VAR_43;
 FUNC_7(VAR_44, VAR_46);
 VAR_46->features |= VAR_19;
 VAR_46->features |= VAR_17 | VAR_16 | VAR_18;
 if (VAR_44->flags & VAR_39)
  VAR_46->features |= VAR_13;
 VAR_46->features |= (VAR_20 | VAR_22);
 VAR_46->features |= VAR_21;
 VAR_44->mdio.prtad = VAR_9;
 VAR_44->mdio.mmds = 0;
 VAR_44->mdio.mode_support = VAR_10 | VAR_8;
 VAR_44->mdio.dev = VAR_46;
 VAR_44->mdio.mdio_read = VAR_41;
 VAR_44->mdio.mdio_write = VAR_42;

 return 0;

err_out_release:
 if (FUNC_5(&VAR_45->enable_cnt) == 1)
  FUNC_14(VAR_45);

err_out_disable:
 FUNC_9(VAR_45);
 FUNC_20(VAR_45, ((void*)0));

err_out:
 return VAR_48;
}
