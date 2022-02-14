
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,struct acpi_namespace_node*) ;
 int VAR_0 ;
 int FUNC_5 (struct acpi_namespace_node*,scalar_t__,char*) ;
 scalar_t__ FUNC_6 (struct acpi_namespace_node*) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;

char *FUNC_8(struct acpi_namespace_node *VAR_2)
{
 acpi_status VAR_3;
 char *VAR_4;
 acpi_size VAR_5;

 FUNC_4(VAR_1, VAR_2);



 VAR_5 = FUNC_6(VAR_2);
 if (!VAR_5) {
  FUNC_7(((void*)0));
 }



 VAR_4 = FUNC_0(VAR_5);
 if (!VAR_4) {
  FUNC_1((VAR_0, "Could not allocate %u bytes", (u32)VAR_5));
  FUNC_7(((void*)0));
 }



 VAR_3 = FUNC_5(VAR_2, VAR_5, VAR_4);
 if (FUNC_2(VAR_3)) {
  FUNC_3(VAR_4);
  FUNC_7(((void*)0));
 }

 FUNC_7(VAR_4);
}
