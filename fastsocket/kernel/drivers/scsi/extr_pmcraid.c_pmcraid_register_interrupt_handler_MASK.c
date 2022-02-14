
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int host_ioa_interrupt_reg; } ;
struct pmcraid_instance {int num_hrrq; int interrupt_mode; TYPE_2__* hrrq_vector; TYPE_1__ int_regs; struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;
struct msix_entry {int entry; int vector; } ;
struct TYPE_5__ {int hrrq_id; int vector; struct pmcraid_instance* drv_inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,struct msix_entry*,int) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(struct pmcraid_instance *VAR_8)
{
 int VAR_9;
 struct pci_dev *VAR_10 = VAR_8->pdev;

 if ((VAR_5) &&
  (FUNC_5(VAR_10, VAR_2))) {
  int VAR_11 = VAR_4;
  struct msix_entry VAR_12[VAR_4];
  int VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
   VAR_12[VAR_13].entry = VAR_13;

  VAR_9 = FUNC_4(VAR_10, VAR_12, VAR_11);
  if (VAR_9 < 0)
   goto pmcraid_isr_legacy;




  if (VAR_9 > 0) {
   VAR_11 = VAR_9;
   if (FUNC_4(VAR_10, VAR_12, VAR_11))
    goto pmcraid_isr_legacy;
  }

  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
   VAR_8->hrrq_vector[VAR_13].hrrq_id = VAR_13;
   VAR_8->hrrq_vector[VAR_13].drv_inst = VAR_8;
   VAR_8->hrrq_vector[VAR_13].vector = VAR_12[VAR_13].vector;
   VAR_9 = FUNC_6(VAR_8->hrrq_vector[VAR_13].vector,
     VAR_7, 0,
     VAR_3,
     &(VAR_8->hrrq_vector[VAR_13]));

   if (VAR_9) {
    int VAR_14;
    for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
     FUNC_0(VAR_12[VAR_14].vector,
       &(VAR_8->hrrq_vector[VAR_14]));
    FUNC_3(VAR_10);
    goto pmcraid_isr_legacy;
   }
  }

  VAR_8->num_hrrq = VAR_11;
  VAR_8->interrupt_mode = 1;
  FUNC_2(VAR_0,
     VAR_8->int_regs.host_ioa_interrupt_reg);
  FUNC_1(VAR_8->int_regs.host_ioa_interrupt_reg);
  goto pmcraid_isr_out;
 }

pmcraid_isr_legacy:



 VAR_8->hrrq_vector[0].hrrq_id = 0;
 VAR_8->hrrq_vector[0].drv_inst = VAR_8;
 VAR_8->hrrq_vector[0].vector = VAR_10->irq;
 VAR_8->num_hrrq = 1;
 VAR_9 = 0;

 VAR_9 = FUNC_6(VAR_10->irq, VAR_6, VAR_1,
    VAR_3, &VAR_8->hrrq_vector[0]);
pmcraid_isr_out:
 return VAR_9;
}
