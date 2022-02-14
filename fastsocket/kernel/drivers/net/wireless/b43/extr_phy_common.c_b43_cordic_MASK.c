
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct b43_c32 {int i; int q; } ;
typedef int s8 ;
typedef void* s32 ;



struct b43_c32 FUNC_0(int VAR_0)
{
 static const u32 VAR_1[] = {
  2949120, 1740967, 919879, 466945, 234379, 117304,
    58666, 29335, 14668, 7334, 3667, 1833,
      917, 458, 229, 115, 57, 29,
 };
 u8 VAR_2;
 s32 VAR_3;
 s8 VAR_4 = 1;
 u32 VAR_5 = 0;
 struct b43_c32 VAR_6 = { .i = 39797, .q = 0, };

 while (VAR_0 > (180 << 16))
  VAR_0 -= (360 << 16);
 while (VAR_0 < -(180 << 16))
  VAR_0 += (360 << 16);

 if (VAR_0 > (90 << 16)) {
  VAR_0 -= (180 << 16);
  VAR_4 = -1;
 } else if (VAR_0 < -(90 << 16)) {
  VAR_0 += (180 << 16);
  VAR_4 = -1;
 }

 for (VAR_2 = 0; VAR_2 <= 17; VAR_2++) {
  if (VAR_0 > VAR_5) {
   VAR_3 = VAR_6.i - (VAR_6.q >> VAR_2);
   VAR_6.q += VAR_6.i >> VAR_2;
   VAR_6.i = VAR_3;
   VAR_5 += VAR_1[VAR_2];
  } else {
   VAR_3 = VAR_6.i + (VAR_6.q >> VAR_2);
   VAR_6.q -= VAR_6.i >> VAR_2;
   VAR_6.i = VAR_3;
   VAR_5 -= VAR_1[VAR_2];
  }
 }

 VAR_6.i *= VAR_4;
 VAR_6.q *= VAR_4;

 return VAR_6;
}
