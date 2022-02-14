
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union acpi_object {int dummy; } acpi_object ;
struct acpi_device_id {char* member_0; int member_1; } ;
struct TYPE_6__ {scalar_t__ wake_capable; } ;
struct TYPE_4__ {int valid; int run_wake; } ;
struct TYPE_5__ {TYPE_1__ flags; scalar_t__ prepare_count; } ;
struct acpi_device {TYPE_3__ flags; TYPE_2__ wakeup; int handle; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct acpi_device*,union acpi_object*) ;
 int FUNC_4 (struct acpi_device*,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_6 (struct acpi_device*,struct acpi_device_id*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct acpi_device *VAR_3)
{
 acpi_status VAR_4 = 0;
 struct acpi_buffer VAR_5 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_6 = ((void*)0);
 int VAR_7;

 struct acpi_device_id VAR_8[] = {
  {"PNP0C0D", 0},
  {"PNP0C0C", 0},
  {"PNP0C0E", 0},
  {"", 0},
 };


 VAR_4 = FUNC_5(VAR_3->handle, "_PRW", ((void*)0), &VAR_5);
 if (FUNC_2(VAR_4)) {
  FUNC_1((VAR_2, VAR_4, "Evaluating _PRW"));
  goto end;
 }

 VAR_6 = (union acpi_object *)VAR_5.pointer;
 VAR_4 = FUNC_3(VAR_3, VAR_6);
 if (FUNC_2(VAR_4)) {
  FUNC_1((VAR_2, VAR_4, "Extracting _PRW package"));
  goto end;
 }

 FUNC_7(VAR_5.pointer);

 VAR_3->wakeup.flags.valid = 1;
 VAR_3->wakeup.prepare_count = 0;






 VAR_7 = FUNC_4(VAR_3, 0, 0, 0);
 if (VAR_7)
  FUNC_0((VAR_1,
    "error in _DSW or _PSW evaluation\n"));


 if (!FUNC_6(VAR_3, VAR_8))
  VAR_3->wakeup.flags.run_wake = 1;

end:
 if (FUNC_2(VAR_4))
  VAR_3->flags.wake_capable = 0;
 return 0;
}
