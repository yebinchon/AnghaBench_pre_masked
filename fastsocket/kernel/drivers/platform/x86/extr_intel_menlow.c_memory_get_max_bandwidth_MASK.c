
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,struct acpi_object_list*,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct thermal_cooling_device *VAR_6,
        unsigned long *VAR_7)
{
 struct acpi_device *VAR_8 = VAR_6->devdata;
 acpi_handle VAR_9 = VAR_8->handle;
 unsigned long long VAR_10;
 struct acpi_object_list VAR_11;
 union acpi_object VAR_12;
 acpi_status VAR_13 = VAR_1;

 VAR_11.count = 1;
 VAR_11.pointer = &VAR_12;
 VAR_12.type = VAR_0;
 VAR_12.integer.value = VAR_4;
 VAR_13 = FUNC_1(VAR_9, VAR_5,
           &VAR_11, &VAR_10);
 if (FUNC_0(VAR_13))
  return -VAR_2;

 if (!VAR_10)
  return -VAR_3;

 *VAR_7 = VAR_10 - 1;
 return 0;
}
