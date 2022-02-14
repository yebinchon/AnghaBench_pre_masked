
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; void* pointer; } ;
struct TYPE_4__ {int value; } ;
union acpi_object {TYPE_1__ buffer; TYPE_2__ integer; int type; } ;
typedef int uint32_t ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,int *) ;

__attribute__((used)) static void FUNC_1(acpi_handle VAR_3, int VAR_4,
 uint32_t VAR_5)
{
 union acpi_object VAR_6[3] = {
  {.type = VAR_2,},
  {.type = VAR_2,},
  {.type = VAR_1,},
 };
 struct acpi_object_list VAR_7 = {3, VAR_6};

 VAR_6[0].integer.value = VAR_0;
 VAR_6[1].integer.value = VAR_4;
 VAR_6[2].buffer.length = 4;
 VAR_6[2].buffer.pointer = (void *)&VAR_5;
 FUNC_0(VAR_3, "_OST", &VAR_7, ((void*)0));
}
