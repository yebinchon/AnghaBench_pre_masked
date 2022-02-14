
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {struct beiscsi_hba* be_eq; } ;
struct TYPE_7__ {int dma; int va; int size; } ;
struct TYPE_8__ {TYPE_2__ mbox_mem_alloced; } ;
struct beiscsi_hba {unsigned int num_cpus; int beiscsi_hw_check_task; TYPE_3__ ctrl; TYPE_4__* pcidev; int iopoll; int wq; int * msi_name; TYPE_1__* msix_entries; scalar_t__ msix_enabled; struct hwi_controller* phwi_ctrlr; } ;
struct be_eq_obj {unsigned int num_cpus; int beiscsi_hw_check_task; TYPE_3__ ctrl; TYPE_4__* pcidev; int iopoll; int wq; int * msi_name; TYPE_1__* msix_entries; scalar_t__ msix_enabled; struct hwi_controller* phwi_ctrlr; } ;
struct TYPE_9__ {int irq; } ;
struct TYPE_6__ {unsigned int vector; } ;


 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int,struct beiscsi_hba*) ;
 int FUNC_7 (struct beiscsi_hba*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct beiscsi_hba *VAR_1)
{
 struct hwi_controller *VAR_2;
 struct hwi_context_memory *VAR_3;
 struct be_eq_obj *VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_2 = VAR_1->phwi_ctrlr;
 VAR_3 = VAR_2->phwi_ctxt;
 FUNC_7(VAR_1);
 if (VAR_1->msix_enabled) {
  for (VAR_5 = 0; VAR_5 <= VAR_1->num_cpus; VAR_5++) {
   VAR_6 = VAR_1->msix_entries[VAR_5].vector;
   FUNC_6(VAR_6, &VAR_3->be_eq[VAR_5]);
   FUNC_8(VAR_1->msi_name[VAR_5]);
  }
 } else
  if (VAR_1->pcidev->irq)
   FUNC_6(VAR_1->pcidev->irq, VAR_1);
 FUNC_9(VAR_1->pcidev);
 FUNC_5(VAR_1->wq);
 if (VAR_0)
  for (VAR_5 = 0; VAR_5 < VAR_1->num_cpus; VAR_5++) {
   VAR_4 = &VAR_3->be_eq[VAR_5];
   FUNC_3(&VAR_4->iopoll);
  }

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 FUNC_2(VAR_1);
 FUNC_10(VAR_1->pcidev,
       VAR_1->ctrl.mbox_mem_alloced.size,
       VAR_1->ctrl.mbox_mem_alloced.va,
       VAR_1->ctrl.mbox_mem_alloced.dma);

 FUNC_4(&VAR_1->beiscsi_hw_check_task);
}
