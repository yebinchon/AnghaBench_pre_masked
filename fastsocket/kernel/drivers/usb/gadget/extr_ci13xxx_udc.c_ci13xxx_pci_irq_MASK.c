
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 if (VAR_1 == 0) {
  FUNC_0(&((struct pci_dev *)VAR_2)->dev, "Invalid IRQ0 usage!");
  return VAR_0;
 }
 return FUNC_1();
}
