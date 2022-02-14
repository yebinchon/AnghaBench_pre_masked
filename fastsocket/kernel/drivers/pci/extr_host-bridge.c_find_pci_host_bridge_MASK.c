
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_host_bridge {int dummy; } ;
struct pci_dev {int dummy; } ;
struct pci_bus {int bridge; } ;


 struct pci_bus* FUNC_0 (struct pci_dev*) ;
 struct pci_host_bridge* FUNC_1 (int ) ;

__attribute__((used)) static struct pci_host_bridge *FUNC_2(struct pci_dev *VAR_0)
{
 struct pci_bus *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->bridge);
}
