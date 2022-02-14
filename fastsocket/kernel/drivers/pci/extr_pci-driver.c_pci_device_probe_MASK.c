
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int dummy; } ;
struct pci_dev {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct pci_driver*,struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (struct device*) ;
 struct pci_driver* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device * VAR_0)
{
 int VAR_1 = 0;
 struct pci_driver *VAR_2;
 struct pci_dev *VAR_3;

 VAR_2 = FUNC_4(VAR_0->driver);
 VAR_3 = FUNC_3(VAR_0);
 FUNC_1(VAR_3);
 VAR_1 = FUNC_0(VAR_2, VAR_3);
 if (VAR_1)
  FUNC_2(VAR_3);

 return VAR_1;
}
