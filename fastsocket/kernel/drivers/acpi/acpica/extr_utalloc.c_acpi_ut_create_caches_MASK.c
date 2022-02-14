
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef union acpi_generic_state {int dummy; } acpi_generic_state ;
struct acpi_parse_obj_named {int dummy; } ;
struct acpi_parse_obj_common {int dummy; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*,int,int ,int *) ;
 int FUNC_2 (char*,int,int *) ;

acpi_status FUNC_3(void)
{
 acpi_status VAR_13;



 VAR_13 =
     FUNC_1("Acpi-Namespace",
     sizeof(struct acpi_namespace_node),
     VAR_1,
     &VAR_7);
 if (FUNC_0(VAR_13)) {
  return (VAR_13);
 }

 VAR_13 =
     FUNC_1("Acpi-State", sizeof(union acpi_generic_state),
     VAR_4,
     &VAR_12);
 if (FUNC_0(VAR_13)) {
  return (VAR_13);
 }

 VAR_13 =
     FUNC_1("Acpi-Parse",
     sizeof(struct acpi_parse_obj_common),
     VAR_3,
     &VAR_10);
 if (FUNC_0(VAR_13)) {
  return (VAR_13);
 }

 VAR_13 =
     FUNC_1("Acpi-ParseExt",
     sizeof(struct acpi_parse_obj_named),
     VAR_0,
     &VAR_11);
 if (FUNC_0(VAR_13)) {
  return (VAR_13);
 }

 VAR_13 =
     FUNC_1("Acpi-Operand",
     sizeof(union acpi_operand_object),
     VAR_2,
     &VAR_9);
 if (FUNC_0(VAR_13)) {
  return (VAR_13);
 }
 return (VAR_5);
}
