
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UBYTE ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(FILE *VAR_4, UBYTE *VAR_5, UBYTE *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 UBYTE VAR_10 = 16;
 UBYTE VAR_11;
 UBYTE VAR_12;

 FUNC_3(0xa, VAR_4);
 FUNC_3(0x5, VAR_4);
 FUNC_3(0x1, VAR_4);
 FUNC_3(0x8, VAR_4);
 FUNC_4(0, VAR_4);
 FUNC_4(0, VAR_4);
 FUNC_4(VAR_0 - 1, VAR_4);
 FUNC_4(VAR_2 - 1, VAR_4);
 FUNC_4(0, VAR_4);
 FUNC_4(0, VAR_4);
 for (VAR_7 = 0; VAR_7 < 48; VAR_7++)
  FUNC_3(0, VAR_4);
 FUNC_3(0, VAR_4);
 FUNC_3(VAR_6 != ((void*)0) ? 3 : 1, VAR_4);
 FUNC_4(VAR_0, VAR_4);
 FUNC_4(1, VAR_4);
 FUNC_4(VAR_0, VAR_4);
 FUNC_4(VAR_2, VAR_4);
 for (VAR_7 = 0; VAR_7 < 54; VAR_7++)
  FUNC_3(0, VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_2; ) {
  VAR_8 = 0;
  do {
   VAR_11 = VAR_6 != ((void*)0) ? (((VAR_1[*VAR_5] >> VAR_10) & 0xff) + ((VAR_1[*VAR_6] >> VAR_10) & 0xff)) >> 1 : *VAR_5;
   VAR_12 = 0xc0;
   do {
    VAR_5++;
    if (VAR_6 != ((void*)0))
     VAR_6++;
    VAR_12++;
    VAR_8++;
   } while (VAR_11 == (VAR_6 != ((void*)0) ? (((VAR_1[*VAR_5] >> VAR_10) & 0xff) + ((VAR_1[*VAR_6] >> VAR_10) & 0xff)) >> 1 : *VAR_5)
      && VAR_12 < 0xff && VAR_8 < VAR_0);
   if (VAR_12 > 0xc1 || VAR_11 >= 0xc0)
    FUNC_3(VAR_12, VAR_4);
   FUNC_3(VAR_11, VAR_4);
  } while (VAR_8 < VAR_0);

  if (VAR_6 != ((void*)0) && VAR_10) {
   VAR_5 -= VAR_0;
   VAR_6 -= VAR_0;
   VAR_10 -= 8;
  }
  else {
   VAR_5 += VAR_3 - VAR_0;
   if (VAR_6 != ((void*)0)) {
    VAR_6 += VAR_3 - VAR_0;
    VAR_10 = 16;
   }
   VAR_9++;
  }
 }

 if (VAR_6 == ((void*)0)) {

  FUNC_3(0xc, VAR_4);
  for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
   FUNC_3(FUNC_2(VAR_7), VAR_4);
   FUNC_3(FUNC_1(VAR_7), VAR_4);
   FUNC_3(FUNC_0(VAR_7), VAR_4);
  }
 }
}
