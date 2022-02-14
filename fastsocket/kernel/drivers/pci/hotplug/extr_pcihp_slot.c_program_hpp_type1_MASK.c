
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hpp_type1 {int dummy; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0, struct hpp_type1 *VAR_1)
{
 if (VAR_1)
  FUNC_0(&VAR_0->dev, "PCI-X settings not supported\n");
}
