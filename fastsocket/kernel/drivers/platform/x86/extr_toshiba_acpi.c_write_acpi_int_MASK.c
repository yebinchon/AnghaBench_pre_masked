
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct acpi_object_list {union acpi_object* pointer; int count; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (union acpi_object*) ;
 scalar_t__ FUNC_1 (int *,char*,struct acpi_object_list*,int *) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, int VAR_3)
{
 struct acpi_object_list VAR_4;
 union acpi_object VAR_5[1];
 acpi_status VAR_6;

 VAR_4.count = FUNC_0(VAR_5);
 VAR_4.pointer = VAR_5;
 VAR_5[0].type = VAR_0;
 VAR_5[0].integer.value = VAR_3;

 VAR_6 = FUNC_1(((void*)0), (char *)VAR_2, &VAR_4, ((void*)0));
 return (VAR_6 == VAR_1);
}
