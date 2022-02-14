
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static acpi_status
FUNC_1(acpi_handle VAR_2, u32 VAR_3, void *VAR_4, void **VAR_5)
{
 int *VAR_6 = (int *)VAR_4;

 if (FUNC_0(VAR_2)) {
  (*VAR_6)++;
  return VAR_0;
 } else {
  return VAR_1;
 }
}
