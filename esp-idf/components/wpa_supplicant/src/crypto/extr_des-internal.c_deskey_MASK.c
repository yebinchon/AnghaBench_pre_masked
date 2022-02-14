
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int* VAR_0 ;
 int const* VAR_1 ;
 int FUNC_0 (int*,int*) ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_5, int VAR_6, u32 *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13[32];
 u8 VAR_14[56], VAR_15[56];

 for (VAR_9 = 0; VAR_9 < 56; VAR_9++) {
  VAR_10 = (u32) VAR_2[VAR_9];
  VAR_11 = VAR_10 & 7;
  VAR_14[VAR_9] = (u8)
   ((VAR_5[VAR_10 >> 3U] & VAR_1[VAR_11]) == VAR_1[VAR_11] ? 1 : 0);
 }

 for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
  if (VAR_6)
   VAR_11 = (15 - VAR_8) << 1;
  else
   VAR_11 = VAR_8 << 1;
  VAR_12 = VAR_11 + 1;
  VAR_13[VAR_11] = VAR_13[VAR_12] = 0L;
  for (VAR_9 = 0; VAR_9 < 28; VAR_9++) {
   VAR_10 = VAR_9 + (u32) VAR_4[VAR_8];
   if (VAR_10 < 28)
    VAR_15[VAR_9] = VAR_14[VAR_10];
   else
    VAR_15[VAR_9] = VAR_14[VAR_10 - 28];
  }
  for ( ; VAR_9 < 56; VAR_9++) {
   VAR_10 = VAR_9 + (u32) VAR_4[VAR_8];
   if (VAR_10 < 56)
    VAR_15[VAR_9] = VAR_14[VAR_10];
   else
    VAR_15[VAR_9] = VAR_14[VAR_10 - 28];
  }
  for (VAR_9 = 0; VAR_9 < 24; VAR_9++) {
   if ((int) VAR_15[(int) VAR_3[VAR_9]] != 0)
    VAR_13[VAR_11] |= VAR_0[VAR_9];
   if ((int) VAR_15[(int) VAR_3[VAR_9 + 24]] != 0)
    VAR_13[VAR_12] |= VAR_0[VAR_9];
  }
 }

 FUNC_0(VAR_13, VAR_7);
}
