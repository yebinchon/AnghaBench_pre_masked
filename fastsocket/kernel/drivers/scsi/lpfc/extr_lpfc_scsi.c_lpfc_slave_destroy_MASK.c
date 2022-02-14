
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int * hostdata; TYPE_1__* host; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int sdev_cnt; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct scsi_device *VAR_0)
{
 struct lpfc_vport *VAR_1 = (struct lpfc_vport *) VAR_0->host->hostdata;
 struct lpfc_hba *VAR_2 = VAR_1->phba;
 FUNC_0(&VAR_2->sdev_cnt);
 VAR_0->hostdata = ((void*)0);
 return;
}
