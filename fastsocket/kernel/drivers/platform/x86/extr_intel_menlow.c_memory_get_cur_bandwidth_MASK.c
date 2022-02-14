
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
 int FUNC_1 (int ,int ,struct acpi_object_list*,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct thermal_cooling_device *VAR_5,
        unsigned long *VAR_6)
{
 struct acpi_device *VAR_7 = VAR_5->devdata;
 acpi_handle VAR_8 = VAR_7->handle;
 unsigned long long VAR_9;
 struct acpi_object_list VAR_10;
 union acpi_object VAR_11;
 acpi_status VAR_12 = VAR_1;

 VAR_10.count = 1;
 VAR_10.pointer = &VAR_11;
 VAR_11.type = VAR_0;
 VAR_11.integer.value = VAR_3;
 VAR_12 = FUNC_1(VAR_8, VAR_4,
           &VAR_10, &VAR_9);
 if (FUNC_0(VAR_12))
  return -VAR_2;

 *VAR_6 = VAR_9;
 return 0;
}
