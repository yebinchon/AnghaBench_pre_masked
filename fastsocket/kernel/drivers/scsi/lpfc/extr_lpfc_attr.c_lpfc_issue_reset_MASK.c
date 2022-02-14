
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int (* lpfc_selective_reset ) (struct lpfc_hba*) ;int cfg_enable_hba_reset; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (struct lpfc_hba*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_2);
 struct lpfc_vport *VAR_7 = (struct lpfc_vport *) VAR_6->hostdata;
 struct lpfc_hba *VAR_8 = VAR_7->phba;
 int VAR_9 = -VAR_1;

 if (!VAR_8->cfg_enable_hba_reset)
  return -VAR_0;

 if (FUNC_2(VAR_4, "selective", sizeof("selective") - 1) == 0)
  VAR_9 = VAR_8->lpfc_selective_reset(VAR_8);

 if (VAR_9 == 0)
  return FUNC_1(VAR_4);
 else
  return VAR_9;
}
