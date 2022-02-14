
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef scalar_t__ acpi_owner_id ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_10 ;

acpi_status FUNC_8(acpi_owner_id * VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 acpi_status VAR_15;

 FUNC_3(VAR_10);



 if (*VAR_11) {
  FUNC_1((VAR_5, "Owner ID [%2.2X] already exists",
       *VAR_11));
  FUNC_7(VAR_4);
 }



 VAR_15 = FUNC_5(VAR_1);
 if (FUNC_2(VAR_15)) {
  FUNC_7(VAR_15);
 }






 for (VAR_12 = 0, VAR_13 = VAR_7;
      VAR_12 < (VAR_2 + 1); VAR_12++, VAR_13++) {
  if (VAR_13 >= VAR_2) {
   VAR_13 = 0;
  }

  for (VAR_14 = VAR_8; VAR_14 < 32; VAR_14++) {
   if (VAR_9[VAR_13] == VAR_3) {



    break;
   }

   if (!(VAR_9[VAR_13] & (1 << VAR_14))) {





    VAR_9[VAR_13] |= (1 << VAR_14);

    VAR_7 = (u8) VAR_13;
    VAR_8 = (u8) (VAR_14 + 1);







    *VAR_11 =
        (acpi_owner_id) ((VAR_14 + 1) + FUNC_4(VAR_13));

    FUNC_0((VAR_0,
        "Allocated OwnerId: %2.2X\n",
        (unsigned int)*VAR_11));
    goto exit;
   }
  }

  VAR_8 = 0;
 }
 VAR_15 = VAR_6;
 FUNC_1((VAR_5,
      "Could not allocate new OwnerId (255 max), AE_OWNER_ID_LIMIT"));

      exit:
 (void)FUNC_6(VAR_1);
 FUNC_7(VAR_15);
}
