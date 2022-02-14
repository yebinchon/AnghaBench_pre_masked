
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_sli_ring {int num_mask; TYPE_1__* prt; } ;
struct lpfc_iocbq {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_2__ {scalar_t__ rctl; scalar_t__ type; int (* lpfc_sli_rcv_unsol_event ) (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;scalar_t__ profile; } ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_hba *VAR_0, struct lpfc_sli_ring *VAR_1,
    struct lpfc_iocbq *VAR_2, uint32_t VAR_3,
    uint32_t VAR_4)
{
 int VAR_5;


 if (VAR_1->prt[0].profile) {
  if (VAR_1->prt[0].lpfc_sli_rcv_unsol_event)
   (VAR_1->prt[0].lpfc_sli_rcv_unsol_event) (VAR_0, VAR_1,
         VAR_2);
  return 1;
 }


 for (VAR_5 = 0; VAR_5 < VAR_1->num_mask; VAR_5++) {
  if ((VAR_1->prt[VAR_5].rctl == VAR_3) &&
      (VAR_1->prt[VAR_5].type == VAR_4)) {
   if (VAR_1->prt[VAR_5].lpfc_sli_rcv_unsol_event)
    (VAR_1->prt[VAR_5].lpfc_sli_rcv_unsol_event)
      (VAR_0, VAR_1, VAR_2);
   return 1;
  }
 }
 return 0;
}
