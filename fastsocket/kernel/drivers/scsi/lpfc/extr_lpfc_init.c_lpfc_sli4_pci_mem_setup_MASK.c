
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int word0; } ;
struct TYPE_3__ {void* conf_regs_memmap_p; void* ctrl_regs_memmap_p; void* drbl_regs_memmap_p; TYPE_2__ sli_intf; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; void* pci_bar2_map; void* pci_bar1_map; void* pci_bar0_map; struct pci_dev* pcidev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int *,char*) ;
 void* FUNC_3 (void*,unsigned long) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*,int ) ;
 int FUNC_6 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (struct pci_dev*,int ,int *) ;
 unsigned long FUNC_10 (struct pci_dev*,int) ;
 void* FUNC_11 (struct pci_dev*,int) ;
 scalar_t__ FUNC_12 (struct pci_dev*,int ) ;

__attribute__((used)) static int
FUNC_13(struct lpfc_hba *VAR_10)
{
 struct pci_dev *VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14;
 int VAR_15 = -VAR_0;
 uint32_t VAR_16;


 if (!VAR_10->pcidev)
  return VAR_15;
 else
  VAR_11 = VAR_10->pcidev;


 if (FUNC_12(VAR_11, FUNC_0(64)) != 0)
  if (FUNC_12(VAR_11, FUNC_0(32)) != 0)
   return VAR_15;





 if (FUNC_9(VAR_11, VAR_3,
      &VAR_10->sli4_hba.sli_intf.word0)) {
  return VAR_15;
 }


 if (FUNC_1(VAR_9, &VAR_10->sli4_hba.sli_intf) !=
     VAR_6) {
  FUNC_5(VAR_10, VAR_1, VAR_2,
    "2894 SLI_INTF reg contents invalid "
    "sli_intf reg 0x%x\n",
    VAR_10->sli4_hba.sli_intf.word0);
  return VAR_15;
 }

 VAR_16 = FUNC_1(VAR_8, &VAR_10->sli4_hba.sli_intf);






 if (FUNC_11(VAR_11, 0)) {
  VAR_10->pci_bar0_map = FUNC_11(VAR_11, 0);
  VAR_12 = FUNC_10(VAR_11, 0);





  VAR_10->sli4_hba.conf_regs_memmap_p =
   FUNC_3(VAR_10->pci_bar0_map, VAR_12);
  if (!VAR_10->sli4_hba.conf_regs_memmap_p) {
   FUNC_2(VAR_1, &VAR_11->dev,
       "ioremap failed for SLI4 PCI config "
       "registers.\n");
   goto out;
  }

  FUNC_6(VAR_10, VAR_16);
 } else {
  VAR_10->pci_bar0_map = FUNC_11(VAR_11, 1);
  VAR_12 = FUNC_10(VAR_11, 1);
  if (VAR_16 == VAR_5) {
   FUNC_2(VAR_1, &VAR_11->dev,
      "FATAL - No BAR0 mapping for SLI4, if_type 2\n");
   goto out;
  }
  VAR_10->sli4_hba.conf_regs_memmap_p =
    FUNC_3(VAR_10->pci_bar0_map, VAR_12);
  if (!VAR_10->sli4_hba.conf_regs_memmap_p) {
   FUNC_2(VAR_1, &VAR_11->dev,
    "ioremap failed for SLI4 PCI config "
    "registers.\n");
    goto out;
  }
  FUNC_6(VAR_10, VAR_16);
 }

 if ((VAR_16 == VAR_4) &&
     (FUNC_11(VAR_11, 2))) {




  VAR_10->pci_bar1_map = FUNC_11(VAR_11, 2);
  VAR_13 = FUNC_10(VAR_11, 2);
  VAR_10->sli4_hba.ctrl_regs_memmap_p =
    FUNC_3(VAR_10->pci_bar1_map, VAR_13);
  if (!VAR_10->sli4_hba.ctrl_regs_memmap_p) {
   FUNC_2(VAR_1, &VAR_11->dev,
      "ioremap failed for SLI4 HBA control registers.\n");
   goto out_iounmap_conf;
  }
  FUNC_7(VAR_10);
 }

 if ((VAR_16 == VAR_4) &&
     (FUNC_11(VAR_11, 4))) {




  VAR_10->pci_bar2_map = FUNC_11(VAR_11, 4);
  VAR_14 = FUNC_10(VAR_11, 4);
  VAR_10->sli4_hba.drbl_regs_memmap_p =
    FUNC_3(VAR_10->pci_bar2_map, VAR_14);
  if (!VAR_10->sli4_hba.drbl_regs_memmap_p) {
   FUNC_2(VAR_1, &VAR_11->dev,
      "ioremap failed for SLI4 HBA doorbell registers.\n");
   goto out_iounmap_ctrl;
  }
  VAR_15 = FUNC_8(VAR_10, VAR_7);
  if (VAR_15)
   goto out_iounmap_all;
 }

 return 0;

out_iounmap_all:
 FUNC_4(VAR_10->sli4_hba.drbl_regs_memmap_p);
out_iounmap_ctrl:
 FUNC_4(VAR_10->sli4_hba.ctrl_regs_memmap_p);
out_iounmap_conf:
 FUNC_4(VAR_10->sli4_hba.conf_regs_memmap_p);
out:
 return VAR_15;
}
