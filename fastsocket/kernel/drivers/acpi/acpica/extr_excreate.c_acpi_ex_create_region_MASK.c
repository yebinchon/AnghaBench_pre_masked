
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {struct acpi_namespace_node* node; scalar_t__ length; scalar_t__ address; scalar_t__ space_id; } ;
struct TYPE_9__ {scalar_t__* aml_start; int aml_length; } ;
struct TYPE_8__ {union acpi_operand_object* next_object; } ;
union acpi_operand_object {TYPE_5__ region; TYPE_4__ extra; TYPE_3__ common; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct acpi_walk_state {TYPE_2__* op; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
struct TYPE_6__ {struct acpi_namespace_node* node; } ;
struct TYPE_7__ {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 scalar_t__ FUNC_4 (struct acpi_namespace_node*) ;
 union acpi_operand_object* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int VAR_8 ;
 int FUNC_8 (int ) ;

acpi_status
FUNC_9(u8 * VAR_9,
        u32 VAR_10,
        u8 VAR_11, struct acpi_walk_state *VAR_12)
{
 acpi_status VAR_13;
 union acpi_operand_object *VAR_14;
 struct acpi_namespace_node *VAR_15;
 union acpi_operand_object *VAR_16;

 FUNC_2(VAR_8);



 VAR_15 = VAR_12->op->common.node;





 if (FUNC_4(VAR_15)) {
  FUNC_8(VAR_7);
 }





 if ((VAR_11 >= VAR_1) &&
     (VAR_11 < VAR_3)) {
  FUNC_1((VAR_5, "Invalid AddressSpace type %X",
       VAR_11));
  FUNC_8(VAR_4);
 }

 FUNC_0((VAR_0, "Region Type - %s (%X)\n",
     FUNC_6(VAR_11), VAR_11));



 VAR_14 = FUNC_5(VAR_2);
 if (!VAR_14) {
  VAR_13 = VAR_6;
  goto cleanup;
 }





 VAR_16 = VAR_14->common.next_object;
 VAR_16->extra.aml_start = VAR_9;
 VAR_16->extra.aml_length = VAR_10;



 VAR_14->region.space_id = VAR_11;
 VAR_14->region.address = 0;
 VAR_14->region.length = 0;
 VAR_14->region.node = VAR_15;



 VAR_13 = FUNC_3(VAR_15, VAR_14, VAR_2);

      cleanup:



 FUNC_7(VAR_14);
 FUNC_8(VAR_13);
}
