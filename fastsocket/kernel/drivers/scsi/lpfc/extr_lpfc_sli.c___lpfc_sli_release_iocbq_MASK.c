
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_iocbq {int dummy; } ;
struct lpfc_hba {int iocb_cnt; int (* __lpfc_sli_release_iocbq ) (struct lpfc_hba*,struct lpfc_iocbq*) ;} ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_iocbq*) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_0, struct lpfc_iocbq *VAR_1)
{
 VAR_0->__lpfc_sli_release_iocbq(VAR_0, VAR_1);
 VAR_0->iocb_cnt--;
}
