
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_4(acpi_handle VAR_0)
{
 acpi_status VAR_1;
 acpi_handle VAR_2;
 unsigned long long VAR_3;
 VAR_1 = FUNC_3(VAR_0, "_ADR", &VAR_2);
 if (FUNC_0(VAR_1))
  return 0;
 VAR_1 = FUNC_3(VAR_0, "_EJ0", &VAR_2);
 if (FUNC_1(VAR_1))
  return 1;
 VAR_1 = FUNC_2(VAR_0, "_RMV", ((void*)0), &VAR_3);
 if (FUNC_1(VAR_1) && VAR_3)
  return 1;
 return 0;
}
