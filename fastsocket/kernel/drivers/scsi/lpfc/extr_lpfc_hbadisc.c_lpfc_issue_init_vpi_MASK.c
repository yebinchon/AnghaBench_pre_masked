
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ port_type; int vpi; TYPE_4__* phba; } ;
struct TYPE_10__ {int mbox_mem_pool; } ;
struct TYPE_9__ {int mbox_cmpl; struct lpfc_vport* vport; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_1__*,int) ;
 int VAR_7 ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_1__*,int ) ;
 int FUNC_4 (struct lpfc_vport*,int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;

void
FUNC_7(struct lpfc_vport *VAR_8)
{
 LPFC_MBOXQ_t *VAR_9;
 int VAR_10, VAR_11;

 if ((VAR_8->port_type != VAR_4) && (!VAR_8->vpi)) {
  VAR_11 = FUNC_0(VAR_8->phba);
  if (!VAR_11) {
   FUNC_2(VAR_8, VAR_2,
      VAR_3,
      "3303 Failed to obtain vport vpi\n");
   FUNC_4(VAR_8, VAR_0);
   return;
  }
  VAR_8->vpi = VAR_11;
 }

 VAR_9 = FUNC_5(VAR_8->phba->mbox_mem_pool, VAR_1);
 if (!VAR_9) {
  FUNC_2(VAR_8, VAR_2,
   VAR_3, "2607 Failed to allocate "
   "init_vpi mailbox\n");
  return;
 }
 FUNC_1(VAR_8->phba, VAR_9, VAR_8->vpi);
 VAR_9->vport = VAR_8;
 VAR_9->mbox_cmpl = VAR_7;
 VAR_10 = FUNC_3(VAR_8->phba, VAR_9, VAR_6);
 if (VAR_10 == VAR_5) {
  FUNC_2(VAR_8, VAR_2,
   VAR_3, "2608 Failed to issue init_vpi mailbox\n");
  FUNC_6(VAR_9, VAR_8->phba->mbox_mem_pool);
 }
}
