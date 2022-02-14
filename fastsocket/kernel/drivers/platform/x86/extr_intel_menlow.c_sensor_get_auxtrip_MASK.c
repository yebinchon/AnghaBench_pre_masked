
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(acpi_handle VAR_4, int VAR_5,
       unsigned long long *VAR_6)
{
 acpi_status VAR_7;

 if ((VAR_5 != 0 && VAR_5 != 1) || !VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4, VAR_5 ? VAR_3 : VAR_2,
           ((void*)0), VAR_6);
 if (FUNC_0(VAR_7))
  return -VAR_1;

 return 0;
}
