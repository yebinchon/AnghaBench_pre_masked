
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; int irq; } ;
struct net_device {char* name; } ;
struct myri10ge_slice_state {char* irq_desc; } ;
struct myri10ge_priv {int msi_enabled; int msix_enabled; int num_slices; struct myri10ge_slice_state* ss; struct net_device* dev; TYPE_1__* msix_vectors; struct pci_dev* pdev; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,struct myri10ge_slice_state*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,TYPE_1__*,int) ;
 int FUNC_6 (int ,int ,int ,char*,struct myri10ge_slice_state*) ;
 int FUNC_7 (char*,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct myri10ge_priv *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 struct myri10ge_slice_state *VAR_5;
 struct net_device *VAR_6 = VAR_3->dev;
 int VAR_7;
 int VAR_8;

 VAR_3->msi_enabled = 0;
 VAR_3->msix_enabled = 0;
 VAR_8 = 0;
 if (VAR_2) {
  if (VAR_3->num_slices > 1) {
   VAR_8 =
       FUNC_5(VAR_4, VAR_3->msix_vectors,
         VAR_3->num_slices);
   if (VAR_8 == 0) {
    VAR_3->msix_enabled = 1;
   } else {
    FUNC_0(&VAR_4->dev,
     "Error %d setting up MSI-X\n", VAR_8);
    return VAR_8;
   }
  }
  if (VAR_3->msix_enabled == 0) {
   VAR_8 = FUNC_4(VAR_4);
   if (VAR_8 != 0) {
    FUNC_0(&VAR_4->dev,
     "Error %d setting up MSI; falling back to xPIC\n",
     VAR_8);
   } else {
    VAR_3->msi_enabled = 1;
   }
  }
 }
 if (VAR_3->msix_enabled) {
  for (VAR_7 = 0; VAR_7 < VAR_3->num_slices; VAR_7++) {
   VAR_5 = &VAR_3->ss[VAR_7];
   FUNC_7(VAR_5->irq_desc, sizeof(VAR_5->irq_desc),
     "%s:slice-%d", VAR_6->name, VAR_7);
   VAR_8 = FUNC_6(VAR_3->msix_vectors[VAR_7].vector,
          VAR_1, 0, VAR_5->irq_desc,
          VAR_5);
   if (VAR_8 != 0) {
    FUNC_0(&VAR_4->dev,
     "slice %d failed to allocate IRQ\n", VAR_7);
    VAR_7--;
    while (VAR_7 >= 0) {
     FUNC_1(VAR_3->msix_vectors[VAR_7].vector,
       &VAR_3->ss[VAR_7]);
     VAR_7--;
    }
    FUNC_3(VAR_4);
    return VAR_8;
   }
  }
 } else {
  VAR_8 = FUNC_6(VAR_4->irq, VAR_1, VAR_0,
         VAR_3->dev->name, &VAR_3->ss[0]);
  if (VAR_8 != 0) {
   FUNC_0(&VAR_4->dev, "failed to allocate IRQ\n");
   if (VAR_3->msi_enabled)
    FUNC_2(VAR_4);
  }
 }
 return VAR_8;
}
