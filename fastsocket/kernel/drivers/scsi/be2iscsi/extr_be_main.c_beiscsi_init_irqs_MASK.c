
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {struct beiscsi_hba* be_eq; } ;
struct beiscsi_hba {int num_cpus; char** msi_name; TYPE_2__* msix_entries; TYPE_1__* shost; scalar_t__ msix_enabled; struct hwi_controller* phwi_ctrlr; struct pci_dev* pcidev; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,...) ;
 int FUNC_1 (int,struct beiscsi_hba*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int ,int ,char*,struct beiscsi_hba*) ;
 int FUNC_5 (char*,char*,int,...) ;

__attribute__((used)) static int FUNC_6(struct beiscsi_hba *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_9->pcidev;
 struct hwi_controller *VAR_11;
 struct hwi_context_memory *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_11 = VAR_9->phwi_ctrlr;
 VAR_12 = VAR_11->phwi_ctxt;

 if (VAR_9->msix_enabled) {
  for (VAR_15 = 0; VAR_15 < VAR_9->num_cpus; VAR_15++) {
   VAR_9->msi_name[VAR_15] = FUNC_3(VAR_1, VAR_3);
   if (!VAR_9->msi_name[VAR_15]) {
    VAR_13 = -VAR_2;
    goto free_msix_irqs;
   }

   FUNC_5(VAR_9->msi_name[VAR_15], "beiscsi_%02x_%02x",
    VAR_9->shost->host_no, VAR_15);
   VAR_14 = VAR_9->msix_entries[VAR_15].vector;
   VAR_13 = FUNC_4(VAR_14, VAR_8, 0,
       VAR_9->msi_name[VAR_15],
       &VAR_12->be_eq[VAR_15]);
   if (VAR_13) {
    FUNC_0(VAR_9, VAR_5, VAR_0,
         "BM_%d : beiscsi_init_irqs-Failed to"
         "register msix for i = %d\n",
         VAR_15);
    FUNC_2(VAR_9->msi_name[VAR_15]);
    goto free_msix_irqs;
   }
  }
  VAR_9->msi_name[VAR_15] = FUNC_3(VAR_1, VAR_3);
  if (!VAR_9->msi_name[VAR_15]) {
   VAR_13 = -VAR_2;
   goto free_msix_irqs;
  }
  FUNC_5(VAR_9->msi_name[VAR_15], "beiscsi_mcc_%02x",
   VAR_9->shost->host_no);
  VAR_14 = VAR_9->msix_entries[VAR_15].vector;
  VAR_13 = FUNC_4(VAR_14, VAR_7, 0, VAR_9->msi_name[VAR_15],
      &VAR_12->be_eq[VAR_15]);
  if (VAR_13) {
   FUNC_0(VAR_9, VAR_5, VAR_0 ,
        "BM_%d : beiscsi_init_irqs-"
        "Failed to register beiscsi_msix_mcc\n");
   FUNC_2(VAR_9->msi_name[VAR_15]);
   goto free_msix_irqs;
  }

 } else {
  VAR_13 = FUNC_4(VAR_10->irq, VAR_6, VAR_4,
      "beiscsi", VAR_9);
  if (VAR_13) {
   FUNC_0(VAR_9, VAR_5, VAR_0,
        "BM_%d : beiscsi_init_irqs-"
        "Failed to register irq\\n");
   return VAR_13;
  }
 }
 return 0;
free_msix_irqs:
 for (VAR_16 = VAR_15 - 1; VAR_16 >= 0; VAR_16--) {
  FUNC_2(VAR_9->msi_name[VAR_16]);
  VAR_14 = VAR_9->msix_entries[VAR_16].vector;
  FUNC_1(VAR_14, &VAR_12->be_eq[VAR_16]);
 }
 return VAR_13;
}
