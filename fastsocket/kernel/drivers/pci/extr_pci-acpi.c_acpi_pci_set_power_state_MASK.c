
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;
typedef int pci_power_t ;
typedef int acpi_handle ;






 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_2 (int ,int const) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ,int *,char*,int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_3, pci_power_t VAR_4)
{
 acpi_handle VAR_5 = FUNC_1(&VAR_3->dev);
 acpi_handle VAR_6;
 static const u8 VAR_7[] = {
  [132] = 136,
  [131] = 135,
  [130] = 134,
  [128] = 133,
  [129] = 133
 };
 int VAR_8 = -VAR_0;


 if (!VAR_5 || FUNC_0(FUNC_3(VAR_5, "_EJ0", &VAR_6)))
  return -VAR_1;

 switch (VAR_4) {
 case 132:
 case 131:
 case 130:
 case 128:
 case 129:
  VAR_8 = FUNC_2(VAR_5, VAR_7[VAR_4]);
 }

 if (!VAR_8)
  FUNC_4(VAR_2, &VAR_3->dev,
    "power state changed by ACPI to D%d\n", VAR_4);

 return VAR_8;
}
