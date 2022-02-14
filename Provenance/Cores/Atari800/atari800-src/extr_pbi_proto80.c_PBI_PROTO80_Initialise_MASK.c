
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(int *VAR_6, char *VAR_7[])
{
 int VAR_8, VAR_9;
 for (VAR_8 = VAR_9 = 1; VAR_8 < *VAR_6; VAR_8++) {
  if (FUNC_4(VAR_7[VAR_8], "-proto80") == 0) {
   FUNC_1("proto80 enabled");
   VAR_2 = VAR_3;
  }
  else {
    if (FUNC_4(VAR_7[VAR_8], "-help") == 0) {
    FUNC_1("\t-proto80         Emulate a prototype 80 column board for the 1090");
   }
   VAR_7[VAR_9++] = VAR_7[VAR_8];
  }
 }
 *VAR_6 = VAR_9;

 if (VAR_2) {
  VAR_5 = (UBYTE *)FUNC_2(0x800);
  if (!FUNC_0(VAR_4, VAR_5, 0x800)) {
   FUNC_3(VAR_5);
   VAR_2 = VAR_0;
   FUNC_1("Couldn't load proto80 rom image");
   return VAR_0;
  }
  else {
   FUNC_1("loaded proto80 rom image");
   VAR_1 = VAR_3;
  }
 }

 return VAR_3;
}
