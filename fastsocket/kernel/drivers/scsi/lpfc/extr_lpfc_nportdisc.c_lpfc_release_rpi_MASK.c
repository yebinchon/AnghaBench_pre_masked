
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct lpfc_vport {int vpi; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_5__ {int mbox_cmpl; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_vport*,int ,int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_1__*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(struct lpfc_hba *VAR_6,
  struct lpfc_vport *VAR_7,
  uint16_t VAR_8)
{
 LPFC_MBOXQ_t *VAR_9;
 int VAR_10;

 VAR_9 = (LPFC_MBOXQ_t *) FUNC_3(VAR_6->mbox_mem_pool,
   VAR_0);
 if (!VAR_9)
  FUNC_0(VAR_7, VAR_1, VAR_2,
   "2796 mailbox memory allocation failed \n");
 else {
  FUNC_2(VAR_6, VAR_7->vpi, VAR_8, VAR_9);
  VAR_9->mbox_cmpl = VAR_5;
  VAR_10 = FUNC_1(VAR_6, VAR_9, VAR_4);
  if (VAR_10 == VAR_3)
   FUNC_4(VAR_9, VAR_6->mbox_mem_pool);
 }
}
