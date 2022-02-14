
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char const*) ;
 scalar_t__ FUNC_8 (int *,...) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int VAR_1 ;
 int FUNC_17 () ;
 int * VAR_2 ;
 int FUNC_18 (int*,int) ;
 int VAR_3 ;
 int FUNC_19 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_20 (char*,char*,int) ;
 scalar_t__ VAR_5 ;

int FUNC_21(const char *VAR_6, const char *VAR_7)
{
 char VAR_8[8];
 UBYTE VAR_9 = 0;
 UBYTE VAR_10 = 0;

 if (VAR_2 != ((void*)0)) {
  FUNC_6(VAR_2);
  VAR_2 = ((void*)0);
 }
 VAR_5 = VAR_4;

 VAR_2 = FUNC_7(VAR_6, VAR_7);
 if (VAR_2 == ((void*)0)) {
  FUNC_10("Could not open %s for state read.", VAR_6);
  FUNC_9();
  return VAR_0;
 }

 if (FUNC_8(VAR_2, VAR_8, 8) == 0) {
  FUNC_9();
  FUNC_6(VAR_2);
  VAR_2 = ((void*)0);
  return VAR_0;
 }
 if (FUNC_20(VAR_8, "ATARI800", 8) != 0) {
  FUNC_10("This is not an Atari800 state save file.");
  FUNC_6(VAR_2);
  VAR_2 = ((void*)0);
  return VAR_0;
 }

 if (FUNC_8(VAR_2, &VAR_9, 1) == 0
  || FUNC_8(VAR_2, &VAR_10, 1) == 0) {
  FUNC_10("Failed read from Atari state file.");
  FUNC_9();
  FUNC_6(VAR_2);
  VAR_2 = ((void*)0);
  return VAR_0;
 }

 if (VAR_9 > VAR_1 || VAR_9 < 3) {
  FUNC_10("Cannot read this state file because it is an incompatible version.");
  FUNC_6(VAR_2);
  VAR_2 = ((void*)0);
  return VAR_0;
 }

 FUNC_1(VAR_9);
 if (VAR_9 >= 4) {
  FUNC_2(VAR_9);
  FUNC_17();
 }
 FUNC_0();
 FUNC_3(VAR_10, VAR_9);
 FUNC_5(VAR_9);
 FUNC_15(VAR_9);
 FUNC_16();
 if (VAR_9 >= 6) {



  int VAR_11;
  FUNC_18(&VAR_11,1);
  if (VAR_11) {
   FUNC_10("Cannot read this state file because this version does not support XEP80.");
   FUNC_6(VAR_2);
   VAR_2 = ((void*)0);
   return VAR_0;
  }

  FUNC_13();



  {
   int VAR_12;
   FUNC_18(&VAR_12,1);
   if (VAR_12) {
    FUNC_10("Cannot read this state file because this version does not support MIO.");
    FUNC_6(VAR_2);
    VAR_2 = ((void*)0);
    return VAR_0;
   }
  }




  {
   int VAR_13;
   FUNC_18(&VAR_13,1);
   if (VAR_13) {
    FUNC_10("Cannot read this state file because this version does not support the Black Box.");
    FUNC_6(VAR_2);
    VAR_2 = ((void*)0);
    return VAR_0;
   }
  }




  {
   int VAR_14;
   FUNC_18(&VAR_14,1);
   if (VAR_14) {
    FUNC_10("Cannot read this state file because this version does not support the 1400XL/1450XLD.");
    FUNC_6(VAR_2);
    VAR_2 = ((void*)0);
    return VAR_0;
   }
  }

 }




 FUNC_6(VAR_2);
 VAR_2 = ((void*)0);

 if (VAR_5 != VAR_4)
  return VAR_0;

 return VAR_3;
}
