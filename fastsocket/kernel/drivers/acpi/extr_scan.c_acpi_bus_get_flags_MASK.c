
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dynamic_status; int removable; int ejectable; int lockable; int power_manageable; int wake_capable; } ;
struct acpi_device {TYPE_1__ flags; int handle; } ;
typedef int acpi_status ;
typedef int * acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int **) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_1)
{
 acpi_status VAR_2 = VAR_0;
 acpi_handle VAR_3 = ((void*)0);



 VAR_2 = FUNC_2(VAR_1->handle, "_STA", &VAR_3);
 if (FUNC_1(VAR_2))
  VAR_1->flags.dynamic_status = 1;


 VAR_2 = FUNC_2(VAR_1->handle, "_RMV", &VAR_3);
 if (FUNC_1(VAR_2))
  VAR_1->flags.removable = 1;


 VAR_2 = FUNC_2(VAR_1->handle, "_EJD", &VAR_3);
 if (FUNC_1(VAR_2))
  VAR_1->flags.ejectable = 1;
 else {
  VAR_2 = FUNC_2(VAR_1->handle, "_EJ0", &VAR_3);
  if (FUNC_1(VAR_2))
   VAR_1->flags.ejectable = 1;
 }


 VAR_2 = FUNC_2(VAR_1->handle, "_LCK", &VAR_3);
 if (FUNC_1(VAR_2))
  VAR_1->flags.lockable = 1;


 VAR_2 = FUNC_2(VAR_1->handle, "_PS0", &VAR_3);
 if (FUNC_0(VAR_2))
  VAR_2 = FUNC_2(VAR_1->handle, "_PR0", &VAR_3);
 if (FUNC_1(VAR_2))
  VAR_1->flags.power_manageable = 1;


 VAR_2 = FUNC_2(VAR_1->handle, "_PRW", &VAR_3);
 if (FUNC_1(VAR_2))
  VAR_1->flags.wake_capable = 1;



 return 0;
}
