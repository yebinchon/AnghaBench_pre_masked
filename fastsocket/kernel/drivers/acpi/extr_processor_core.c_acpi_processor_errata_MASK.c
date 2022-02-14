
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct acpi_processor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct acpi_processor *VAR_4)
{
 int VAR_5 = 0;
 struct pci_dev *VAR_6 = ((void*)0);


 if (!VAR_4)
  return -VAR_0;




 VAR_6 = FUNC_2(VAR_3,
        VAR_2, VAR_1,
        VAR_1, ((void*)0));
 if (VAR_6) {
  VAR_5 = FUNC_0(VAR_6);
  FUNC_1(VAR_6);
 }

 return VAR_5;
}
