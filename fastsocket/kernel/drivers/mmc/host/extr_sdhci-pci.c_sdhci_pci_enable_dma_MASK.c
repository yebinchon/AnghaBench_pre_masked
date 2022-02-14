
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_1__* chip; } ;
struct sdhci_host {int flags; } ;
struct pci_dev {int class; int dev; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 struct sdhci_pci_slot* FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_5(struct sdhci_host *VAR_3)
{
 struct sdhci_pci_slot *VAR_4;
 struct pci_dev *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_3);
 VAR_5 = VAR_4->chip->pdev;

 if (((VAR_5->class & 0xFFFF00) == (VAR_0 << 8)) &&
  ((VAR_5->class & 0x0000FF) != VAR_1) &&
  (VAR_3->flags & VAR_2)) {
  FUNC_1(&VAR_5->dev, "Will use DMA mode even though HW "
   "doesn't fully claim to support it.\n");
 }

 VAR_6 = FUNC_2(VAR_5, FUNC_0(32));
 if (VAR_6)
  return VAR_6;

 FUNC_3(VAR_5);

 return 0;
}
