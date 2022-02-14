
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_3__ {int if_type; int sli_family; } ;
struct TYPE_4__ {TYPE_1__ pc_sli4_params; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_2__ sli4_hba; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lpfc_hba*,char*,int) ;
 int FUNC_2 (char*,int ,char*,char*,int,...) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_3, struct device_attribute *VAR_4,
  char *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_3);
 struct lpfc_vport *VAR_7 = (struct lpfc_vport *) VAR_6->hostdata;
 struct lpfc_hba *VAR_8 = VAR_7->phba;
 uint32_t VAR_9;
 uint8_t VAR_10;
 char VAR_11[VAR_0];
 int VAR_12;

 FUNC_1(VAR_8, VAR_11, 1);
 VAR_9 = VAR_8->sli4_hba.pc_sli4_params.if_type;
 VAR_10 = VAR_8->sli4_hba.pc_sli4_params.sli_family;

 if (VAR_8->sli_rev < VAR_1)
  VAR_12 = FUNC_2(VAR_5, VAR_2, "%s, sli-%d\n",
          VAR_11, VAR_8->sli_rev);
 else
  VAR_12 = FUNC_2(VAR_5, VAR_2, "%s, sli-%d:%d:%x\n",
          VAR_11, VAR_8->sli_rev, VAR_9, VAR_10);

 return VAR_12;
}
