
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct apei_exec_context {scalar_t__ value; int ip; } ;
struct acpi_whea_header {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_whea_header*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(
 struct apei_exec_context *VAR_1,
 struct acpi_whea_header *VAR_2)
{
 int VAR_3;
 u64 VAR_4;

 VAR_3 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_3)
  return VAR_3;
 if (VAR_4 == VAR_1->value) {
  VAR_1->ip += 2;
  return VAR_0;
 }

 return 0;
}
