
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; scalar_t__ port_state; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hba_flag; int link_flag; scalar_t__ fc_topology; int mbox_mem_pool; } ;
struct TYPE_6__ {scalar_t__ mbxStatus; } ;
struct TYPE_7__ {TYPE_1__ mb; } ;
struct TYPE_8__ {TYPE_2__ u; struct lpfc_vport* vport; } ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,scalar_t__,...) ;
 int FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_hba *VAR_11, LPFC_MBOXQ_t *VAR_12)
{
 struct lpfc_vport *VAR_13 = VAR_12->vport;

 if (VAR_12->u.mb.mbxStatus)
  goto out;

 FUNC_5(VAR_12, VAR_11->mbox_mem_pool);


 if ((VAR_11->sli_rev == VAR_8) &&
     !(VAR_11->hba_flag & VAR_3) &&
     (VAR_11->link_flag & VAR_10))
  return;

 if (VAR_11->fc_topology == VAR_9 &&
     VAR_13->fc_flag & VAR_2 &&
     !(VAR_13->fc_flag & VAR_0)) {




   FUNC_4(VAR_13);
   return;
 }




 if (VAR_13->port_state != VAR_7 || VAR_13->fc_flag & VAR_1)
  FUNC_0(VAR_13);
 return;

out:
 FUNC_3(VAR_13, VAR_4, VAR_6,
    "0306 CONFIG_LINK mbxStatus error x%x "
    "HBA state x%x\n",
    VAR_12->u.mb.mbxStatus, VAR_13->port_state);
 FUNC_5(VAR_12, VAR_11->mbox_mem_pool);

 FUNC_2(VAR_11);

 FUNC_3(VAR_13, VAR_4, VAR_5,
    "0200 CONFIG_LINK bad hba state x%x\n",
    VAR_13->port_state);

 FUNC_1(VAR_11, VAR_13);
 return;
}
