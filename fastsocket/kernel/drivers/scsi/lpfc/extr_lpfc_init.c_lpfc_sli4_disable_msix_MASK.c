
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * fcp_eq_hdl; TYPE_1__* msix_entries; } ;
struct lpfc_hba {int cfg_fcp_io_channel; int pcidev; TYPE_2__ sli4_hba; } ;
struct TYPE_3__ {int vector; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->cfg_fcp_io_channel; VAR_1++)
  FUNC_0(VAR_0->sli4_hba.msix_entries[VAR_1].vector,
    &VAR_0->sli4_hba.fcp_eq_hdl[VAR_1]);


 FUNC_1(VAR_0->pcidev);

 return;
}
