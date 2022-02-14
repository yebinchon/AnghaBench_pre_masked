
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int*,int,int,int *) ;

int FUNC_7(const char *VAR_11)
{
 UBYTE VAR_12[2];
 if (VAR_4 != ((void*)0)) {
  FUNC_4(VAR_4);
  VAR_4 = ((void*)0);
  VAR_5 = 0;
 }
 if (VAR_1 == VAR_0) {
  FUNC_2("binload: can't run Atari programs directly on the 5200");
  return VAR_7;
 }
 VAR_4 = FUNC_5(VAR_11, "rb");
 if (VAR_4 == ((void*)0)) {
  FUNC_2("binload: can't open \"%s\"", VAR_11);
  return VAR_7;
 }

 if (VAR_9[0] == VAR_8)
  FUNC_3(1);
 if (FUNC_6(VAR_12, 1, 2, VAR_4) == 2) {
  if (VAR_12[0] == 0xff && VAR_12[1] == 0xff) {
   VAR_6 = VAR_10;
   FUNC_0();
   return VAR_10;
  }
  else if (VAR_12[0] == 0 && VAR_12[1] == 0) {
   VAR_5 = VAR_3;
   FUNC_1();
   FUNC_0();
   return VAR_10;
  }
  else if (VAR_12[0] >= '0' && VAR_12[0] <= '9') {
   VAR_5 = VAR_2;
   FUNC_1();
   FUNC_0();
   return VAR_10;
  }
 }
 FUNC_4(VAR_4);
 VAR_4 = ((void*)0);
 FUNC_2("binload: \"%s\" not recognized as a DOS or BASIC program", VAR_11);
 return VAR_7;
}
