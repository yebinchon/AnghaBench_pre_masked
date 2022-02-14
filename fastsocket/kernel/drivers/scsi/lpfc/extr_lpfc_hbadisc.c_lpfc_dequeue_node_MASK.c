
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_listp; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_3 (struct lpfc_vport*,scalar_t__,int) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,scalar_t__,int ) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct lpfc_vport *VAR_1, struct lpfc_nodelist *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_5(VAR_1);

 FUNC_2(VAR_1, VAR_2);
 if (VAR_2->nlp_state && !FUNC_1(&VAR_2->nlp_listp))
  FUNC_3(VAR_1, VAR_2->nlp_state, -1);
 FUNC_6(VAR_3->host_lock);
 FUNC_0(&VAR_2->nlp_listp);
 FUNC_7(VAR_3->host_lock);
 FUNC_4(VAR_1, VAR_2, VAR_2->nlp_state,
    VAR_0);
}
