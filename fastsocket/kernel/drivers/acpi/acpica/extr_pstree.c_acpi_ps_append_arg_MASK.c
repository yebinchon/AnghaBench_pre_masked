
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {union acpi_parse_object* arg; } ;
struct TYPE_4__ {int arg_list_length; union acpi_parse_object* next; union acpi_parse_object* parent; TYPE_1__ value; int aml_opcode; } ;
union acpi_parse_object {TYPE_2__ common; } ;
struct acpi_opcode_info {scalar_t__ class; int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct acpi_opcode_info* FUNC_2 (int ) ;

void
FUNC_3(union acpi_parse_object *VAR_3, union acpi_parse_object *VAR_4)
{
 union acpi_parse_object *VAR_5;
 const struct acpi_opcode_info *VAR_6;

 FUNC_1();

 if (!VAR_3) {
  return;
 }



 VAR_6 = FUNC_2(VAR_3->common.aml_opcode);
 if (VAR_6->class == VAR_1) {



  FUNC_0((VAR_0, "Invalid AML Opcode: 0x%2.2X",
       VAR_3->common.aml_opcode));
  return;
 }



 if (!(VAR_6->flags & VAR_2)) {



  return;
 }



 if (VAR_3->common.value.arg) {



  VAR_5 = VAR_3->common.value.arg;
  while (VAR_5->common.next) {
   VAR_5 = VAR_5->common.next;
  }
  VAR_5->common.next = VAR_4;
 } else {


  VAR_3->common.value.arg = VAR_4;
 }



 while (VAR_4) {
  VAR_4->common.parent = VAR_3;
  VAR_4 = VAR_4->common.next;

  VAR_3->common.arg_list_length++;
 }
}
