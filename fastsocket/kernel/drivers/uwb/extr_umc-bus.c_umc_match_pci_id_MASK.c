
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct umc_driver {struct pci_device_id* match_data; } ;
struct TYPE_3__ {TYPE_2__* parent; } ;
struct umc_dev {TYPE_1__ dev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int * bus; } ;


 int VAR_0 ;
 int * FUNC_0 (struct pci_device_id const*,struct pci_dev*) ;
 struct pci_dev* FUNC_1 (TYPE_2__*) ;

int FUNC_2(struct umc_driver *VAR_1, struct umc_dev *VAR_2)
{
 const struct pci_device_id *VAR_3 = VAR_1->match_data;
 struct pci_dev *VAR_4;

 if (VAR_2->dev.parent->bus != &VAR_0)
  return 0;

 VAR_4 = FUNC_1(VAR_2->dev.parent);
 return FUNC_0(VAR_3, VAR_4) != ((void*)0);
}
