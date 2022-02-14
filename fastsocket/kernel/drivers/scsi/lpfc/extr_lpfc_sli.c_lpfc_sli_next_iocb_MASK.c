
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli_ring {int dummy; } ;
struct lpfc_iocbq {int dummy; } ;
struct lpfc_hba {int dummy; } ;


 struct lpfc_iocbq* FUNC_0 (struct lpfc_hba*,struct lpfc_sli_ring*) ;

__attribute__((used)) static struct lpfc_iocbq *
FUNC_1(struct lpfc_hba *VAR_0, struct lpfc_sli_ring *VAR_1,
     struct lpfc_iocbq **VAR_2)
{
 struct lpfc_iocbq * VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3) {
  VAR_3 = *VAR_2;
  *VAR_2 = ((void*)0);
 }

 return VAR_3;
}
