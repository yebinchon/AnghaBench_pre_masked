
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
struct acpi_buffer {int length; union acpi_object* pointer; } ;
typedef int out_obj ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int *,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_1(acpi_handle VAR_2, const char *VAR_3, int *VAR_4)
{
 struct acpi_buffer VAR_5;
 union acpi_object VAR_6;
 acpi_status VAR_7;

 VAR_5.length = sizeof(VAR_6);
 VAR_5.pointer = &VAR_6;

 VAR_7 = FUNC_0(VAR_2, (char *)VAR_3, ((void*)0), &VAR_5);
 *VAR_4 = VAR_6.integer.value;
 return (VAR_7 == VAR_1) && (VAR_6.type == VAR_0);
}
