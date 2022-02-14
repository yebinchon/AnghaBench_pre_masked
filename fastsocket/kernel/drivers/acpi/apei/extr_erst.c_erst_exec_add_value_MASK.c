
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct apei_exec_context {scalar_t__ value; } ;
struct acpi_whea_header {int dummy; } ;


 int FUNC_0 (struct acpi_whea_header*,int *) ;
 int FUNC_1 (struct acpi_whea_header*,int ) ;

__attribute__((used)) static int FUNC_2(struct apei_exec_context *VAR_0,
          struct acpi_whea_header *VAR_1)
{
 int VAR_2;
 u64 VAR_3;

 VAR_2 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_2)
  return VAR_2;
 VAR_3 += VAR_0->value;
 VAR_2 = FUNC_1(VAR_1, VAR_3);
 return VAR_2;
}
