
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 unsigned char* VAR_0 ;

__attribute__((used)) static void
FUNC_0(unsigned char *VAR_1, size_t *VAR_2,
         const unsigned char *VAR_3, size_t VAR_4)
{
 u8 VAR_5 = 0;
 size_t VAR_6 = 0;
 size_t VAR_7 = 0;

 if (VAR_1 == ((void*)0)) {






  (*VAR_2) = (((VAR_4 + 1) * 3) / 4);
  goto out;
 }
 while (VAR_6 < VAR_4) {
  unsigned char VAR_8 =
    VAR_0[(int)VAR_3[VAR_6]];

  switch (VAR_5) {
  case 0:
   VAR_1[VAR_7] = (VAR_8 << 2);
   VAR_5 = 6;
   break;
  case 6:
   VAR_1[VAR_7++] |= (VAR_8 >> 4);
   VAR_1[VAR_7] = ((VAR_8 & 0xF)
       << 4);
   VAR_5 = 4;
   break;
  case 4:
   VAR_1[VAR_7++] |= (VAR_8 >> 2);
   VAR_1[VAR_7] = (VAR_8 << 6);
   VAR_5 = 2;
   break;
  case 2:
   VAR_1[VAR_7++] |= (VAR_8);
   VAR_1[VAR_7] = 0;
   VAR_5 = 0;
   break;
  }
  VAR_6++;
 }
 (*VAR_2) = VAR_7;
out:
 return;
}
