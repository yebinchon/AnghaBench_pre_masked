
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct slot {int dummy; } ;
struct pcie_device {int device; struct pci_dev* port; } ;
struct pci_dev {int dummy; } ;
struct controller {struct slot* slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct controller*) ;
 int FUNC_1 (struct controller*) ;
 int FUNC_2 (struct controller*,char*) ;
 int FUNC_3 (struct controller*,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (struct controller*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct controller* FUNC_8 (struct pcie_device*) ;
 int FUNC_9 (struct controller*) ;
 scalar_t__ FUNC_10 (struct pci_dev*) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (struct slot*) ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (struct slot*,scalar_t__*) ;
 int FUNC_13 (struct slot*) ;
 int FUNC_14 (struct controller*) ;
 int FUNC_15 (struct pcie_device*,struct controller*) ;

__attribute__((used)) static int FUNC_16(struct pcie_device *VAR_4)
{
 int VAR_5;
 struct controller *VAR_6;
 struct slot *VAR_7;
 u8 VAR_8;
 struct pci_dev *VAR_9 = VAR_4->port;

 if (VAR_2)
  goto err_out_none;

 if (VAR_3)
  FUNC_5(&VAR_4->device,
    "Bypassing BIOS check for pciehp use on %s\n",
    FUNC_7(VAR_9));
 else if (FUNC_10(VAR_4->port))
  goto err_out_none;

 VAR_6 = FUNC_8(VAR_4);
 if (!VAR_6) {
  FUNC_4(&VAR_4->device, "Controller initialization failed\n");
  goto err_out_none;
 }
 FUNC_15(VAR_4, VAR_6);


 VAR_5 = FUNC_6(VAR_6);
 if (VAR_5) {
  if (VAR_5 == -VAR_0)
   FUNC_3(VAR_6, "Slot already registered by another "
      "hotplug driver\n");
  else
   FUNC_2(VAR_6, "Slot initialization failed\n");
  goto err_out_release_ctlr;
 }


 VAR_5 = FUNC_9(VAR_6);
 if (VAR_5) {
  FUNC_2(VAR_6, "Notification initialization failed\n");
  goto err_out_release_ctlr;
 }


 VAR_7 = VAR_6->slot;
 FUNC_12(VAR_7, &VAR_8);
 if (VAR_8) {
  if (VAR_3)
   FUNC_11(VAR_7);
 } else {

  if (FUNC_0(VAR_6)) {
   VAR_5 = FUNC_13(VAR_7);
   if (VAR_5)
    goto err_out_free_ctrl_slot;
  }
 }

 return 0;

err_out_free_ctrl_slot:
 FUNC_1(VAR_6);
err_out_release_ctlr:
 FUNC_14(VAR_6);
err_out_none:
 return -VAR_1;
}
