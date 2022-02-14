
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int (*) ()) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

acpi_status FUNC_8(void)
{
 acpi_status VAR_5 = VAR_4;

 FUNC_3(FUNC_8);



 if (!FUNC_6()) {
  FUNC_7(VAR_3);
 }



 if (FUNC_4() == VAR_1) {
  FUNC_0((VAR_0,
      "System is already in ACPI mode\n"));
 } else {


  VAR_5 = FUNC_5(VAR_1);
  if (FUNC_2(VAR_5)) {
   FUNC_1((VAR_2,
        "Could not transition to ACPI mode"));
   FUNC_7(VAR_5);
  }

  FUNC_0((VAR_0,
      "Transition to ACPI mode successful\n"));
 }

 FUNC_7(VAR_5);
}
