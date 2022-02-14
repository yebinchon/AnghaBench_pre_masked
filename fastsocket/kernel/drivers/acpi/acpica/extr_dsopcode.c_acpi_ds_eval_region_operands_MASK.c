
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {union acpi_parse_object* arg; } ;
struct TYPE_6__ {int aml_opcode; union acpi_parse_object* next; TYPE_1__ value; struct acpi_namespace_node* node; } ;
union acpi_parse_object {TYPE_2__ common; } ;
struct TYPE_8__ {int flags; scalar_t__ length; scalar_t__ address; } ;
struct TYPE_7__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_4__ region; TYPE_3__ integer; } ;
typedef scalar_t__ u32 ;
struct acpi_walk_state {int num_operands; union acpi_operand_object** operands; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_physical_address ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,union acpi_parse_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct acpi_walk_state*,union acpi_parse_object*) ;
 int FUNC_5 (int ,int ,struct acpi_walk_state*) ;
 union acpi_operand_object* FUNC_6 (struct acpi_namespace_node*) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

acpi_status
FUNC_9(struct acpi_walk_state *VAR_5,
        union acpi_parse_object *VAR_6)
{
 acpi_status VAR_7;
 union acpi_operand_object *VAR_8;
 union acpi_operand_object *VAR_9;
 struct acpi_namespace_node *VAR_10;
 union acpi_parse_object *VAR_11;

 FUNC_3(VAR_4, VAR_6);





 VAR_10 = VAR_6->common.node;



 VAR_11 = VAR_6->common.value.arg;



 VAR_11 = VAR_11->common.next;



 VAR_7 = FUNC_4(VAR_5, VAR_11);
 if (FUNC_1(VAR_7)) {
  FUNC_8(VAR_7);
 }



 VAR_7 = FUNC_5(VAR_6->common.aml_opcode,
       VAR_1, VAR_5);
 if (FUNC_1(VAR_7)) {
  FUNC_8(VAR_7);
 }

 VAR_8 = FUNC_6(VAR_10);
 if (!VAR_8) {
  FUNC_8(VAR_2);
 }





 VAR_9 = VAR_5->operands[VAR_5->num_operands - 1];

 VAR_8->region.length = (u32) VAR_9->integer.value;
 FUNC_7(VAR_9);





 VAR_9 = VAR_5->operands[VAR_5->num_operands - 2];

 VAR_8->region.address = (acpi_physical_address)
     VAR_9->integer.value;
 FUNC_7(VAR_9);

 FUNC_0((VAR_0, "RgnObj %p Addr %8.8X%8.8X Len %X\n",
     VAR_8,
     FUNC_2(VAR_8->region.address),
     VAR_8->region.length));



 VAR_8->region.flags |= VAR_3;

 FUNC_8(VAR_7);
}
