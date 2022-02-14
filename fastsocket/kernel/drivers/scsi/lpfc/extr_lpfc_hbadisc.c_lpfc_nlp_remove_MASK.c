
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct lpfc_vport {int fc_sparam; int vpi; struct lpfc_hba* phba; } ;
struct lpfc_rport_data {int * pnode; } ;
struct lpfc_nodelist {int nlp_flag; TYPE_1__* rport; int nlp_rpi; int nlp_DID; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_8__ {struct lpfc_nodelist* context2; struct lpfc_vport* vport; int mbox_cmpl; int mbox_flag; } ;
struct TYPE_7__ {struct lpfc_rport_data* dd_data; } ;
typedef TYPE_2__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int VAR_7 ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,int *,TYPE_2__*,int ) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_vport *VAR_8, struct lpfc_nodelist *VAR_9)
{
 struct lpfc_hba *VAR_10 = VAR_8->phba;
 struct lpfc_rport_data *VAR_11;
 LPFC_MBOXQ_t *VAR_12;
 int VAR_13;

 FUNC_0(VAR_8, VAR_9);
 if ((VAR_9->nlp_flag & VAR_4) &&
     !(VAR_9->nlp_flag & VAR_5) &&
     !(VAR_9->nlp_flag & VAR_6)) {



  if ((VAR_12 = FUNC_4(VAR_10->mbox_mem_pool, VAR_0))
   != ((void*)0)) {
   VAR_13 = FUNC_2(VAR_10, VAR_8->vpi, VAR_9->nlp_DID,
       (uint8_t *) &VAR_8->fc_sparam, VAR_12, VAR_9->nlp_rpi);
   if (VAR_13) {
    FUNC_5(VAR_12, VAR_10->mbox_mem_pool);
   }
   else {
    VAR_12->mbox_flag |= VAR_1;
    VAR_12->mbox_cmpl = VAR_7;
    VAR_12->vport = VAR_8;
    VAR_12->context2 = VAR_9;
    VAR_13 =FUNC_3(VAR_10, VAR_12, VAR_3);
    if (VAR_13 == VAR_2) {
     FUNC_5(VAR_12, VAR_10->mbox_mem_pool);
    }
   }
  }
 }
 FUNC_1(VAR_8, VAR_9);






 if (VAR_9->rport) {
  VAR_11 = VAR_9->rport->dd_data;
  VAR_11->pnode = ((void*)0);
  VAR_9->rport = ((void*)0);
 }
}
