
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* ascii; int integer; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct acpi_namespace_node*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

char *FUNC_3(void *VAR_3)
{
 struct acpi_namespace_node *VAR_4 = (struct acpi_namespace_node *)VAR_3;



 if (!VAR_3) {
  return ("NULL");
 }



 if ((VAR_3 == VAR_1) || (VAR_3 == VAR_2)) {
  return ("\"\\\" ");
 }



 if (FUNC_0(VAR_4) != VAR_0) {
  return ("####");
 }



 if (!FUNC_2(VAR_4->name.integer)) {
  VAR_4->name.integer = FUNC_1(VAR_4->name.ascii);
 }



 return (VAR_4->name.ascii);
}
