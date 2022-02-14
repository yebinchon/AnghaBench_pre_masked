
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct lpfc_vport *VAR_5 = (struct lpfc_vport *) VAR_4->hostdata;
 struct lpfc_hba *VAR_6 = VAR_5->phba;
 uint16_t VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 return FUNC_2(VAR_3, VAR_0, "%d\n", VAR_7);
}
