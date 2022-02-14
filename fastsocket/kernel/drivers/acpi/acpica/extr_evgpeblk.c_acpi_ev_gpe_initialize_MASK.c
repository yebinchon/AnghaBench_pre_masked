
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef int acpi_status ;
struct TYPE_4__ {scalar_t__ address; } ;
struct TYPE_3__ {int gpe0_block_length; int gpe1_block_length; int gpe1_base; int sci_interrupt; TYPE_2__ xgpe1_block; TYPE_2__ xgpe0_block; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,TYPE_2__*,int,int,int ,int *) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int FUNC_8 (int ) ;

acpi_status FUNC_9(void)
{
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 acpi_status VAR_14;

 FUNC_4(VAR_10);

 VAR_14 = FUNC_6(VAR_3);
 if (FUNC_3(VAR_14)) {
  FUNC_8(VAR_14);
 }
 if (VAR_7.gpe0_block_length &&
     VAR_7.xgpe0_block.address) {



  VAR_11 = (u16) (VAR_7.gpe0_block_length / 2);

  VAR_13 =
      (VAR_11 * VAR_2) - 1;



  VAR_14 = FUNC_5(VAR_8,
        &VAR_7.xgpe0_block,
        VAR_11, 0,
        VAR_7.sci_interrupt,
        &VAR_9[0]);

  if (FUNC_3(VAR_14)) {
   FUNC_2((VAR_5, VAR_14,
     "Could not create GPE Block 0"));
  }
 }

 if (VAR_7.gpe1_block_length &&
     VAR_7.xgpe1_block.address) {



  VAR_12 = (u16) (VAR_7.gpe1_block_length / 2);



  if ((VAR_11) &&
      (VAR_13 >= VAR_7.gpe1_base)) {
   FUNC_1((VAR_5,
        "GPE0 block (GPE 0 to %d) overlaps the GPE1 block "
        "(GPE %d to %d) - Ignoring GPE1",
        VAR_13, VAR_7.gpe1_base,
        VAR_7.gpe1_base +
        ((VAR_12 *
          VAR_2) - 1)));



   VAR_12 = 0;
  } else {


   VAR_14 =
       FUNC_5(VAR_8,
           &VAR_7.xgpe1_block,
           VAR_12,
           VAR_7.gpe1_base,
           VAR_7.
           sci_interrupt,
           &VAR_9
           [1]);

   if (FUNC_3(VAR_14)) {
    FUNC_2((VAR_5, VAR_14,
      "Could not create GPE Block 1"));
   }





   VAR_13 = VAR_7.gpe1_base +
       ((VAR_12 * VAR_2) - 1);
  }
 }



 if ((VAR_11 + VAR_12) == 0) {



  FUNC_0((VAR_0,
      "There are no GPE blocks defined in the FADT\n"));
  VAR_14 = VAR_6;
  goto cleanup;
 }



 if (VAR_13 > VAR_1) {
  FUNC_1((VAR_5,
       "Maximum GPE number from FADT is too large: 0x%X",
       VAR_13));
  VAR_14 = VAR_4;
  goto cleanup;
 }

      cleanup:
 (void)FUNC_7(VAR_3);
 FUNC_8(VAR_6);
}
