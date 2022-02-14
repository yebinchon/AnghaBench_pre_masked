
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_size ;
typedef int acpi_physical_address ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (int*)) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;

acpi_status FUNC_8(acpi_size *VAR_9)
{
 u8 *VAR_10;
 u8 *VAR_11;
 u32 VAR_12;

 FUNC_1(FUNC_8);



 VAR_10 = FUNC_4((acpi_physical_address)
           VAR_1,
           VAR_0);
 if (!VAR_10) {
  FUNC_0((VAR_5,
       "Could not map memory at %8.8X for length %X",
       VAR_1, VAR_0));

  FUNC_7(VAR_7);
 }

 FUNC_2(&VAR_12, VAR_10);



 VAR_12 <<= 4;
 FUNC_5(VAR_10, VAR_0);



 if (VAR_12 > 0x400) {




  VAR_10 = FUNC_4((acpi_physical_address)
            VAR_12,
            VAR_2);
  if (!VAR_10) {
   FUNC_0((VAR_5,
        "Could not map memory at %8.8X for length %X",
        VAR_12, VAR_2));

   FUNC_7(VAR_7);
  }

  VAR_11 =
      FUNC_6(VAR_10,
       VAR_2);
  FUNC_5(VAR_10, VAR_2);

  if (VAR_11) {



   VAR_12 +=
       (u32) FUNC_3(VAR_11, VAR_10);

   *VAR_9 = VAR_12;
   FUNC_7(VAR_8);
  }
 }




 VAR_10 = FUNC_4((acpi_physical_address)
           VAR_3,
           VAR_4);

 if (!VAR_10) {
  FUNC_0((VAR_5,
       "Could not map memory at %8.8X for length %X",
       VAR_3,
       VAR_4));

  FUNC_7(VAR_7);
 }

 VAR_11 =
     FUNC_6(VAR_10, VAR_4);
 FUNC_5(VAR_10, VAR_4);

 if (VAR_11) {



  VAR_12 = (u32)
      (VAR_3 +
       FUNC_3(VAR_11, VAR_10));

  *VAR_9 = VAR_12;
  FUNC_7(VAR_8);
 }



 FUNC_0((VAR_5, "A valid RSDP was not found"));
 FUNC_7(VAR_6);
}
