
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,struct acpi_namespace_node*) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(u32 VAR_4, struct acpi_namespace_node *VAR_5)
{
 acpi_status VAR_6;

 FUNC_2(VAR_3);
 FUNC_0((VAR_0, "**** Start pass 1\n"));
 VAR_6 = FUNC_3(VAR_1,
         VAR_4, VAR_5);
 if (FUNC_1(VAR_6)) {
  FUNC_4(VAR_6);
 }
 FUNC_0((VAR_0, "**** Start pass 2\n"));
 VAR_6 = FUNC_3(VAR_2,
         VAR_4, VAR_5);
 if (FUNC_1(VAR_6)) {
  FUNC_4(VAR_6);
 }

 FUNC_4(VAR_6);
}
