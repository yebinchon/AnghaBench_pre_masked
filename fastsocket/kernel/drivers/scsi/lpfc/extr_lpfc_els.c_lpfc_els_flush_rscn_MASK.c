
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_rscn_flush; int fc_rscn_id_cnt; int fc_flag; int ** fc_rscn_id_list; struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_hba*,int *) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct lpfc_vport *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_2(VAR_2);
 struct lpfc_hba *VAR_4 = VAR_2->phba;
 int VAR_5;

 FUNC_3(VAR_3->host_lock);
 if (VAR_2->fc_rscn_flush) {

  FUNC_4(VAR_3->host_lock);
  return;
 }

 VAR_2->fc_rscn_flush = 1;
 FUNC_4(VAR_3->host_lock);

 for (VAR_5 = 0; VAR_5 < VAR_2->fc_rscn_id_cnt; VAR_5++) {
  FUNC_1(VAR_4, VAR_2->fc_rscn_id_list[VAR_5]);
  VAR_2->fc_rscn_id_list[VAR_5] = ((void*)0);
 }
 FUNC_3(VAR_3->host_lock);
 VAR_2->fc_rscn_id_cnt = 0;
 VAR_2->fc_flag &= ~(VAR_1 | VAR_0);
 FUNC_4(VAR_3->host_lock);
 FUNC_0(VAR_2);

 VAR_2->fc_rscn_flush = 0;
}
