
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * hba_eq; int * fcp_cq; int els_cq; int mbx_cq; } ;
struct lpfc_hba {int cfg_fcp_io_channel; TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->sli4_hba.mbx_cq, VAR_0);
 FUNC_0(VAR_1->sli4_hba.els_cq, VAR_0);
 VAR_2 = 0;
 if (VAR_1->sli4_hba.fcp_cq) {
  do {
   FUNC_0(VAR_1->sli4_hba.fcp_cq[VAR_2],
          VAR_0);
  } while (++VAR_2 < VAR_1->cfg_fcp_io_channel);
 }
 if (VAR_1->sli4_hba.hba_eq) {
  for (VAR_2 = 0; VAR_2 < VAR_1->cfg_fcp_io_channel;
       VAR_2++)
   FUNC_1(VAR_1->sli4_hba.hba_eq[VAR_2],
          VAR_0);
 }
}
