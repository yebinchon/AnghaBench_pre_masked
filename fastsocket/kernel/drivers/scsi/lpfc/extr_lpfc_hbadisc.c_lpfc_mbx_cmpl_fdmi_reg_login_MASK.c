
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_vport {int cfg_fdmi_on; int fc_fdmitmo; } ;
struct lpfc_nodelist {int nlp_type; int nlp_flag; int nlp_rpi; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_8__ {int * varWords; } ;
struct TYPE_9__ {TYPE_2__ un; } ;
struct TYPE_7__ {TYPE_3__ mb; } ;
struct TYPE_10__ {int * context2; int * context1; struct lpfc_vport* vport; TYPE_1__ u; } ;
typedef TYPE_3__ MAILBOX_t ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ) ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

void
FUNC_8(struct lpfc_hba *VAR_6, LPFC_MBOXQ_t *VAR_7)
{
 MAILBOX_t *VAR_8 = &VAR_7->u.mb;
 struct lpfc_dmabuf *VAR_9 = (struct lpfc_dmabuf *) (VAR_7->context1);
 struct lpfc_nodelist *VAR_10 = (struct lpfc_nodelist *) VAR_7->context2;
 struct lpfc_vport *VAR_11 = VAR_7->vport;

 VAR_7->context1 = ((void*)0);
 VAR_7->context2 = ((void*)0);

 if (VAR_6->sli_rev < VAR_0)
  VAR_10->nlp_rpi = VAR_8->un.varWords[0];
 VAR_10->nlp_flag |= VAR_2;
 VAR_10->nlp_type |= VAR_1;
 FUNC_4(VAR_11, VAR_10, VAR_3);







 if (VAR_11->cfg_fdmi_on == 1)
  FUNC_1(VAR_11, VAR_10, VAR_4);
 else
  FUNC_6(&VAR_11->fc_fdmitmo,
     VAR_5 + FUNC_7(1000 * 60));




 FUNC_3(VAR_10);
 FUNC_2(VAR_6, VAR_9->virt, VAR_9->phys);
 FUNC_0(VAR_9);
 FUNC_5(VAR_7, VAR_6->mbox_mem_pool);

 return;
}
