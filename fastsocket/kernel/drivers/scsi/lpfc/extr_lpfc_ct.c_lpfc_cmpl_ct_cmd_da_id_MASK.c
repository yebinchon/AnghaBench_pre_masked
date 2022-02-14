
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ ct_flags; } ;
struct lpfc_iocbq {struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_0, struct lpfc_iocbq *VAR_1,
 struct lpfc_iocbq *VAR_2)
{
 struct lpfc_vport *VAR_3 = VAR_1->vport;


 VAR_3->ct_flags = 0;
 FUNC_0(VAR_0, VAR_1, VAR_2);
 return;
}
