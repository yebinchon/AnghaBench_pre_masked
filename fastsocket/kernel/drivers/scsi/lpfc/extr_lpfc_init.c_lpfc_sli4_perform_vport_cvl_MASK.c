
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ port_state; int fc_flag; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_type; } ;
struct lpfc_hba {struct lpfc_vport* pport; int nlp_mem_pool; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,int ) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_7 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static struct lpfc_nodelist *
FUNC_11(struct lpfc_vport *VAR_8)
{
 struct lpfc_nodelist *VAR_9;
 struct Scsi_Host *VAR_10;
 struct lpfc_hba *VAR_11;

 if (!VAR_8)
  return ((void*)0);
 VAR_11 = VAR_8->phba;
 if (!VAR_11)
  return ((void*)0);
 VAR_9 = FUNC_4(VAR_8, VAR_1);
 if (!VAR_9) {

  VAR_9 = FUNC_8(VAR_11->nlp_mem_pool, VAR_2);
  if (!VAR_9)
   return 0;
  FUNC_6(VAR_8, VAR_9, VAR_1);

  VAR_9->nlp_type |= VAR_6;

  FUNC_3(VAR_8, VAR_9);
 } else if (!FUNC_0(VAR_9)) {

  VAR_9 = FUNC_2(VAR_8, VAR_9, VAR_7);
  if (!VAR_9)
   return 0;
 }
 if ((VAR_11->pport->port_state < VAR_4) &&
  (VAR_11->pport->port_state != VAR_5))
  return ((void*)0);

 if ((VAR_8 != VAR_11->pport) && (VAR_8->port_state < VAR_3)
  && (VAR_8->port_state != VAR_5))
  return ((void*)0);
 VAR_10 = FUNC_7(VAR_8);
 if (!VAR_10)
  return ((void*)0);
 FUNC_5(VAR_8);
 FUNC_1(VAR_8);
 FUNC_9(VAR_10->host_lock);
 VAR_8->fc_flag |= VAR_0;
 FUNC_10(VAR_10->host_lock);

 return VAR_9;
}
