
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct serv_parm {int dummy; } ;
struct lpfc_vport {scalar_t__ port_type; int fc_portname; int fc_nodename; int fc_sparam; int port_state; } ;
struct lpfc_hba {int mbox_mem_pool; int wwpn; int wwnn; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; } ;
struct TYPE_7__ {scalar_t__ mbxStatus; } ;
struct TYPE_6__ {TYPE_2__ mb; } ;
struct TYPE_8__ {int * context1; struct lpfc_vport* vport; TYPE_1__ u; } ;
typedef TYPE_2__ MAILBOX_t ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,scalar_t__,int ) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,scalar_t__,int ) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_3, LPFC_MBOXQ_t *VAR_4)
{
 MAILBOX_t *VAR_5 = &VAR_4->u.mb;
 struct lpfc_dmabuf *VAR_6 = (struct lpfc_dmabuf *) VAR_4->context1;
 struct lpfc_vport *VAR_7 = VAR_4->vport;



 if (VAR_5->mbxStatus) {

  FUNC_4(VAR_7, VAR_0, VAR_1,
     "0319 READ_SPARAM mbxStatus error x%x "
     "hba state x%x>\n",
     VAR_5->mbxStatus, VAR_7->port_state);
  FUNC_2(VAR_3);
  goto out;
 }

 FUNC_6((uint8_t *) &VAR_7->fc_sparam, (uint8_t *) VAR_6->virt,
        sizeof (struct serv_parm));
 FUNC_5(VAR_7);
 if (VAR_7->port_type == VAR_2) {
  FUNC_6(&VAR_3->wwnn, &VAR_7->fc_nodename, sizeof(VAR_3->wwnn));
  FUNC_6(&VAR_3->wwpn, &VAR_7->fc_portname, sizeof(VAR_3->wwnn));
 }

 FUNC_3(VAR_3, VAR_6->virt, VAR_6->phys);
 FUNC_0(VAR_6);
 FUNC_7(VAR_4, VAR_3->mbox_mem_pool);
 return;

out:
 VAR_4->context1 = ((void*)0);
 FUNC_3(VAR_3, VAR_6->virt, VAR_6->phys);
 FUNC_0(VAR_6);
 FUNC_1(VAR_3, VAR_7);
 FUNC_7(VAR_4, VAR_3->mbox_mem_pool);
 return;
}
