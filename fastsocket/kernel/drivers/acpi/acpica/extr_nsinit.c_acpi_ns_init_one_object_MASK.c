
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_init_walk_info {int package_init; int buffer_init; int field_init; int op_region_init; int package_count; int buffer_count; int field_count; int op_region_count; int object_count; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 union acpi_operand_object* FUNC_11 (struct acpi_namespace_node*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct acpi_namespace_node*) ;
 int FUNC_14 (int) ;
 int VAR_6 ;

__attribute__((used)) static acpi_status
FUNC_15(acpi_handle VAR_7,
   u32 VAR_8, void *VAR_9, void **VAR_10)
{
 acpi_object_type VAR_11;
 acpi_status VAR_12 = VAR_3;
 struct acpi_init_walk_info *VAR_13 =
     (struct acpi_init_walk_info *)VAR_9;
 struct acpi_namespace_node *VAR_14 =
     (struct acpi_namespace_node *)VAR_7;
 union acpi_operand_object *VAR_15;

 FUNC_3(VAR_6);

 VAR_13->object_count++;



 VAR_11 = FUNC_12(VAR_7);
 VAR_15 = FUNC_11(VAR_14);
 if (!VAR_15) {
  return (VAR_3);
 }



 switch (VAR_11) {
 case 128:
  VAR_13->op_region_count++;
  break;

 case 131:
  VAR_13->field_count++;
  break;

 case 130:
  VAR_13->field_count++;
  break;

 case 132:
  VAR_13->buffer_count++;
  break;

 case 129:
  VAR_13->package_count++;
  break;

 default:


  return (VAR_3);
 }



 if (VAR_15->common.flags & VAR_4) {
  return (VAR_3);
 }



 FUNC_9();





 switch (VAR_11) {
 case 128:

  VAR_13->op_region_init++;
  VAR_12 = FUNC_8(VAR_15);
  break;

 case 131:

  VAR_13->field_init++;
  VAR_12 = FUNC_6(VAR_15);
  break;

 case 130:

  VAR_13->field_init++;
  VAR_12 = FUNC_4(VAR_15);
  break;

 case 132:

  VAR_13->buffer_init++;
  VAR_12 = FUNC_5(VAR_15);
  break;

 case 129:

  VAR_13->package_init++;
  VAR_12 = FUNC_7(VAR_15);
  break;

 default:

  break;
 }

 if (FUNC_2(VAR_12)) {
  FUNC_1((VAR_2, VAR_12,
    "Could not execute arguments for [%4.4s] (%s)",
    FUNC_13(VAR_14),
    FUNC_14(VAR_11)));
 }





 if (!(VAR_5 & VAR_1)) {
  FUNC_0((VAR_0, "."));
 }





 FUNC_10();
 return (VAR_3);
}
