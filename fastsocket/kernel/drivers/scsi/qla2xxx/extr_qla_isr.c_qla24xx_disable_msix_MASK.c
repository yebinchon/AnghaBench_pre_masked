
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qla_msix_entry {int rsp; int vector; scalar_t__ have_irq; } ;
struct TYPE_2__ {scalar_t__ msix_enabled; } ;
struct qla_hw_data {int msix_count; TYPE_1__ flags; struct qla_msix_entry* msix_entries; int pdev; } ;
typedef int scsi_qla_host_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qla_msix_entry*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct qla_hw_data *VAR_1)
{
 int VAR_2;
 struct qla_msix_entry *VAR_3;
 scsi_qla_host_t *VAR_4 = FUNC_3(VAR_1->pdev);

 for (VAR_2 = 0; VAR_2 < VAR_1->msix_count; VAR_2++) {
  VAR_3 = &VAR_1->msix_entries[VAR_2];
  if (VAR_3->have_irq)
   FUNC_0(VAR_3->vector, VAR_3->rsp);
 }
 FUNC_2(VAR_1->pdev);
 FUNC_1(VAR_1->msix_entries);
 VAR_1->msix_entries = ((void*)0);
 VAR_1->flags.msix_enabled = 0;
 FUNC_4(VAR_0, VAR_4, 0x0042,
     "Disabled the MSI.\n");
}
