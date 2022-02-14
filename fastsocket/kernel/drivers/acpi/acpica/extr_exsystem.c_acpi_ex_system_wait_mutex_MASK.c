
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef scalar_t__ acpi_status ;
typedef int acpi_mutex ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (scalar_t__) ;

acpi_status FUNC_8(acpi_mutex VAR_4, u16 VAR_5)
{
 acpi_status VAR_6;

 FUNC_1(VAR_3);

 VAR_6 = FUNC_6(VAR_4, VAR_1);
 if (FUNC_2(VAR_6)) {
  FUNC_7(VAR_6);
 }

 if (VAR_6 == VAR_2) {



  FUNC_4();

  VAR_6 = FUNC_6(VAR_4, VAR_5);

  FUNC_0((VAR_0,
      "*** Thread awake after blocking, %s\n",
      FUNC_5(VAR_6)));



  FUNC_3();
 }

 FUNC_7(VAR_6);
}
