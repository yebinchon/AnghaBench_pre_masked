
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apei_exec_context {int value; } ;
struct acpi_whea_header {int value; } ;


 int FUNC_0 (struct apei_exec_context*,struct acpi_whea_header*) ;

int FUNC_1(struct apei_exec_context *VAR_0,
      struct acpi_whea_header *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_0->value = (VAR_0->value == VAR_1->value);

 return 0;
}
