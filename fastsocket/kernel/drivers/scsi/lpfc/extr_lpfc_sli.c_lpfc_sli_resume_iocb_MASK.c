
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_sli_ring {scalar_t__ ringno; int txq; } ;
struct lpfc_iocbq {int dummy; } ;
struct TYPE_2__ {scalar_t__ fcp_ring; int sli_flag; } ;
struct lpfc_hba {TYPE_1__ sli; } ;
typedef int IOCB_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct lpfc_hba*) ;
 int * FUNC_2 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 struct lpfc_iocbq* FUNC_3 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_sli_ring*,int *,struct lpfc_iocbq*) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_sli_ring*) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_1, struct lpfc_sli_ring *VAR_2)
{
 IOCB_t *VAR_3;
 struct lpfc_iocbq *VAR_4;
 if (FUNC_1(VAR_1) &&
     (!FUNC_0(&VAR_2->txq)) &&
     (VAR_2->ringno != VAR_1->sli.fcp_ring ||
      VAR_1->sli.sli_flag & VAR_0)) {

  while ((VAR_3 = FUNC_2(VAR_1, VAR_2)) &&
         (VAR_4 = FUNC_3(VAR_1, VAR_2)))
   FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);

  if (VAR_3)
   FUNC_6(VAR_1, VAR_2);
  else
   FUNC_5(VAR_1, VAR_2);
 }

 return;
}
