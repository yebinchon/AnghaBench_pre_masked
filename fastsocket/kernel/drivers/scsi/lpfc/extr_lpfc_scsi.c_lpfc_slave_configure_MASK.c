
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ tagged_supported; TYPE_2__* host; } ;
struct lpfc_vport {int cfg_lun_queue_depth; struct lpfc_hba* phba; } ;
struct TYPE_3__ {int * ring; } ;
struct lpfc_hba {int cfg_poll; TYPE_1__ sli; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int *,int ) ;
 int FUNC_2 (struct scsi_device*,int ) ;
 int FUNC_3 (struct scsi_device*,int ) ;

__attribute__((used)) static int
FUNC_4(struct scsi_device *VAR_4)
{
 struct lpfc_vport *VAR_5 = (struct lpfc_vport *) VAR_4->host->hostdata;
 struct lpfc_hba *VAR_6 = VAR_5->phba;

 if (VAR_4->tagged_supported)
  FUNC_2(VAR_4, VAR_5->cfg_lun_queue_depth);
 else
  FUNC_3(VAR_4, VAR_5->cfg_lun_queue_depth);

 if (VAR_6->cfg_poll & VAR_1) {
  FUNC_1(VAR_6,
   &VAR_6->sli.ring[VAR_3], VAR_2);
  if (VAR_6->cfg_poll & VAR_0)
   FUNC_0(VAR_6);
 }

 return 0;
}
