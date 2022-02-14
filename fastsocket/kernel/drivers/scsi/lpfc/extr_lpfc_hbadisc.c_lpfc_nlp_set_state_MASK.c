
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_nodes; } ;
struct lpfc_nodelist {int nlp_state; int nlp_listp; int nlp_type; int nlp_flag; int nlp_DID; } ;
struct Scsi_Host {int host_lock; } ;
typedef int name2 ;
typedef int name1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_3 (struct lpfc_vport*,int ,char*,int ,int,int) ;
 int FUNC_4 (struct lpfc_vport*,int,int) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int,int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(struct lpfc_vport *VAR_7, struct lpfc_nodelist *VAR_8,
     int VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_8(VAR_7);
 int VAR_11 = VAR_8->nlp_state;
 char VAR_12[16], VAR_13[16];

 FUNC_7(VAR_7, VAR_0, VAR_1,
    "0904 NPort state transition x%06x, %s -> %s\n",
    VAR_8->nlp_DID,
    FUNC_6(VAR_12, sizeof(VAR_12), VAR_11),
    FUNC_6(VAR_13, sizeof(VAR_13), VAR_9));

 FUNC_3(VAR_7, VAR_2,
  "node statechg    did:x%x old:%d ste:%d",
  VAR_8->nlp_DID, VAR_11, VAR_9);

 if (VAR_11 == VAR_4 &&
     VAR_9 != VAR_4)
  FUNC_2(VAR_7, VAR_8);
 if (VAR_11 == VAR_5) {
  VAR_8->nlp_flag &= ~VAR_6;
  VAR_8->nlp_type &= ~VAR_3;
 }

 if (FUNC_1(&VAR_8->nlp_listp)) {
  FUNC_9(VAR_10->host_lock);
  FUNC_0(&VAR_8->nlp_listp, &VAR_7->fc_nodes);
  FUNC_10(VAR_10->host_lock);
 } else if (VAR_11)
  FUNC_4(VAR_7, VAR_11, -1);

 VAR_8->nlp_state = VAR_9;
 FUNC_4(VAR_7, VAR_9, 1);
 FUNC_5(VAR_7, VAR_8, VAR_11, VAR_9);
}
