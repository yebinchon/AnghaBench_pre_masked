
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {scalar_t__ bridge; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (scalar_t__) ;
 struct pci_bus* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct pci_bus *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->bridge)
  FUNC_2(VAR_1->bridge);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
