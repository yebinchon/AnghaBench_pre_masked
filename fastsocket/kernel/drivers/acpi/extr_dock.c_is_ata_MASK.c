
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_2(acpi_handle VAR_0)
{
 acpi_handle VAR_1;

 if ((FUNC_0(FUNC_1(VAR_0, "_GTF", &VAR_1))) ||
    (FUNC_0(FUNC_1(VAR_0, "_GTM", &VAR_1))) ||
    (FUNC_0(FUNC_1(VAR_0, "_STM", &VAR_1))) ||
    (FUNC_0(FUNC_1(VAR_0, "_SDD", &VAR_1))))
  return 1;

 return 0;
}
