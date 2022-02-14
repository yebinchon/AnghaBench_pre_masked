
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_pci_chip {int num_slots; TYPE_2__* pdev; TYPE_1__** slots; } ;
struct TYPE_4__ {scalar_t__ device; int dev; } ;
struct TYPE_3__ {int host; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct sdhci_pci_chip*,int) ;

__attribute__((used)) static int FUNC_3(struct sdhci_pci_chip *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1->pdev->device == VAR_0) {
  for (VAR_3 = 0;VAR_3 < VAR_1->num_slots;VAR_3++)
   FUNC_1(VAR_1->slots[VAR_3]->host, 1);
 }

 VAR_2 = FUNC_2(VAR_1, 1);
 if (VAR_2) {
  FUNC_0(&VAR_1->pdev->dev, "Failure enabling card power\n");
  return VAR_2;
 }

 return 0;
}
