
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pci_dev {int dummy; } ;


 struct resource* FUNC_0 (struct pci_dev*) ;
 size_t FUNC_1 (struct resource*) ;

size_t FUNC_2(struct pci_dev *VAR_0)
{
 struct resource *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? FUNC_1(VAR_1) : 0;
}
