
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_memory_device {TYPE_2__* device; } ;
typedef int acpi_status ;
struct TYPE_4__ {int handle; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,char*,struct acpi_object_list*,int *) ;

__attribute__((used)) static int FUNC_4(struct acpi_memory_device *VAR_5)
{
 acpi_status VAR_6;
 struct acpi_object_list VAR_7;
 union acpi_object VAR_8;
 unsigned long long VAR_9;



 VAR_7.count = 1;
 VAR_7.pointer = &VAR_8;
 VAR_8.type = VAR_1;
 VAR_8.integer.value = 1;
 VAR_6 = FUNC_3(VAR_5->device->handle,
          "_EJ0", &VAR_7, ((void*)0));

 if (FUNC_1(VAR_6)) {
  FUNC_0((VAR_2, VAR_6, "_EJ0 failed"));
  return -VAR_4;
 }


 VAR_6 = FUNC_2(VAR_5->device->handle, "_STA",
           ((void*)0), &VAR_9);
 if (FUNC_1(VAR_6))
  return -VAR_4;


 if (VAR_9 & VAR_0)
  return -VAR_3;

 return 0;
}
