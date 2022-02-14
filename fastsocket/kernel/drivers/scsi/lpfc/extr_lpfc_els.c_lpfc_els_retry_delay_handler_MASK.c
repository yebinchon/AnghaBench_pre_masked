
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int fc_flag; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_last_elscmd; int nlp_flag; int nlp_retry; int nlp_state; int nlp_prev_state; int nlp_delayfunc; struct lpfc_vport* vport; } ;
struct Scsi_Host {int host_lock; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_5 (struct lpfc_vport*,int,int) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(struct lpfc_nodelist *VAR_6)
{
 struct lpfc_vport *VAR_7 = VAR_6->vport;
 struct Scsi_Host *VAR_8 = FUNC_8(VAR_7);
 uint32_t VAR_9, VAR_10, VAR_11;

 FUNC_9(VAR_8->host_lock);
 VAR_10 = VAR_6->nlp_DID;
 VAR_9 = VAR_6->nlp_last_elscmd;
 VAR_6->nlp_last_elscmd = 0;

 if (!(VAR_6->nlp_flag & VAR_1)) {
  FUNC_10(VAR_8->host_lock);
  return;
 }

 VAR_6->nlp_flag &= ~VAR_1;
 FUNC_10(VAR_8->host_lock);





 FUNC_0(&VAR_6->nlp_delayfunc);
 VAR_11 = VAR_6->nlp_retry;
 VAR_6->nlp_retry = 0;

 switch (VAR_9) {
 case 131:
  FUNC_3(VAR_7, VAR_6, VAR_11);
  break;
 case 129:
  if (!FUNC_5(VAR_7, VAR_6->nlp_DID, VAR_11)) {
   VAR_6->nlp_prev_state = VAR_6->nlp_state;
   FUNC_7(VAR_7, VAR_6, VAR_4);
  }
  break;
 case 133:
  if (!FUNC_1(VAR_7, VAR_6, VAR_11)) {
   VAR_6->nlp_prev_state = VAR_6->nlp_state;
   FUNC_7(VAR_7, VAR_6, VAR_2);
  }
  break;
 case 128:
  if (!FUNC_6(VAR_7, VAR_6, VAR_11)) {
   VAR_6->nlp_prev_state = VAR_6->nlp_state;
   FUNC_7(VAR_7, VAR_6, VAR_5);
  }
  break;
 case 130:
  if (!FUNC_4(VAR_7, VAR_6, VAR_11)) {
   VAR_6->nlp_prev_state = VAR_6->nlp_state;
   FUNC_7(VAR_7, VAR_6, VAR_3);
  }
  break;
 case 132:
  if (!(VAR_7->fc_flag & VAR_0))
   FUNC_2(VAR_7, VAR_6, VAR_11);
  break;
 }
 return;
}
