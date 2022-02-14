
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

acpi_status FUNC_6(void)
{
 acpi_status VAR_2;

 FUNC_2(VAR_1);






 VAR_2 = FUNC_3();
 if (FUNC_1(VAR_2)) {
  FUNC_0((VAR_0, VAR_2,
    "Unable to initialize fixed events"));
  FUNC_5(VAR_2);
 }

 VAR_2 = FUNC_4();
 if (FUNC_1(VAR_2)) {
  FUNC_0((VAR_0, VAR_2,
    "Unable to initialize general purpose events"));
  FUNC_5(VAR_2);
 }

 FUNC_5(VAR_2);
}
