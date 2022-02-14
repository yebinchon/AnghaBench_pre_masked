
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ conf_regs_memmap_p; int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ cfg_sriov_nr_virtfn; TYPE_2__ sli4_hba; TYPE_1__* pport; int cfg_enable_hba_reset; struct pci_dev* pcidev; } ;
struct completion {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ fc_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,scalar_t__) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int VAR_18 ;
 int FUNC_5 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_6 (struct lpfc_hba*,int*,struct completion*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct pci_dev*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct completion*) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_12(struct lpfc_hba *VAR_19, uint32_t VAR_20)
{
 struct completion VAR_21;
 struct pci_dev *VAR_22 = VAR_19->pcidev;
 uint32_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 int VAR_26 = 0, VAR_27 = 0;
 int VAR_28 = 1, VAR_29;

 if (!VAR_19->cfg_enable_hba_reset)
  return -VAR_0;

 if ((VAR_19->sli_rev < VAR_17) ||
     (FUNC_0(VAR_18, &VAR_19->sli4_hba.sli_intf) !=
      VAR_16))
  return -VAR_3;


 VAR_23 = VAR_19->pport->fc_flag;
 VAR_24 = VAR_19->cfg_sriov_nr_virtfn;


 if (VAR_19->cfg_sriov_nr_virtfn) {
  FUNC_8(VAR_22);
  VAR_19->cfg_sriov_nr_virtfn = 0;
 }

 VAR_26 = FUNC_2(VAR_19, VAR_11);

 if (VAR_26 != 0)
  return VAR_26;


 FUNC_7(100);

 VAR_25 = FUNC_9(VAR_19->sli4_hba.conf_regs_memmap_p +
   VAR_9);

 if (VAR_20 == VAR_13)
  VAR_25 |= VAR_14;
 else if (VAR_20 == VAR_15)
  VAR_25 |= VAR_8;
 else if (VAR_20 == VAR_10)
  VAR_25 |= VAR_7;

 FUNC_11(VAR_25, VAR_19->sli4_hba.conf_regs_memmap_p +
        VAR_9);

 FUNC_9(VAR_19->sli4_hba.conf_regs_memmap_p + VAR_9);


 VAR_27 = FUNC_4(VAR_19);

 if (VAR_27 == -VAR_3) {

  FUNC_3(VAR_19, VAR_5, VAR_6,
    "3150 No privilage to perform the requested "
    "access: x%x\n", VAR_25);
 } else if (VAR_27 == -VAR_1) {

  FUNC_3(VAR_19, VAR_5, VAR_6,
    "3153 Fail to perform the requested "
    "access: x%x\n", VAR_25);
  return VAR_27;
 }


 if (VAR_23 & VAR_4)
  goto out;

 FUNC_1(&VAR_21);
 VAR_28 = FUNC_6(VAR_19, &VAR_26, &VAR_21,
        VAR_12);
 if (!VAR_28)
  goto out;

 FUNC_10(&VAR_21);

out:

 if (VAR_24) {
  VAR_29 =
   FUNC_5(VAR_19, VAR_24);
  if (!VAR_29)
   VAR_19->cfg_sriov_nr_virtfn = VAR_24;
 }


 if (!VAR_27) {
  if (!VAR_28)
   VAR_27 = -VAR_2;
  else if (VAR_26)
   VAR_27 = -VAR_1;
 }
 return VAR_27;
}
