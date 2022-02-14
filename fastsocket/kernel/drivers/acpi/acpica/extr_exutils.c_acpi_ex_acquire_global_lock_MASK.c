
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
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_5(u32 VAR_6)
{
 acpi_status VAR_7;

 FUNC_2(VAR_4);



 if (!(VAR_6 & VAR_2)) {
  VAR_5;
 }



 VAR_7 = FUNC_3(VAR_0,
           VAR_3,
           FUNC_4());

 if (FUNC_1(VAR_7)) {
  FUNC_0((VAR_1, VAR_7,
    "Could not acquire Global Lock"));
 }

 VAR_5;
}
