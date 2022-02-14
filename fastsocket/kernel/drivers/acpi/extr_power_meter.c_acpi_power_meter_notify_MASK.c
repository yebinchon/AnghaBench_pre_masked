
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct acpi_power_meter_resource {int lock; } ;
struct TYPE_3__ {int kobj; } ;
struct acpi_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int ) ;
 struct acpi_power_meter_resource* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct acpi_power_meter_resource*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct acpi_power_meter_resource*) ;
 int FUNC_9 (struct acpi_power_meter_resource*) ;
 int FUNC_10 (struct acpi_power_meter_resource*) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (struct acpi_power_meter_resource*) ;
 int FUNC_13 (struct acpi_power_meter_resource*) ;
 int FUNC_14 (struct acpi_power_meter_resource*) ;

__attribute__((used)) static void FUNC_15(struct acpi_device *VAR_5, u32 VAR_6)
{
 struct acpi_power_meter_resource *VAR_7;
 int VAR_8;

 if (!VAR_5 || !FUNC_2(VAR_5))
  return;

 VAR_7 = FUNC_2(VAR_5);

 FUNC_6(&VAR_7->lock);
 switch (VAR_6) {
 case 130:
  FUNC_5(VAR_7);
  VAR_8 = FUNC_8(VAR_7);
  if (VAR_8)
   break;

  FUNC_9(VAR_7);
  FUNC_10(VAR_7);
  break;
 case 128:
  FUNC_11(&VAR_5->dev.kobj, ((void*)0), VAR_2);
  FUNC_14(VAR_7);
  break;
 case 132:
  FUNC_11(&VAR_5->dev.kobj, ((void*)0), VAR_4);
  FUNC_13(VAR_7);
  break;
 case 129:
  FUNC_11(&VAR_5->dev.kobj, ((void*)0), VAR_3);
  FUNC_12(VAR_7);
  break;
 case 131:
  FUNC_11(&VAR_5->dev.kobj, ((void*)0), VAR_1);
  FUNC_3(&VAR_5->dev, "Capping in progress.\n");
  break;
 default:
  FUNC_0();
 }
 FUNC_7(&VAR_7->lock);

 FUNC_1(VAR_0,
     FUNC_4(&VAR_5->dev), VAR_6, 0);
}
