
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ata_eh_info {int dummy; } ;
struct TYPE_2__ {struct ata_eh_info eh_info; } ;
struct ata_port {int lock; int acpi_handle; TYPE_1__ link; } ;
struct ata_device {int acpi_handle; } ;
typedef int acpi_handle ;





 int FUNC_0 (struct ata_port*,struct ata_device*) ;
 int FUNC_1 (struct ata_eh_info*) ;
 int FUNC_2 (struct ata_eh_info*,char*) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (struct ata_port*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ata_port *VAR_0, struct ata_device *VAR_1,
        u32 VAR_2)
{
 struct ata_eh_info *VAR_3 = &VAR_0->link.eh_info;
 int VAR_4 = 0;
 unsigned long VAR_5;
 acpi_handle VAR_6;

 if (VAR_1)
  VAR_6 = VAR_1->acpi_handle;
 else
  VAR_6 = VAR_0->acpi_handle;

 FUNC_5(VAR_0->lock, VAR_5);





 switch (VAR_2) {
 case 130:
 case 129:
  FUNC_2(VAR_3, "ACPI event");

  FUNC_1(VAR_3);
  FUNC_3(VAR_0);
  break;
 case 128:
  FUNC_2(VAR_3, "ACPI event");

  FUNC_0(VAR_0, VAR_1);
  VAR_4 = 1;
  break;
 }

 FUNC_6(VAR_0->lock, VAR_5);

 if (VAR_4)
  FUNC_4(VAR_0);
}
