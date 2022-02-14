
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, signed char *VAR_8)
{
   static int VAR_9[] = { 0,1,2,3,4 };
   static int VAR_10[] = { 0,1,0,5,6 };
   int *VAR_11 = (VAR_5 != 0) ? VAR_9 : VAR_10;
   int VAR_12;
   int VAR_13 = VAR_11[VAR_7];
   unsigned char *VAR_14 = VAR_1 + VAR_2 * (VAR_0 ? VAR_4-1-VAR_5 : VAR_5);
   int VAR_15 = VAR_0 ? -VAR_2 : VAR_2;
   for (VAR_12 = 0; VAR_12 < VAR_6; ++VAR_12) {
      switch (VAR_13) {
         case 0: VAR_8[VAR_12] = VAR_14[VAR_12]; break;
         case 1: VAR_8[VAR_12] = VAR_14[VAR_12]; break;
         case 2: VAR_8[VAR_12] = VAR_14[VAR_12] - VAR_14[VAR_12-VAR_15]; break;
         case 3: VAR_8[VAR_12] = VAR_14[VAR_12] - (VAR_14[VAR_12-VAR_15]>>1); break;
         case 4: VAR_8[VAR_12] = (signed char) (VAR_14[VAR_12] - FUNC_0(0,VAR_14[VAR_12-VAR_15],0)); break;
         case 5: VAR_8[VAR_12] = VAR_14[VAR_12]; break;
         case 6: VAR_8[VAR_12] = VAR_14[VAR_12]; break;
      }
   }
   for (VAR_12=VAR_6; VAR_12 < VAR_3*VAR_6; ++VAR_12) {
      switch (VAR_13) {
         case 0: VAR_8[VAR_12] = VAR_14[VAR_12]; break;
         case 1: VAR_8[VAR_12] = VAR_14[VAR_12] - VAR_14[VAR_12-VAR_6]; break;
         case 2: VAR_8[VAR_12] = VAR_14[VAR_12] - VAR_14[VAR_12-VAR_15]; break;
         case 3: VAR_8[VAR_12] = VAR_14[VAR_12] - ((VAR_14[VAR_12-VAR_6] + VAR_14[VAR_12-VAR_15])>>1); break;
         case 4: VAR_8[VAR_12] = VAR_14[VAR_12] - FUNC_0(VAR_14[VAR_12-VAR_6], VAR_14[VAR_12-VAR_15], VAR_14[VAR_12-VAR_15-VAR_6]); break;
         case 5: VAR_8[VAR_12] = VAR_14[VAR_12] - (VAR_14[VAR_12-VAR_6]>>1); break;
         case 6: VAR_8[VAR_12] = VAR_14[VAR_12] - FUNC_0(VAR_14[VAR_12-VAR_6], 0,0); break;
      }
   }
}
