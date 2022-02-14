
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_integer ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 char FUNC_6 (char) ;
 scalar_t__ FUNC_7 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int,int,int*,int *) ;
 int FUNC_9 (int ) ;
 int VAR_8 ;

acpi_status
FUNC_10(char *VAR_9, u32 VAR_10, acpi_integer * VAR_11)
{
 u32 VAR_12 = 0;
 acpi_integer VAR_13 = 0;
 acpi_integer VAR_14;
 acpi_integer VAR_15;
 u32 VAR_16 = (VAR_10 == 128);
 u32 VAR_17 = (VAR_7 == 4);
 u8 VAR_18 = 0;
 u8 VAR_19 = 0;
 u8 VAR_20 = 0;

 FUNC_2(VAR_8, VAR_9);

 switch (VAR_10) {
 case 128:
 case 16:
  break;

 default:

  FUNC_9(VAR_5);
 }

 if (!VAR_9) {
  goto error_exit;
 }



 while ((*VAR_9) && (FUNC_4(*VAR_9) || *VAR_9 == '\t')) {
  VAR_9++;
 }

 if (VAR_16) {




  if ((*VAR_9 == '0') && (FUNC_6(*(VAR_9 + 1)) == 'x')) {
   VAR_19 = 1;
   VAR_10 = 16;


   VAR_9 += 2;
  } else {
   VAR_10 = 10;
  }
 }



 if (!(*VAR_9) || FUNC_4(*VAR_9) || *VAR_9 == '\t') {
  if (VAR_16) {
   goto error_exit;
  } else {
   goto all_done;
  }
 }





 VAR_15 = (VAR_17) ? VAR_1 : VAR_2;



 while (*VAR_9) {
  if (FUNC_3(*VAR_9)) {



   VAR_12 = ((u8) * VAR_9) - '0';
  } else if (VAR_10 == 10) {



   VAR_20 = 1;
  } else {
   VAR_12 = (u8) FUNC_7(*VAR_9);
   if (FUNC_5((char)VAR_12)) {



    VAR_12 = VAR_12 - 'A' + 10;
   } else {
    VAR_20 = 1;
   }
  }

  if (VAR_20) {
   if (VAR_16) {
    goto error_exit;
   } else {
    break;
   }
  } else if ((VAR_18 == 0) && (VAR_12 == 0)
      && !VAR_19) {


   VAR_9++;
   continue;
  }

  VAR_18++;

  if (VAR_19 && ((VAR_18 > 16)
      || ((VAR_18 > 8) && VAR_17))) {





   goto error_exit;
  }



  (void)
      FUNC_8((VAR_15 - (acpi_integer) VAR_12),
      VAR_10, &VAR_14, ((void*)0));

  if (VAR_13 > VAR_14) {
   if (VAR_16) {
    goto error_exit;
   } else {
    break;
   }
  }

  VAR_13 *= VAR_10;
  VAR_13 += VAR_12;
  VAR_9++;
 }



      all_done:

 FUNC_0((VAR_0, "Converted value: %8.8X%8.8X\n",
     FUNC_1(VAR_13)));

 *VAR_11 = VAR_13;
 FUNC_9(VAR_6);

      error_exit:


 if (VAR_10 == 10) {
  FUNC_9(VAR_3);
 } else {
  FUNC_9(VAR_4);
 }
}
