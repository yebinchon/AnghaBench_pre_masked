
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned long VAR_0[], unsigned int VAR_1[], unsigned int VAR_2,
   unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_2 - 1; VAR_4++) {
  VAR_6 = VAR_4;

  for (VAR_5 = VAR_6 + 1; VAR_5 < VAR_2; VAR_5++)
   if (VAR_3) {
    if (VAR_0[VAR_5] > VAR_0[VAR_6])
     VAR_6 = VAR_5;
   } else {
    if (VAR_0[VAR_5] < VAR_0[VAR_6])
     VAR_6 = VAR_5;
   }

  if (VAR_6 != VAR_4) {
   VAR_8 = VAR_0[VAR_6];
   VAR_0[VAR_6] = VAR_0[VAR_4];
   VAR_0[VAR_4] = VAR_8;
   VAR_7 = VAR_1[VAR_6];
   VAR_1[VAR_6] = VAR_1[VAR_4];
   VAR_1[VAR_4] = VAR_7;
  }
 }

 return;
}
