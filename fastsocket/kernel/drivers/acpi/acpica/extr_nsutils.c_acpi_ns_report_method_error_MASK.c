
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_namespace_node*,char const*,int ,struct acpi_namespace_node**) ;
 int FUNC_3 (struct acpi_namespace_node*,char const*) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(const char *VAR_1,
       u32 VAR_2,
       const char *VAR_3,
       struct acpi_namespace_node *VAR_4,
       const char *VAR_5, acpi_status VAR_6)
{
 acpi_status VAR_7;
 struct acpi_namespace_node *VAR_8 = VAR_4;

 FUNC_4("ACPI Error (%s-%04d): ", VAR_1, VAR_2);

 if (VAR_5) {
  VAR_7 =
      FUNC_2(VAR_4, VAR_5, VAR_0,
         &VAR_8);
  if (FUNC_0(VAR_7)) {
   FUNC_4("[Could not get node by pathname]");
  }
 }

 FUNC_3(VAR_8, VAR_3);
 FUNC_4(", %s\n", FUNC_1(VAR_6));
}
