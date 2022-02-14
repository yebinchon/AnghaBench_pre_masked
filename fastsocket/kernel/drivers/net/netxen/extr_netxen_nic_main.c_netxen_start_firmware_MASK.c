
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {scalar_t__ port_type; int revision_id; } ;
struct netxen_adapter {scalar_t__ need_fw_reset; TYPE_1__ ahw; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct netxen_adapter*,int ) ;
 int FUNC_2 (struct netxen_adapter*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct netxen_adapter*) ;
 int FUNC_8 (struct netxen_adapter*) ;
 int FUNC_9 (struct netxen_adapter*) ;
 int FUNC_10 (struct netxen_adapter*,int) ;
 int FUNC_11 (struct netxen_adapter*) ;
 int FUNC_12 (struct netxen_adapter*) ;
 int FUNC_13 (struct netxen_adapter*) ;
 int FUNC_14 (struct netxen_adapter*) ;
 int FUNC_15 (struct netxen_adapter*) ;
 int FUNC_16 (struct netxen_adapter*) ;
 int FUNC_17 (struct netxen_adapter*,int ) ;
 int FUNC_18 (struct netxen_adapter*) ;
 int FUNC_19 (struct netxen_adapter*) ;
 int FUNC_20 (struct netxen_adapter*) ;
 int FUNC_21 (struct netxen_adapter*) ;
 int FUNC_22 (struct netxen_adapter*) ;
 int FUNC_23 (struct netxen_adapter*) ;

__attribute__((used)) static int
FUNC_24(struct netxen_adapter *VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19;
 struct pci_dev *VAR_20 = VAR_15->pdev;


 VAR_17 = FUNC_22(VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_9(VAR_15);

 if (VAR_17 < 0)
  return VAR_17;

 if (!VAR_17)
  goto wait_init;

 VAR_18 = FUNC_1(VAR_15, FUNC_0(0x1fc));

 VAR_17 = FUNC_10(VAR_15, VAR_18);
 if (VAR_17) {
  FUNC_5(&VAR_20->dev, "error in init HW init sequence\n");
  return VAR_17;
 }

 FUNC_20(VAR_15);

 VAR_17 = FUNC_15(VAR_15);
 if (VAR_17 < 0)
  goto err_out;
 if (VAR_17 == 0)
  goto pcie_strap_init;

 if (VAR_18 != 0x55555555) {
  FUNC_2(VAR_15, VAR_0, 0);
  FUNC_18(VAR_15);
  FUNC_6(1);
 }

 FUNC_2(VAR_15, VAR_1, 0x55555555);
 FUNC_2(VAR_15, VAR_7, 0);
 FUNC_2(VAR_15, VAR_8, 0);

 if (FUNC_4(VAR_15->ahw.revision_id))
  FUNC_21(VAR_15);

 VAR_17 = FUNC_14(VAR_15);
 if (VAR_17)
  goto err_out;

 FUNC_19(VAR_15);

 if (FUNC_3(VAR_15->ahw.revision_id)) {


  VAR_16 = 0x7654;
  if (VAR_15->ahw.port_type == VAR_6)
   VAR_16 |= 0x0f000000;
  FUNC_2(VAR_15, VAR_4, VAR_16);

 }

 VAR_17 = FUNC_13(VAR_15);
 if (VAR_17)
  goto err_out;




 VAR_16 = (VAR_12 << 16)
  | ((VAR_13 << 8))
  | (VAR_14);
 FUNC_2(VAR_15, VAR_2, VAR_16);

pcie_strap_init:
 if (FUNC_4(VAR_15->ahw.revision_id))
  FUNC_16(VAR_15);

wait_init:

 VAR_17 = FUNC_17(VAR_15, VAR_5);
 if (VAR_17) {
  FUNC_12(VAR_15);
  goto err_out;
 }

 if (FUNC_7(VAR_15))
  return -VAR_3;
 VAR_19 = FUNC_1(VAR_15, VAR_9);

 if (VAR_19 == VAR_10)
  return 1;

 FUNC_2(VAR_15, VAR_9, VAR_11);
 FUNC_8(VAR_15);

 FUNC_23(VAR_15);

 FUNC_11(VAR_15);

 VAR_15->need_fw_reset = 0;



err_out:
 FUNC_19(VAR_15);
 return VAR_17;
}
