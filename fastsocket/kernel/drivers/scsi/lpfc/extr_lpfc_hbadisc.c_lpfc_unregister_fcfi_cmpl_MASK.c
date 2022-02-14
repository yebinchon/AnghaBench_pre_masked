
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int port_state; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_6__ {scalar_t__ mbxStatus; } ;
struct TYPE_7__ {TYPE_1__ mb; } ;
struct TYPE_8__ {TYPE_2__ u; struct lpfc_vport* vport; } ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_3, LPFC_MBOXQ_t *VAR_4)
{
 struct lpfc_vport *VAR_5 = VAR_4->vport;

 if (VAR_4->u.mb.mbxStatus) {
  FUNC_0(VAR_3, VAR_0, VAR_1|VAR_2,
   "2550 UNREG_FCFI mbxStatus error x%x "
   "HBA state x%x\n",
   VAR_4->u.mb.mbxStatus, VAR_5->port_state);
 }
 FUNC_1(VAR_4, VAR_3->mbox_mem_pool);
 return;
}
