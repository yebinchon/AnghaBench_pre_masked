
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 VAR_0, u32 *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15, VAR_16 = 0, VAR_17, VAR_18;

 VAR_18 = VAR_17 = 0xFFFFFFFF;
 VAR_11 = VAR_12 = VAR_8 = VAR_14 = 0;

 VAR_15 = VAR_0;
 VAR_7 = 30;




 VAR_6 = 1;
 VAR_10 = 0;
 while(!((1000000 * VAR_6)/(16 * 24 * VAR_15)) &&
       VAR_6 <= 32) {
  VAR_6 <<= 1;
  VAR_10++;
 }

 VAR_5 = VAR_4 = VAR_9 = 3;
 while (VAR_18 && VAR_17 && (VAR_9 < VAR_7)) {
  VAR_14 = (VAR_6 * VAR_5 * 1000000)/(4 * 24 * VAR_4);
  VAR_13 = (VAR_6 * VAR_5 * 1000000) % (4 * 24 * VAR_4);
  VAR_8 = VAR_4;
  VAR_9 = VAR_5;
  if (VAR_14 <= VAR_15) {
   VAR_5++;
   VAR_16 = VAR_15 - VAR_14;
  } else {
   VAR_4++;
   VAR_16 = VAR_14 - VAR_15;
  }

  if (VAR_18 > VAR_16) {
   VAR_18 = VAR_16;
   VAR_11 = VAR_9;
   VAR_12 = VAR_8;
  }

  if (!VAR_16 && VAR_17 > VAR_13) {
   VAR_17 = VAR_13;
   VAR_11 = VAR_9;
   VAR_12 = VAR_8;
  }
 }
 if (VAR_1) *VAR_1 = (VAR_12 - 2) & 0x3FF;
 if (VAR_2) *VAR_2 = (VAR_11 - 2) & 0x3FF;
 if (VAR_3) *VAR_3 = (VAR_10 << 4);
}
