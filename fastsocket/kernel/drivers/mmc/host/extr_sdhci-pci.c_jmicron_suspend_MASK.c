
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_pci_chip {int num_slots; TYPE_2__** slots; TYPE_1__* pdev; } ;
typedef int pm_message_t ;
struct TYPE_4__ {int host; } ;
struct TYPE_3__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sdhci_pci_chip *VAR_1, pm_message_t VAR_2)
{
 int VAR_3;

 if (VAR_1->pdev->device == VAR_0) {
  for (VAR_3 = 0;VAR_3 < VAR_1->num_slots;VAR_3++)
   FUNC_0(VAR_1->slots[VAR_3]->host, 0);
 }

 return 0;
}
