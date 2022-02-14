
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {scalar_t__ num_disc_nodes; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_DID; int nlp_prev_state; } ;
struct lpfc_iocbq {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static uint32_t
FUNC_8(struct lpfc_vport *VAR_3, struct lpfc_nodelist *VAR_4,
      void *VAR_5, uint32_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_5(VAR_3);
 struct lpfc_hba *VAR_8 = VAR_3->phba;
 struct lpfc_iocbq *VAR_9;


 FUNC_0(VAR_8, VAR_4);

 VAR_9 = (struct lpfc_iocbq *) VAR_5;

 if (FUNC_4(VAR_3, VAR_4, VAR_9)) {
  if (VAR_4->nlp_flag & VAR_0) {
   FUNC_6(VAR_7->host_lock);
   VAR_4->nlp_flag &= ~VAR_0;
   FUNC_7(VAR_7->host_lock);
   if (VAR_3->num_disc_nodes)
    FUNC_2(VAR_3);
  }
  return VAR_4->nlp_state;
 }
 VAR_4->nlp_prev_state = VAR_1;
 FUNC_1(VAR_3, VAR_4->nlp_DID, 0);
 FUNC_3(VAR_3, VAR_4, VAR_2);

 return VAR_4->nlp_state;
}
