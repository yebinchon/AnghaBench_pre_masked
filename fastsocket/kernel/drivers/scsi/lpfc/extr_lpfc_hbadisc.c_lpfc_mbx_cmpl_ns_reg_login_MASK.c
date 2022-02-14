
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ port_state; scalar_t__ fc_ns_retry; } ;
struct lpfc_nodelist {int nlp_type; int nlp_flag; int nlp_rpi; } ;
struct lpfc_hba {scalar_t__ fc_topology; scalar_t__ sli_rev; int mbox_mem_pool; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_8__ {int * varWords; } ;
struct TYPE_9__ {TYPE_2__ un; scalar_t__ mbxStatus; } ;
struct TYPE_7__ {TYPE_3__ mb; } ;
struct TYPE_10__ {int * context2; int * context1; struct lpfc_vport* vport; TYPE_1__ u; } ;
typedef TYPE_3__ MAILBOX_t ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ) ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 scalar_t__ FUNC_8 (struct lpfc_vport*,int ,int ,int ) ;
 int FUNC_9 (struct lpfc_vport*,int ,int ,char*,scalar_t__) ;
 int FUNC_10 (struct lpfc_vport*,int ) ;
 int FUNC_11 (TYPE_4__*,int ) ;

void
FUNC_12(struct lpfc_hba *VAR_16, LPFC_MBOXQ_t *VAR_17)
{
 MAILBOX_t *VAR_18 = &VAR_17->u.mb;
 struct lpfc_dmabuf *VAR_19 = (struct lpfc_dmabuf *) (VAR_17->context1);
 struct lpfc_nodelist *VAR_20 = (struct lpfc_nodelist *) VAR_17->context2;
 struct lpfc_vport *VAR_21 = VAR_17->vport;

 VAR_17->context1 = ((void*)0);
 VAR_17->context2 = ((void*)0);

 if (VAR_18->mbxStatus) {
out:
  FUNC_9(VAR_21, VAR_1, VAR_2,
     "0260 Register NameServer error: 0x%x\n",
     VAR_18->mbxStatus);



  FUNC_6(VAR_20);
  FUNC_4(VAR_16, VAR_19->virt, VAR_19->phys);
  FUNC_0(VAR_19);
  FUNC_11(VAR_17, VAR_16->mbox_mem_pool);


  FUNC_5(VAR_20);

  if (VAR_16->fc_topology == VAR_4) {




   FUNC_1(VAR_21);


   FUNC_2(VAR_21);
   return;
  }
  FUNC_10(VAR_21, VAR_0);
  return;
 }

 if (VAR_16->sli_rev < VAR_3)
  VAR_20->nlp_rpi = VAR_18->un.varWords[0];
 VAR_20->nlp_flag |= VAR_7;
 VAR_20->nlp_type |= VAR_6;
 FUNC_7(VAR_21, VAR_20, VAR_8);

 if (VAR_21->port_state < VAR_5) {

  FUNC_8(VAR_21, VAR_11, 0, 0);
  FUNC_8(VAR_21, VAR_13, 0, 0);
  FUNC_8(VAR_21, VAR_14, 0, 0);
  FUNC_8(VAR_21, VAR_15, 0, 0);
  FUNC_8(VAR_21, VAR_12, 0, 0);


  FUNC_3(VAR_21, VAR_9, 0);
 }

 VAR_21->fc_ns_retry = 0;

 if (FUNC_8(VAR_21, VAR_10, 0, 0)) {

  goto out;
 }




 FUNC_6(VAR_20);
 FUNC_4(VAR_16, VAR_19->virt, VAR_19->phys);
 FUNC_0(VAR_19);
 FUNC_11(VAR_17, VAR_16->mbox_mem_pool);

 return;
}
