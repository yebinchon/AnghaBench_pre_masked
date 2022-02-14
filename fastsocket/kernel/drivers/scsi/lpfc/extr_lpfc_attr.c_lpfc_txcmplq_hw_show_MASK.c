
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_4__ {TYPE_1__* ring; } ;
struct lpfc_hba {TYPE_2__ sli; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_3__ {int txcmplq_max; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
 char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_2);
 struct lpfc_hba *VAR_6 = ((struct lpfc_vport *) VAR_5->hostdata)->phba;

 return FUNC_1(VAR_4, VAR_1, "%d\n",
  VAR_6->sli.ring[VAR_0].txcmplq_max);
}
