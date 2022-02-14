
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long long VAR_0 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_1)
{
 acpi_handle VAR_2;
 acpi_status VAR_3;
 unsigned long long VAR_4;


 VAR_3 = FUNC_2(VAR_1, "_STA", &VAR_2);
 if (FUNC_0(VAR_3))
  return 1;

 VAR_3 = FUNC_1(VAR_1, "_STA", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_3))
  return 0;

 return ((VAR_4 & VAR_0) == VAR_0);
}
