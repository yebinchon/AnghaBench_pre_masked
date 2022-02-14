
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_work_evt {int evt_listp; int evt; scalar_t__ evt_arg1; } ;
struct lpfc_vport {int load_flag; struct lpfc_hba* phba; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct TYPE_3__ {int wwn; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_type; struct lpfc_work_evt dev_loss_evt; TYPE_2__ nlp_portname; int * rport; int nlp_flag; int nlp_DID; struct lpfc_vport* vport; int nlp_sid; } ;
struct lpfc_hba {int hbalock; int work_list; } ;
struct fc_rport {scalar_t__ port_name; int dev; struct lpfc_rport_data* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_nodelist*) ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,int ,int *,int ) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;

void
FUNC_12(struct fc_rport *VAR_7)
{
 struct lpfc_rport_data *VAR_8;
 struct lpfc_nodelist * VAR_9;
 struct lpfc_vport *VAR_10;
 struct lpfc_hba *VAR_11;
 struct lpfc_work_evt *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_8 = VAR_7->dd_data;
 VAR_9 = VAR_8->pnode;
 if (!VAR_9 || !FUNC_0(VAR_9))
  return;

 VAR_10 = VAR_9->vport;
 VAR_11 = VAR_10->phba;

 FUNC_3(VAR_10, VAR_3,
  "rport devlosscb: sid:x%x did:x%x flg:x%x",
  VAR_9->nlp_sid, VAR_9->nlp_DID, VAR_9->nlp_flag);

 FUNC_6(VAR_9->vport, VAR_1, VAR_2,
    "3181 dev_loss_callbk x%06x, rport %p flg x%x\n",
    VAR_9->nlp_DID, VAR_9->rport, VAR_9->nlp_flag);





 if (VAR_10->load_flag & VAR_0) {
  VAR_13 = VAR_8->pnode != ((void*)0);
  VAR_14 = VAR_9->rport != ((void*)0);
  VAR_8->pnode = ((void*)0);
  VAR_9->rport = ((void*)0);
  if (VAR_13)
   FUNC_5(VAR_9);
  if (VAR_14)
   FUNC_8(&VAR_7->dev);
  return;
 }

 if (VAR_9->nlp_state == VAR_6)
  return;

 if (VAR_9->nlp_type & VAR_5) {


  if (VAR_7->port_name != FUNC_11(VAR_9->nlp_portname.u.wwn)) {
   FUNC_8(&VAR_7->dev);
   return;
  }
 }

 VAR_12 = &VAR_9->dev_loss_evt;

 if (!FUNC_2(&VAR_12->evt_listp))
  return;

 VAR_12->evt_arg1 = FUNC_4(VAR_9);

 FUNC_9(&VAR_11->hbalock);



 if (VAR_12->evt_arg1) {
  VAR_12->evt = VAR_4;
  FUNC_1(&VAR_12->evt_listp, &VAR_11->work_list);
  FUNC_7(VAR_11);
 }
 FUNC_10(&VAR_11->hbalock);

 return;
}
