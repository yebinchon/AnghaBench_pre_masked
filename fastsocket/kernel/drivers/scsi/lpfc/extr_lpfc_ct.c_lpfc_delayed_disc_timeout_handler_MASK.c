
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_flag; int phba; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct lpfc_vport *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_2->host_lock);
 if (!(VAR_1->fc_flag & VAR_0)) {
  FUNC_3(VAR_2->host_lock);
  return;
 }
 VAR_1->fc_flag &= ~VAR_0;
 FUNC_3(VAR_2->host_lock);

 FUNC_0(VAR_1->phba, VAR_1);
}
