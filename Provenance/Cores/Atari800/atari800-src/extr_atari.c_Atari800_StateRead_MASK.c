
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 () ;

void FUNC_8(UBYTE VAR_15)
{
 if (VAR_15 >= 7) {
  UBYTE VAR_16;
  FUNC_6(&VAR_16, 1);
  FUNC_1(VAR_16 ? VAR_5 : VAR_4);
  FUNC_6(&VAR_16, 1);
  if (VAR_16 < 0 || VAR_16 >= VAR_2) {
   VAR_16 = VAR_3;
   FUNC_4("Warning: Bad machine type read in from state save, defaulting to XL/XE");
  }
  FUNC_0(VAR_16);
  if (VAR_12 == VAR_3) {
   FUNC_6(&VAR_16, 1);
   VAR_6 = VAR_16 != 0;
   FUNC_6(&VAR_16, 1);
   VAR_11 = VAR_16 != 0;
   FUNC_6(&VAR_16, 1);
   VAR_8 = VAR_16 != 0;
   FUNC_6(&VAR_16, 1);
   VAR_9 = VAR_16 != 0;
   FUNC_2();
   FUNC_6(&VAR_16, 1);
   VAR_7 = VAR_16 != 0;
   FUNC_6(&VAR_16, 1);
   VAR_10 = VAR_16 != 0;
   FUNC_3();
  }
 }
 else {
  int VAR_17;

  UBYTE VAR_18;
  int VAR_19;
  int VAR_20;
  int VAR_21;
  int VAR_22;

  FUNC_6(&VAR_18, 1);
  VAR_17 = (VAR_18 == 0) ? VAR_5 : VAR_4;
  FUNC_1(VAR_17);

  FUNC_6(&VAR_18, 1);
  FUNC_5(&VAR_20, 1);
  switch (VAR_18) {
  case 0:
   VAR_12 = VAR_1;
   VAR_14 = 48;
   break;
  case 1:
   VAR_12 = VAR_3;
   VAR_14 = 64;
   break;
  case 2:
   VAR_12 = VAR_3;
   VAR_14 = 128;
   break;
  case 3:
   VAR_12 = VAR_3;
   VAR_14 = VAR_13;
   break;
  case 4:
   VAR_12 = VAR_0;
   VAR_14 = 16;
   break;
  case 5:
   VAR_12 = VAR_1;
   VAR_14 = 16;
   break;
  case 6:
   VAR_12 = VAR_3;
   VAR_14 = 16;
   break;
  case 7:
   VAR_12 = VAR_3;
   VAR_14 = 576;
   break;
  case 8:
   VAR_12 = VAR_3;
   VAR_14 = 1088;
   break;
  case 9:
   VAR_12 = VAR_3;
   VAR_14 = 192;
   break;
  default:
   VAR_12 = VAR_3;
   VAR_14 = 64;
   FUNC_4("Warning: Bad machine type read in from state save, defaulting to 800 XL");
   break;
  }

  FUNC_5(&VAR_22, 1);
  FUNC_5(&VAR_19, 1);
  FUNC_5(&VAR_21, 1);
  FUNC_0(VAR_12);
 }
 FUNC_7();

}
