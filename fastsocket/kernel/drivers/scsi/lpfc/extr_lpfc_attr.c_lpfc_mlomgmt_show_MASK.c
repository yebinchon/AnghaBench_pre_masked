
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_2__ {int sli_flag; } ;
struct lpfc_hba {TYPE_1__ sli; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_2);
 struct lpfc_vport *VAR_6 = (struct lpfc_vport *)VAR_5->hostdata;
 struct lpfc_hba *VAR_7 = VAR_6->phba;

 return FUNC_1(VAR_4, VAR_1, "%d\n",
  (VAR_7->sli.sli_flag & VAR_0));
}
