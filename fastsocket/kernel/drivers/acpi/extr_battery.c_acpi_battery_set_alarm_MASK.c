
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_battery {int alarm; int lock; TYPE_2__* device; int alarm_present; } ;
typedef int acpi_status ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct acpi_battery*) ;
 int FUNC_3 (int ,char*,struct acpi_object_list*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct acpi_battery *VAR_3)
{
 acpi_status VAR_4 = 0;
 union acpi_object VAR_5 = { .type = VAR_1 };
 struct acpi_object_list VAR_6 = { 1, &VAR_5 };

 if (!FUNC_2(VAR_3)|| !VAR_3->alarm_present)
  return -VAR_2;

 VAR_5 = VAR_3->alarm;

 FUNC_4(&VAR_3->lock);
 VAR_4 = FUNC_3(VAR_3->device->handle, "_BTP",
     &VAR_6, ((void*)0));
 FUNC_5(&VAR_3->lock);

 if (FUNC_1(VAR_4))
  return -VAR_2;

 FUNC_0((VAR_0, "Alarm set to %d\n", VAR_3->alarm));
 return 0;
}
