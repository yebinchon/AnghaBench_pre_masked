
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int acpi_status ;
typedef scalar_t__ acpi_owner_id ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_7(acpi_owner_id * VAR_5)
{
 acpi_owner_id VAR_6 = *VAR_5;
 acpi_status VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_3(VAR_4, VAR_6);



 *VAR_5 = 0;



 if (VAR_6 == 0) {
  FUNC_1((VAR_1, "Invalid OwnerId: %2.2X", VAR_6));
  VAR_3;
 }



 VAR_7 = FUNC_5(VAR_0);
 if (FUNC_2(VAR_7)) {
  VAR_3;
 }



 VAR_6--;



 VAR_8 = FUNC_0(VAR_6);
 VAR_9 = 1 << FUNC_4(VAR_6);



 if (VAR_2[VAR_8] & VAR_9) {
  VAR_2[VAR_8] ^= VAR_9;
 } else {
  FUNC_1((VAR_1,
       "Release of non-allocated OwnerId: %2.2X",
       VAR_6 + 1));
 }

 (void)FUNC_6(VAR_0);
 VAR_3;
}
