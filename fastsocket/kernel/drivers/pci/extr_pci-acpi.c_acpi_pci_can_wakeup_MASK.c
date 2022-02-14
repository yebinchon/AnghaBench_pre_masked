
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_0)
{
 acpi_handle VAR_1 = FUNC_0(&VAR_0->dev);

 return VAR_1 ? FUNC_1(VAR_1) : 0;
}
