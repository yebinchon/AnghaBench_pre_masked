
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct acpi_buffer {int member_0; char* member_1; } ;
typedef int acpi_method_name ;
struct TYPE_2__ {int dhandle; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct acpi_buffer*) ;
 int FUNC_2 (struct pci_dev*) ;
 TYPE_1__ VAR_2 ;
 struct pci_dev* FUNC_3 (int,struct pci_dev*) ;

__attribute__((used)) static bool FUNC_4(void)
{
 char VAR_3[255] = { 0 };
 struct acpi_buffer VAR_4 = {sizeof(VAR_3), VAR_3};
 struct pci_dev *VAR_5 = ((void*)0);
 bool VAR_6 = 0;
 int VAR_7 = 0;

 while ((VAR_5 = FUNC_3(VAR_1 << 8, VAR_5)) != ((void*)0)) {
  VAR_7++;
  VAR_6 |= FUNC_2(VAR_5);
 }

 if (VAR_7 == 2 && VAR_6) {
  FUNC_1(VAR_2.dhandle, VAR_0, &VAR_4);
  FUNC_0("VGA switcheroo: detected DSM switching method %s handle\n",
     VAR_3);
  return 1;
 }

 return 0;
}
