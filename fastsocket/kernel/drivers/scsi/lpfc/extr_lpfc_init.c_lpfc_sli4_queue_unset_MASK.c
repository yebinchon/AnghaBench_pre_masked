
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * hba_eq; int * fcp_cq; int els_cq; int mbx_cq; int * fcp_wq; int dat_rq; int hdr_rq; int els_wq; int mbx_wq; } ;
struct lpfc_hba {int cfg_fcp_io_channel; TYPE_1__ sli4_hba; } ;


 int FUNC_0 (struct lpfc_hba*,int ) ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,int ) ;

void
FUNC_5(struct lpfc_hba *VAR_0)
{
 int VAR_1;


 FUNC_2(VAR_0, VAR_0->sli4_hba.mbx_wq);

 FUNC_4(VAR_0, VAR_0->sli4_hba.els_wq);

 FUNC_3(VAR_0, VAR_0->sli4_hba.hdr_rq, VAR_0->sli4_hba.dat_rq);

 if (VAR_0->sli4_hba.fcp_wq) {
  for (VAR_1 = 0; VAR_1 < VAR_0->cfg_fcp_io_channel;
       VAR_1++)
   FUNC_4(VAR_0, VAR_0->sli4_hba.fcp_wq[VAR_1]);
 }

 FUNC_0(VAR_0, VAR_0->sli4_hba.mbx_cq);

 FUNC_0(VAR_0, VAR_0->sli4_hba.els_cq);

 if (VAR_0->sli4_hba.fcp_cq) {
  for (VAR_1 = 0; VAR_1 < VAR_0->cfg_fcp_io_channel;
       VAR_1++)
   FUNC_0(VAR_0, VAR_0->sli4_hba.fcp_cq[VAR_1]);
 }

 if (VAR_0->sli4_hba.hba_eq) {
  for (VAR_1 = 0; VAR_1 < VAR_0->cfg_fcp_io_channel;
       VAR_1++)
   FUNC_1(VAR_0, VAR_0->sli4_hba.hba_eq[VAR_1]);
 }
}
