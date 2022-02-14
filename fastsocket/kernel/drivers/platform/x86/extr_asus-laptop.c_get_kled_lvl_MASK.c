
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,struct acpi_object_list*,unsigned long long*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned long long VAR_2;
 struct acpi_object_list VAR_3;
 union acpi_object VAR_4;
 acpi_status VAR_5;

 VAR_3.count = 1;
 VAR_3.pointer = &VAR_4;
 VAR_4.type = VAR_0;
 VAR_4.integer.value = 2;

 VAR_5 = FUNC_1(VAR_1, ((void*)0), &VAR_3, &VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_2("Error reading kled level\n");
  return 0;
 }
 return VAR_2;
}
