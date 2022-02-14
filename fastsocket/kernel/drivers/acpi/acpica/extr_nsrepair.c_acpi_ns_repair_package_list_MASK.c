
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_1__ package; } ;
struct acpi_predefined_data {int node_flags; int pathname; int flags; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union acpi_operand_object* FUNC_1 (int) ;

acpi_status
FUNC_2(struct acpi_predefined_data *VAR_4,
       union acpi_operand_object **VAR_5)
{
 union acpi_operand_object *VAR_6;





 VAR_6 = FUNC_1(1);
 if (!VAR_6) {
  return (VAR_2);
 }

 VAR_6->package.elements[0] = *VAR_5;



 *VAR_5 = VAR_6;
 VAR_4->flags |= VAR_0;

 FUNC_0((VAR_1, VAR_4->pathname, VAR_4->node_flags,
         "Incorrectly formed Package, attempting repair"));

 return (VAR_3);
}
