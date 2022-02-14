
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef scalar_t__ UBYTE ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(void)
{

 static int VAR_0 = 0;
 static UWORD VAR_1;
 static UWORD VAR_2;
 static UBYTE VAR_3[64];
 UWORD VAR_4;
 if (FUNC_2(&VAR_1, &VAR_2, &VAR_4)) {
  VAR_0 = 0;
  do {
   VAR_3[VAR_0++] = (UBYTE) VAR_4;
   if (VAR_4 > 0xff && VAR_0 < 64)
    VAR_3[VAR_0++] = (UBYTE) (VAR_4 >> 8);
  } while (VAR_0 < 64 && FUNC_1(&VAR_4));
 }
 if (VAR_0 > 0) {
  int VAR_5;
  for (VAR_5 = VAR_1; VAR_5 <= VAR_2; VAR_5++) {
   int VAR_6 = 0;
   while (FUNC_0((UWORD) (VAR_5 + VAR_6)) == VAR_3[VAR_6]) {
    VAR_6++;
    if (VAR_6 >= VAR_0) {
     FUNC_3("Found at %04X\n", VAR_5);
     break;
    }
   }
  }
 }
}
