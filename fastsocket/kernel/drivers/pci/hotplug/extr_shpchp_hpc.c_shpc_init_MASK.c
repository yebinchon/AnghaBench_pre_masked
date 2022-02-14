
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int irq; int subsystem_device; int subsystem_vendor; } ;
struct controller {int mmio_base; int mmio_size; int cap_offset; int creg; int slot_device_offset; int num_slots; int first_slot; int slot_num_inc; struct pci_dev* pci_dev; int poll_timer; int * hpc_ops; int queue; int cmd_lock; int crit_sect; } ;


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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct controller*,char*,...) ;
 int FUNC_5 (struct controller*,char*,...) ;
 int FUNC_6 (struct controller*,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (int,int ,int ,int ,void*) ;
 int FUNC_20 (int,int,int ) ;
 int FUNC_21 (struct controller*,int,int*) ;
 int VAR_25 ;
 int FUNC_22 (struct controller*,int ) ;
 int FUNC_23 (struct controller*,int ,int) ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int FUNC_24 (struct controller*,int) ;

int FUNC_25(struct controller *VAR_30, struct pci_dev *VAR_31)
{
 int VAR_32 = -1, VAR_33 = 0;
 u8 VAR_34;
 u32 VAR_35;
 u32 VAR_36, VAR_37, VAR_38;
 u8 VAR_39;

 VAR_30->pci_dev = VAR_31;
 FUNC_4(VAR_30, "Hotplug Controller:\n");

 if (VAR_31->vendor == VAR_16 &&
     VAR_31->device == VAR_15) {

  VAR_30->mmio_base = FUNC_17(VAR_31, 0);
  VAR_30->mmio_size = FUNC_16(VAR_31, 0);
 } else {
  VAR_30->cap_offset = FUNC_14(VAR_31, VAR_14);
  if (!VAR_30->cap_offset) {
   FUNC_5(VAR_30, "Cannot find PCI capability\n");
   goto abort;
  }
  FUNC_4(VAR_30, " cap_offset = %x\n", VAR_30->cap_offset);

  VAR_32 = FUNC_21(VAR_30, 0, &VAR_35);
  if (VAR_32) {
   FUNC_5(VAR_30, "Cannot read base_offset\n");
   goto abort;
  }

  VAR_32 = FUNC_21(VAR_30, 3, &VAR_36);
  if (VAR_32) {
   FUNC_5(VAR_30, "Cannot read slot config\n");
   goto abort;
  }
  VAR_33 = VAR_36 & VAR_22;
  FUNC_4(VAR_30, " num_slots (indirect) %x\n", VAR_33);

  for (VAR_39 = 0; VAR_39 < 9 + VAR_33; VAR_39++) {
   VAR_32 = FUNC_21(VAR_30, VAR_39, &VAR_36);
   if (VAR_32) {
    FUNC_5(VAR_30,
      "Cannot read creg (index = %d)\n", VAR_39);
    goto abort;
   }
   FUNC_4(VAR_30, " offset %d: value %x\n", VAR_39, VAR_36);
  }

  VAR_30->mmio_base =
   FUNC_17(VAR_31, 0) + VAR_35;
  VAR_30->mmio_size = 0x24 + 0x4 * VAR_33;
 }

 FUNC_6(VAR_30, "HPC vendor_id %x device_id %x ss_vid %x ss_did %x\n",
    VAR_31->vendor, VAR_31->device, VAR_31->subsystem_vendor,
    VAR_31->subsystem_device);

 VAR_32 = FUNC_12(VAR_31);
 if (VAR_32) {
  FUNC_5(VAR_30, "pci_enable_device failed\n");
  goto abort;
 }

 if (!FUNC_20(VAR_30->mmio_base, VAR_30->mmio_size, VAR_13)) {
  FUNC_5(VAR_30, "Cannot reserve MMIO region\n");
  VAR_32 = -1;
  goto abort;
 }

 VAR_30->creg = FUNC_9(VAR_30->mmio_base, VAR_30->mmio_size);
 if (!VAR_30->creg) {
  FUNC_5(VAR_30, "Cannot remap MMIO region %lx @ %lx\n",
    VAR_30->mmio_size, VAR_30->mmio_base);
  FUNC_18(VAR_30->mmio_base, VAR_30->mmio_size);
  VAR_32 = -1;
  goto abort;
 }
 FUNC_4(VAR_30, "ctrl->creg %p\n", VAR_30->creg);

 FUNC_11(&VAR_30->crit_sect);
 FUNC_11(&VAR_30->cmd_lock);


 FUNC_8(&VAR_30->queue);

 VAR_30->hpc_ops = &VAR_26;


 VAR_38 = FUNC_22(VAR_30, VAR_21);
 VAR_30->slot_device_offset = (VAR_38 & VAR_6) >> 8;
 VAR_30->num_slots = VAR_38 & VAR_22;
 VAR_30->first_slot = (VAR_38 & VAR_18) >> 16;
 VAR_30->slot_num_inc = ((VAR_38 & VAR_24) >> 29) ? 1 : -1;


 VAR_36 = FUNC_22(VAR_30, VAR_19);
 FUNC_4(VAR_30, "SERR_INTR_ENABLE = %x\n", VAR_36);
 VAR_36 |= (VAR_7 | VAR_8 |
        VAR_2 | VAR_0);
 VAR_36 &= ~VAR_20;
 FUNC_23(VAR_30, VAR_19, VAR_36);
 VAR_36 = FUNC_22(VAR_30, VAR_19);
 FUNC_4(VAR_30, "SERR_INTR_ENABLE = %x\n", VAR_36);




 for (VAR_34 = 0; VAR_34 < VAR_30->num_slots; VAR_34++) {
  VAR_37 = FUNC_22(VAR_30, FUNC_0(VAR_34));
  FUNC_4(VAR_30, "Default Logical Slot Register %d value %x\n",
    VAR_34, VAR_37);
  VAR_37 |= (VAR_17 | VAR_10 |
        VAR_1 | VAR_11 |
        VAR_3 | VAR_12 |
        VAR_4);
  VAR_37 &= ~VAR_23;
  FUNC_23(VAR_30, FUNC_0(VAR_34), VAR_37);
 }

 if (VAR_28) {

  FUNC_7(&VAR_30->poll_timer);
  FUNC_24(VAR_30, 10);
 } else {

  VAR_32 = FUNC_13(VAR_31);
  if (VAR_32) {
   FUNC_6(VAR_30,
      "Can't get msi for the hotplug controller\n");
   FUNC_6(VAR_30,
      "Use INTx for the hotplug controller\n");
  }

  VAR_32 = FUNC_19(VAR_30->pci_dev->irq, VAR_25, VAR_9,
     VAR_13, (void *)VAR_30);
  FUNC_4(VAR_30, "request_irq %d for hpc%d (returns %d)\n",
    VAR_30->pci_dev->irq,
      FUNC_2(&VAR_27), VAR_32);
  if (VAR_32) {
   FUNC_5(VAR_30, "Can't get irq %d for the hotplug "
     "controller\n", VAR_30->pci_dev->irq);
   goto abort_iounmap;
  }
 }
 FUNC_4(VAR_30, "HPC at %s irq=%x\n", FUNC_15(VAR_31), VAR_31->irq);





 if (FUNC_1(1, &VAR_27) == 1) {
  VAR_29 = FUNC_3("shpchpd");
  if (!VAR_29) {
   VAR_32 = -VAR_5;
   goto abort_iounmap;
  }
 }




 for (VAR_34 = 0; VAR_34 < VAR_30->num_slots; VAR_34++) {
  VAR_37 = FUNC_22(VAR_30, FUNC_0(VAR_34));
  FUNC_4(VAR_30, "Default Logical Slot Register %d value %x\n",
    VAR_34, VAR_37);
  VAR_37 &= ~(VAR_17 | VAR_10 |
         VAR_1 | VAR_11 |
         VAR_3 | VAR_23);
  FUNC_23(VAR_30, FUNC_0(VAR_34), VAR_37);
 }
 if (!VAR_28) {

  VAR_36 = FUNC_22(VAR_30, VAR_19);
  VAR_36 &= ~(VAR_7 | VAR_2 |
          VAR_20);
  FUNC_23(VAR_30, VAR_19, VAR_36);
  VAR_36 = FUNC_22(VAR_30, VAR_19);
  FUNC_4(VAR_30, "SERR_INTR_ENABLE = %x\n", VAR_36);
 }

 return 0;


abort_iounmap:
 FUNC_10(VAR_30->creg);
abort:
 return VAR_32;
}
