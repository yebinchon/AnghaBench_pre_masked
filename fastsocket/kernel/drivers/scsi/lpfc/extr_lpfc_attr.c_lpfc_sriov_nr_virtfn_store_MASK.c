
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int cfg_sriov_nr_virtfn; struct pci_dev* pcidev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_3 (struct lpfc_hba*,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (char const*,char*,int*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_6, struct device_attribute *VAR_7,
    const char *VAR_8, size_t VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_0(VAR_6);
 struct lpfc_vport *VAR_11 = (struct lpfc_vport *)VAR_10->hostdata;
 struct lpfc_hba *VAR_12 = VAR_11->phba;
 struct pci_dev *VAR_13 = VAR_12->pcidev;
 int VAR_14 = 0, VAR_15 = -VAR_1;


 if (!FUNC_1(VAR_8[0]))
  return -VAR_1;
 if (FUNC_5(VAR_8, "%i", &VAR_14) != 1)
  return -VAR_1;
 if (VAR_14 < 0)
  return -VAR_1;


 if (VAR_14 == 0) {
  if (VAR_12->cfg_sriov_nr_virtfn > 0) {
   FUNC_4(VAR_13);
   VAR_12->cfg_sriov_nr_virtfn = 0;
  }
  return FUNC_6(VAR_8);
 }


 if (VAR_12->cfg_sriov_nr_virtfn > 0) {
  FUNC_2(VAR_12, VAR_3, VAR_4,
    "3018 There are %d virtual functions "
    "enabled on physical function.\n",
    VAR_12->cfg_sriov_nr_virtfn);
  return -VAR_0;
 }

 if (VAR_14 <= VAR_5)
  VAR_12->cfg_sriov_nr_virtfn = VAR_14;
 else {
  FUNC_2(VAR_12, VAR_3, VAR_4,
    "3019 Enabling %d virtual functions is not "
    "allowed.\n", VAR_14);
  return -VAR_1;
 }

 VAR_15 = FUNC_3(VAR_12, VAR_12->cfg_sriov_nr_virtfn);
 if (VAR_15) {
  VAR_12->cfg_sriov_nr_virtfn = 0;
  VAR_15 = -VAR_2;
 } else
  VAR_15 = FUNC_6(VAR_8);

 return VAR_15;
}
