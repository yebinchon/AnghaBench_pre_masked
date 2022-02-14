
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {unsigned long queue_depth; int lun; struct lpfc_rport_data* hostdata; TYPE_1__* host; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_rport_data {int pnode; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_vport*,int ,int ,unsigned long,unsigned long) ;
 int FUNC_1 (struct scsi_device*,int ,int) ;
 int FUNC_2 (struct scsi_device*) ;

int
FUNC_3(struct scsi_device *VAR_0, int VAR_1, int VAR_2)
{
 struct lpfc_vport *VAR_3 = (struct lpfc_vport *) VAR_0->host->hostdata;
 struct lpfc_hba *VAR_4 = VAR_3->phba;
 struct lpfc_rport_data *VAR_5;
 unsigned long VAR_6, VAR_7;

 VAR_7 = VAR_0->queue_depth;
 FUNC_1(VAR_0, FUNC_2(VAR_0), VAR_1);
 VAR_6 = VAR_0->queue_depth;
 VAR_5 = VAR_0->hostdata;
 if (VAR_5)
  FUNC_0(VAR_4, VAR_3,
             VAR_5->pnode, VAR_0->lun,
             VAR_7,
             VAR_6);
 return VAR_0->queue_depth;
}
