
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UBYTE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

 char FUNC_2 (char*,int ) ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

 int * VAR_13 ;
 int VAR_14 ;
 char FUNC_3 () ;

void FUNC_4(int VAR_15)
{
 switch (VAR_14) {
 case 129:
  if (VAR_2 < VAR_5) {
   VAR_1[VAR_2++] = VAR_15;
   if (VAR_2 >= VAR_5) {
    if (VAR_1[0] >= 0x31 && VAR_1[0] <= 0x38 && (VAR_13[VAR_1[0]-0x31] != VAR_10 || VAR_0)) {
     VAR_14 = VAR_12;
     VAR_6 = VAR_11 + VAR_7;
    }
    else
     VAR_14 = VAR_9;
   }
  }
  else {
   FUNC_1("Invalid command frame!");
   VAR_14 = VAR_9;
  }
  break;
 case 128:
  if (VAR_4 < VAR_5) {
   VAR_3[VAR_4++] = VAR_15;
   if (VAR_4 >= VAR_5) {
    UBYTE VAR_16 = FUNC_2(VAR_3, VAR_5 - 1);
    if (VAR_16 == VAR_3[VAR_5 - 1]) {
     UBYTE VAR_17 = FUNC_3();
     if (VAR_17 != 0) {
      VAR_3[0] = 'A';
      VAR_3[1] = VAR_17;
      VAR_4 = 0;
      VAR_5 = 2;
      VAR_6 = VAR_11 + VAR_7;
      VAR_14 = VAR_8;
     }
     else
      VAR_14 = VAR_9;
    }
    else {
     VAR_3[0] = 'E';
     VAR_4 = 0;
     VAR_5 = 1;
     VAR_6 = VAR_11 + VAR_7;
     VAR_14 = VAR_8;
    }
   }
  }
  else {
   FUNC_1("Invalid data frame!");
  }
  break;
 case 130:
  FUNC_0(VAR_15);
  break;
 }

}
