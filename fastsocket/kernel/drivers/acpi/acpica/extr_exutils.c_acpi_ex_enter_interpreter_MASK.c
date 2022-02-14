
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(void)
{
 acpi_status VAR_4;

 FUNC_2(VAR_2);

 VAR_4 = FUNC_3(VAR_0);
 if (FUNC_1(VAR_4)) {
  FUNC_0((VAR_1,
       "Could not acquire AML Interpreter mutex"));
 }

 VAR_3;
}
