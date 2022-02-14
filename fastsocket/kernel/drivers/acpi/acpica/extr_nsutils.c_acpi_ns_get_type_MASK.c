
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {scalar_t__ type; } ;
typedef int acpi_object_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

acpi_object_type FUNC_3(struct acpi_namespace_node * VAR_3)
{
 FUNC_0(VAR_2);

 if (!VAR_3) {
  FUNC_1((VAR_1, "Null Node parameter"));
  FUNC_2(VAR_0);
 }

 FUNC_2((acpi_object_type) VAR_3->type);
}
