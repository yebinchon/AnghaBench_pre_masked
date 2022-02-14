
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__) ;

acpi_status FUNC_4(void)
{
 acpi_status VAR_9;

 FUNC_1(VAR_8);



 VAR_9 = FUNC_2(VAR_0,
        VAR_6,
        ((void*)0));







 if (VAR_9 == VAR_2) {
  FUNC_0((VAR_1,
       "No response from Global Lock hardware, disabling lock"));

  VAR_7 = VAR_4;
  FUNC_3(VAR_3);
 }

 VAR_7 = VAR_5;
 FUNC_3(VAR_9);
}
