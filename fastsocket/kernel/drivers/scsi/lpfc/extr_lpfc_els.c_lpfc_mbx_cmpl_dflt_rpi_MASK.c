
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_nodelist {int vport; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_4__ {int * context2; int * context1; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (int ,struct lpfc_nodelist*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ) ;
 int FUNC_4 (struct lpfc_nodelist*) ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

void
FUNC_7(struct lpfc_hba *VAR_0, LPFC_MBOXQ_t *VAR_1)
{
 struct lpfc_dmabuf *VAR_2 = (struct lpfc_dmabuf *) (VAR_1->context1);
 struct lpfc_nodelist *VAR_3 = (struct lpfc_nodelist *) VAR_1->context2;

 VAR_1->context1 = ((void*)0);
 VAR_1->context2 = ((void*)0);

 FUNC_3(VAR_0, VAR_2->virt, VAR_2->phys);
 FUNC_1(VAR_2);
 FUNC_6(VAR_1, VAR_0->mbox_mem_pool);
 if (VAR_3) {
  if (FUNC_0(VAR_3)) {
   FUNC_5(VAR_3);




   FUNC_4(VAR_3);
  } else {
   FUNC_2(VAR_3->vport, VAR_3);
  }
 }

 return;
}
