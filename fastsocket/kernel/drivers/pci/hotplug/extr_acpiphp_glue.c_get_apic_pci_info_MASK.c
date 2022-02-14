
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ class; } ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static struct pci_dev * FUNC_2(acpi_handle VAR_2)
{
 struct pci_dev *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return ((void*)0);

 if ((VAR_3->class != VAR_0) &&
     (VAR_3->class != VAR_1))
 {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
