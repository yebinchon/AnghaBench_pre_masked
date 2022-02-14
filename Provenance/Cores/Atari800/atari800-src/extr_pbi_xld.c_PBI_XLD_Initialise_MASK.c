
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_3 ;

int FUNC_4(int *VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7;
 for (VAR_6 = VAR_7 = 1; VAR_6 < *VAR_4; VAR_6++) {
  if (FUNC_3(VAR_5[VAR_6], "-1400") == 0) {
   VAR_1 = VAR_2;
   VAR_0 = VAR_2;
  }else if (FUNC_3(VAR_5[VAR_6], "-xld") == 0){
   VAR_1 = VAR_2;
   VAR_3 = VAR_2;
   VAR_0 = VAR_2;
  }
  else {
    if (FUNC_3(VAR_5[VAR_6], "-help") == 0) {
    FUNC_0("\t-1400            Emulate the Atari 1400XL");
    FUNC_0("\t-xld             Emulate the Atari 1450XLD");
   }

   VAR_5[VAR_7++] = VAR_5[VAR_6];
  }

 }
 *VAR_4 = VAR_7;

 if (VAR_1) {
  FUNC_2();
 }





 if (VAR_3) {
  FUNC_1();
 }

 return VAR_2;
}
