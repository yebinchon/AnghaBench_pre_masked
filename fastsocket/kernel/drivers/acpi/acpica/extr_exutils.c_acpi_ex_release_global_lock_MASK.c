
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_4(u32 VAR_5)
{
 acpi_status VAR_6;

 FUNC_2(VAR_3);



 if (!(VAR_5 & VAR_1)) {
  VAR_4;
 }



 VAR_6 = FUNC_3(VAR_2);
 if (FUNC_1(VAR_6)) {



  FUNC_0((VAR_0, VAR_6,
    "Could not release Global Lock"));
 }

 VAR_4;
}
