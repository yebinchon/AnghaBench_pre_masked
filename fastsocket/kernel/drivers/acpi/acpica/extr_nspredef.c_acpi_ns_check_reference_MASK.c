
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ class; } ;
union acpi_operand_object {TYPE_1__ reference; } ;
struct acpi_predefined_data {int node_flags; int pathname; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (union acpi_operand_object*) ;

__attribute__((used)) static acpi_status
FUNC_2(struct acpi_predefined_data *VAR_4,
   union acpi_operand_object *VAR_5)
{






 if (VAR_5->reference.class == VAR_0) {
  return (VAR_3);
 }

 FUNC_0((VAR_2, VAR_4->pathname, VAR_4->node_flags,
         "Return type mismatch - unexpected reference object type [%s] %2.2X",
         FUNC_1(VAR_5),
         VAR_5->reference.class));

 return (VAR_1);
}
