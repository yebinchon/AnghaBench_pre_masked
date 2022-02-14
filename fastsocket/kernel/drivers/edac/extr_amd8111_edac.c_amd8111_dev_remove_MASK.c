
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {scalar_t__ device; } ;
struct amd8111_dev_info {TYPE_1__* dev; int (* exit ) (struct amd8111_dev_info*) ;TYPE_2__* edac_dev; scalar_t__ err_dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ device; } ;


 struct amd8111_dev_info* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct amd8111_dev_info*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{
 struct amd8111_dev_info *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->err_dev; VAR_2++)
  if (VAR_2->dev->device == VAR_1->device)
   break;

 if (!VAR_2->err_dev)
  return;

 if (VAR_2->edac_dev) {
  FUNC_0(VAR_2->edac_dev->dev);
  FUNC_1(VAR_2->edac_dev);
 }

 if (VAR_2->exit)
  VAR_2->exit(VAR_2);

 FUNC_2(VAR_2->dev);
}
