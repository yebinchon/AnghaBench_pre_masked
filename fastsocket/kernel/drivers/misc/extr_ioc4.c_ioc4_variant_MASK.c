
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_3__* bus; } ;
struct ioc4_driver_data {TYPE_2__* idd_pdev; } ;
struct TYPE_6__ {scalar_t__ number; } ;
struct TYPE_5__ {TYPE_1__* bus; } ;
struct TYPE_4__ {scalar_t__ number; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ,struct pci_dev*) ;

__attribute__((used)) static unsigned int
FUNC_3(struct ioc4_driver_data *VAR_7)
{
 struct pci_dev *VAR_8 = ((void*)0);
 int VAR_9 = 0;


 do {
  VAR_8 = FUNC_2(VAR_5,
          VAR_3, VAR_8);
  if (VAR_8 &&
      VAR_7->idd_pdev->bus->number == VAR_8->bus->number &&
      3 == FUNC_0(VAR_8->devfn))
   VAR_9 = 1;
 } while (VAR_8 && !VAR_9);
 if (((void*)0) != VAR_8) {
  FUNC_1(VAR_8);
  return VAR_1;
 }


 VAR_8 = ((void*)0);
 do {
  VAR_8 = FUNC_2(VAR_6,
          VAR_4, VAR_8);
  if (VAR_8 &&
      VAR_7->idd_pdev->bus->number == VAR_8->bus->number &&
      3 == FUNC_0(VAR_8->devfn))
   VAR_9 = 1;
 } while (VAR_8 && !VAR_9);
 if (((void*)0) != VAR_8) {
  FUNC_1(VAR_8);
  return VAR_0;
 }


 return VAR_2;
}
