
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int acpi_status ;
typedef int acpi_rs_length ;



 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int* VAR_7 ;
 int FUNC_2 (void*) ;

acpi_status FUNC_3(void *VAR_8, u8 * VAR_9)
{
 u8 VAR_10;
 u8 VAR_11;
 acpi_rs_length VAR_12;
 acpi_rs_length VAR_13;

 FUNC_0();




 VAR_10 = FUNC_1(VAR_8);





 if (VAR_10 & VAR_0) {



  if (VAR_10 > VAR_1) {
   return (VAR_4);
  }





  VAR_11 = (u8) (VAR_10 - 0x70);
 } else {




  VAR_11 = (u8)
      ((VAR_10 & VAR_2) >> 3);
 }



 if (!VAR_7[VAR_11]) {
  return (VAR_4);
 }





 VAR_12 = FUNC_2(VAR_8);
 VAR_13 = VAR_6[VAR_11];



 switch (VAR_7[VAR_11]) {
 case 130:



  if (VAR_12 != VAR_13) {
   return (VAR_3);
  }
  break;

 case 128:



  if (VAR_12 < VAR_13) {
   return (VAR_3);
  }
  break;

 case 129:



  if ((VAR_12 > VAR_13) ||
      (VAR_12 < (VAR_13 - 1))) {
   return (VAR_3);
  }
  break;

 default:



  return (VAR_4);
 }



 if (VAR_9) {
  *VAR_9 = VAR_11;
 }

 return (VAR_5);
}
