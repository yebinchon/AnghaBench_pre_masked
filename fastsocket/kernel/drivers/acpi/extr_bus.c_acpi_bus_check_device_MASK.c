
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_device_status {scalar_t__ present; } ;
struct acpi_device {struct acpi_device_status status; TYPE_1__* parent; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_2__ {struct acpi_device_status status; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct acpi_device_status) ;
 scalar_t__ FUNC_3 (int ,struct acpi_device**) ;
 int FUNC_4 (struct acpi_device*) ;

__attribute__((used)) static void FUNC_5(acpi_handle VAR_1)
{
 struct acpi_device *VAR_2;
 acpi_status VAR_3;
 struct acpi_device_status VAR_4;

 if (FUNC_3(VAR_1, &VAR_2))
  return;
 if (!VAR_2)
  return;

 VAR_4 = VAR_2->status;





 if (VAR_2->parent && !VAR_2->parent->status.present) {
  VAR_2->status = VAR_2->parent->status;
  return;
 }

 VAR_3 = FUNC_4(VAR_2);
 if (FUNC_1(VAR_3))
  return;

 if (FUNC_2(VAR_4) == FUNC_2(VAR_2->status))
  return;




 if ((VAR_2->status.present) && !(VAR_4.present)) {
  FUNC_0((VAR_0, "Device insertion detected\n"));

 } else if (!(VAR_2->status.present) && (VAR_4.present)) {
  FUNC_0((VAR_0, "Device removal detected\n"));

 }
}
