
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct gameport*,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct gameport *VAR_3, int VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned char VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;
 unsigned int VAR_14;
 char VAR_15;

 int VAR_16 = FUNC_1(VAR_3, VAR_2);

 VAR_5[0] = VAR_5[1] = VAR_5[2] = VAR_5[3] = 0;
 VAR_15 = VAR_8 = VAR_6 = VAR_7 = 0;
 VAR_14 = VAR_16;

 FUNC_3(VAR_13);

 VAR_11 = VAR_12 = (FUNC_0(VAR_3) >> VAR_4) & 3;

 do {
  VAR_14--;
  VAR_10 = (FUNC_0(VAR_3) >> VAR_4) & 3;

  if (VAR_10 ^ VAR_11) {

   if ((VAR_10 ^ VAR_11) & 1) {
    VAR_8 = (VAR_8 << 1) | (VAR_10 >> 1);
    VAR_14 = VAR_16;
    VAR_6++;
   } else

   if ((((VAR_10 ^ VAR_11) & (VAR_11 ^ VAR_12)) >> 1) & ~(VAR_10 | VAR_11 | VAR_12) & 1) {
    if (VAR_6 == 20) {
     VAR_9 = VAR_8 ^ (VAR_8 >> 7) ^ (VAR_8 >> 14);
     if (!((VAR_9 ^ (0x25cb9e70 >> ((VAR_9 >> 2) & 0x1c))) & 0xf)) {
      VAR_5[VAR_8 >> 18] = VAR_8 >> 4;
      VAR_15 |= 1 << (VAR_8 >> 18);
     }
     VAR_7++;
    }
    VAR_14 = VAR_16;
    VAR_8 = 0;
    VAR_6 = 0;
   }
   VAR_12 = VAR_11;
   VAR_11 = VAR_10;
  }

 } while (VAR_15 != 0xf && VAR_6 < VAR_0 && VAR_7 < VAR_1 && VAR_14 > 0);

 FUNC_2(VAR_13);

 return -(VAR_15 != 0xf);
}
