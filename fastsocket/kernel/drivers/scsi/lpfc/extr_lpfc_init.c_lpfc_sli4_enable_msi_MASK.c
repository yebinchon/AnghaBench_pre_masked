
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* fcp_eq_hdl; } ;
struct lpfc_hba {int cfg_fcp_io_channel; TYPE_2__ sli4_hba; TYPE_3__* pcidev; } ;
struct TYPE_7__ {int irq; } ;
struct TYPE_5__ {int idx; struct lpfc_hba* phba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,...) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,int ,struct lpfc_hba*) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_hba *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_6->pcidev);
 if (!VAR_7)
  FUNC_0(VAR_6, VAR_1, VAR_3,
    "0487 PCI enable MSI mode success.\n");
 else {
  FUNC_0(VAR_6, VAR_1, VAR_3,
    "0488 PCI enable MSI mode failed (%d)\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_6->pcidev->irq, VAR_5,
    VAR_0, VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_6->pcidev);
  FUNC_0(VAR_6, VAR_2, VAR_3,
    "0490 MSI request_irq failed (%d)\n", VAR_7);
  return VAR_7;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->cfg_fcp_io_channel; VAR_8++) {
  VAR_6->sli4_hba.fcp_eq_hdl[VAR_8].idx = VAR_8;
  VAR_6->sli4_hba.fcp_eq_hdl[VAR_8].phba = VAR_6;
 }

 return 0;
}
