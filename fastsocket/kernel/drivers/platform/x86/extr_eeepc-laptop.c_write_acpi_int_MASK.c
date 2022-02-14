
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {int dummy; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,struct acpi_object_list*,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_1(acpi_handle VAR_2, const char *VAR_3, int VAR_4,
     struct acpi_buffer *VAR_5)
{
 struct acpi_object_list VAR_6;
 union acpi_object VAR_7;
 acpi_status VAR_8;

 VAR_6.count = 1;
 VAR_6.pointer = &VAR_7;
 VAR_7.type = VAR_0;
 VAR_7.integer.value = VAR_4;

 VAR_8 = FUNC_0(VAR_2, (char *)VAR_3, &VAR_6, VAR_5);
 return (VAR_8 == VAR_1 ? 0 : -1);
}
