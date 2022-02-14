
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ndlp; } ;
struct lpfc_iocbq {int * context1; scalar_t__ context3; int * context2; TYPE_1__ context_un; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; int virt; } ;


 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;

int
FUNC_5(struct lpfc_hba *VAR_0, struct lpfc_iocbq *VAR_1)
{
 struct lpfc_dmabuf *VAR_2;

 if (VAR_1->context_un.ndlp) {
  FUNC_3(VAR_1->context_un.ndlp);
  VAR_1->context_un.ndlp = ((void*)0);
 }
 if (VAR_1->context1) {
  VAR_2 = (struct lpfc_dmabuf *) VAR_1->context1;
  FUNC_2(VAR_0, VAR_2->virt, VAR_2->phys);
  FUNC_0(VAR_2);
  VAR_1->context1 = ((void*)0);
 }
 if (VAR_1->context2) {
  FUNC_1(VAR_0, (struct lpfc_dmabuf *) VAR_1->context2);
  VAR_1->context2 = ((void*)0);
 }

 if (VAR_1->context3) {
  VAR_2 = (struct lpfc_dmabuf *) VAR_1->context3;
  FUNC_2(VAR_0, VAR_2->virt, VAR_2->phys);
  FUNC_0(VAR_2);
  VAR_1->context1 = ((void*)0);
 }
 FUNC_4(VAR_0, VAR_1);
 return 0;
}
