
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cwd ;
typedef int buff ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;

int FUNC_13(int VAR_1, char *VAR_2[])
{
 char VAR_3[1024], *VAR_4;
 char VAR_5[4096];
 FILE *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_1 != 2) return 1;

 FUNC_5(VAR_5, sizeof(VAR_5));
 VAR_11 = FUNC_11(VAR_5);
 if (VAR_5[VAR_11-1] != '/') {
  VAR_5[VAR_11++] = '/';
  VAR_5[VAR_11] = 0;
 }

 VAR_6 = FUNC_1(VAR_2[1], "rb+");
 if (VAR_6 == ((void*)0)) return 2;

 while (1)
 {
readnext:
  VAR_7 = FUNC_2(VAR_3, 1, sizeof(VAR_3), VAR_6);
  if (VAR_7 <= 16) break;

  VAR_8 = 0;
  while (VAR_8 < VAR_7)
  {
   VAR_9 = FUNC_10(VAR_3 + VAR_8, VAR_7 - VAR_8);
   if (VAR_9 < 0) {
    FUNC_3(VAR_6, -6, VAR_0);
    goto readnext;
   }
   VAR_8 += VAR_9;

   while (VAR_8 > 0 && FUNC_6(VAR_3[VAR_8-1])) VAR_8--;

   if (VAR_8 == 0) {
    FUNC_3(VAR_6, -(sizeof(VAR_3) + 16), VAR_0);
    goto readnext;
   }


   while (VAR_8 < VAR_7 && VAR_3[VAR_8] != '/') VAR_8++;
   VAR_4 = VAR_3 + VAR_8;
   VAR_10 = FUNC_11(VAR_4);

   if (!FUNC_7(VAR_4)) {
    VAR_8 += VAR_10;
    continue;
   }

   if (FUNC_12(VAR_4, VAR_5, VAR_11) != 0) {
    FUNC_9("can't handle: %s\n", VAR_4);
    VAR_8 += VAR_10;
    continue;
   }

   FUNC_8(VAR_4, VAR_4 + VAR_11, VAR_10 - VAR_11 + 1);
   FUNC_3(VAR_6, -(sizeof(VAR_3) - VAR_8), VAR_0);
   FUNC_4(VAR_4, 1, VAR_10, VAR_6);
   goto readnext;
  }
 }

 FUNC_0(VAR_6);

 return 0;
}
