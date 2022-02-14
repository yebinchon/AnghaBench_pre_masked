
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pci_chip {int quirks; TYPE_1__* pdev; } ;
struct pci_dev {scalar_t__ bus; int devfn; } ;
struct TYPE_2__ {scalar_t__ revision; scalar_t__ device; scalar_t__ bus; int dev; int devfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct sdhci_pci_chip*,int) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (int ,int ,struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct sdhci_pci_chip *VAR_9)
{
 int VAR_10;

 if (VAR_9->pdev->revision == 0) {
  VAR_9->quirks |= VAR_5 |
     VAR_6 |
     VAR_4 |
     VAR_8 |
     VAR_7;
 }
 if (VAR_9->pdev->device == VAR_2) {
  struct pci_dev *VAR_11;

  VAR_11 = ((void*)0);
  while ((VAR_11 = FUNC_5(VAR_3,
   VAR_1, VAR_11)) != ((void*)0)) {
   if ((FUNC_0(VAR_9->pdev->devfn) ==
    FUNC_0(VAR_11->devfn)) &&
    (VAR_9->pdev->bus == VAR_11->bus))
    break;
  }

  if (VAR_11) {
   FUNC_4(VAR_11);
   FUNC_2(&VAR_9->pdev->dev, "Refusing to bind to "
    "secondary interface.\n");
   return -VAR_0;
  }
 }





 VAR_10 = FUNC_3(VAR_9, 1);
 if (VAR_10) {
  FUNC_1(&VAR_9->pdev->dev, "Failure enabling card power\n");
  return VAR_10;
 }

 return 0;
}
