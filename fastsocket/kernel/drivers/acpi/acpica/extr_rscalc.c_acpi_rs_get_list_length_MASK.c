
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int acpi_status ;
typedef int acpi_size ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,size_t*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t* VAR_4 ;
 int* VAR_5 ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int,size_t) ;
 int FUNC_7 (size_t*) ;
 int FUNC_8 (size_t*) ;
 int FUNC_9 (size_t*) ;
 int FUNC_10 (size_t*) ;
 int FUNC_11 (size_t*,size_t*) ;
 int FUNC_12 (int ) ;
 int VAR_6 ;

acpi_status
FUNC_13(u8 * VAR_7,
   u32 VAR_8, acpi_size * VAR_9)
{
 acpi_status VAR_10;
 u8 *VAR_11;
 u8 *VAR_12;
 u32 VAR_13;
 u16 VAR_14;
 u16 VAR_15;
 u32 VAR_16;
 u8 VAR_17;
 u8 VAR_18;

 FUNC_2(VAR_6);

 *VAR_9 = 0;
 VAR_11 = VAR_7 + VAR_8;



 while (VAR_7 < VAR_11) {



  VAR_10 = FUNC_11(VAR_7, &VAR_17);
  if (FUNC_1(VAR_10)) {
   FUNC_12(VAR_10);
  }



  VAR_15 = FUNC_9(VAR_7);
  VAR_18 =
      VAR_4[VAR_17];





  VAR_16 = 0;
  VAR_12 =
      VAR_7 + FUNC_8(VAR_7);

  switch (FUNC_10(VAR_7)) {
  case 130:




   FUNC_3(&VAR_14, VAR_12);
   VAR_16 = FUNC_5(VAR_14);
   break;

  case 133:




   VAR_16 = FUNC_5(*VAR_12);
   break;

  case 128:
  case 129:




   VAR_16 = VAR_15;
   break;

  case 132:




   *VAR_9 += VAR_1;
   FUNC_12(VAR_3);

  case 135:
  case 136:
  case 134:




   VAR_16 =
       FUNC_6(VAR_15,
        VAR_18);
   break;

  case 131:






   VAR_16 = (VAR_12[1] - 1) * sizeof(u32);



   VAR_16 +=
       FUNC_6(VAR_15 -
        VAR_16,
        VAR_18);
   break;

  default:
   break;
  }







  VAR_13 = VAR_5[VAR_17] +
      VAR_16;
  VAR_13 = (u32) FUNC_4(VAR_13);

  *VAR_9 += VAR_13;

  FUNC_0((VAR_0,
      "Type %.2X, AmlLength %.2X InternalLength %.2X\n",
      FUNC_10(VAR_7),
      FUNC_7(VAR_7),
      VAR_13));





  VAR_7 += FUNC_7(VAR_7);
 }



 FUNC_12(VAR_2);
}
