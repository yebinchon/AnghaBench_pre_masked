
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct myri10ge_priv {int num_slices; scalar_t__ msix_enabled; scalar_t__ msi_enabled; int * ss; TYPE_1__* msix_vectors; struct pci_dev* pdev; } ;
struct TYPE_2__ {int vector; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct myri10ge_priv *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 int VAR_2;

 if (VAR_0->msix_enabled) {
  for (VAR_2 = 0; VAR_2 < VAR_0->num_slices; VAR_2++)
   FUNC_0(VAR_0->msix_vectors[VAR_2].vector, &VAR_0->ss[VAR_2]);
 } else {
  FUNC_0(VAR_1->irq, &VAR_0->ss[0]);
 }
 if (VAR_0->msi_enabled)
  FUNC_1(VAR_1);
 if (VAR_0->msix_enabled)
  FUNC_2(VAR_1);
}
