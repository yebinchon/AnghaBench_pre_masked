
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_iocbq {int dummy; } ;
struct lpfc_hba {int (* __lpfc_sli_issue_iocb ) (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;} ;


 int FUNC_0 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;

int
FUNC_1(struct lpfc_hba *VAR_0, uint32_t VAR_1,
  struct lpfc_iocbq *VAR_2, uint32_t VAR_3)
{
 return VAR_0->__lpfc_sli_issue_iocb(VAR_0, VAR_1, VAR_2, VAR_3);
}
