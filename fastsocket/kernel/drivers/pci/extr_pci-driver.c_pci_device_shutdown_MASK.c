
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int (* shutdown ) (struct pci_dev*) ;} ;
struct pci_dev {struct pci_driver* driver; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_3(VAR_0);
 struct pci_driver *VAR_2 = VAR_1->driver;

 if (VAR_2 && VAR_2->shutdown)
  VAR_2->shutdown(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
