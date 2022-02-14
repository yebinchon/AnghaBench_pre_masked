
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 register int VAR_5, VAR_6;
 register u32 VAR_7, VAR_8;
 u32 *VAR_9;
 if (VAR_1 < 0) {
  VAR_3 += VAR_1;
  VAR_1 = 0;
 }
 if (VAR_2 < 0) {
  VAR_4 += VAR_2;
  VAR_2 = 0;
 }
 if (VAR_3 <= 0 || VAR_4 <= 0 || VAR_1 > 1023 || VAR_2 > 639)
  return;
 if (VAR_1 + VAR_3 > 1024)
  VAR_3 = 1024 - VAR_1;
 if (VAR_2 + VAR_4 > 640)
  VAR_4 = 640 - VAR_2;
 VAR_5 = (VAR_1 >> 5);
 VAR_6 = ((VAR_1 + VAR_3) >> 5);
 VAR_7 = (0xffffffff >> (VAR_1 & 31));
 VAR_8 = (0xffffffff << (~((VAR_1 + VAR_3) - (VAR_6 << 5))));
 VAR_9 = &VAR_0[(VAR_2 << 5) + VAR_5];
 VAR_3 = VAR_6 - VAR_5;
 if (!VAR_3) {
  VAR_7 |= VAR_8;
  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
   *VAR_9 |= VAR_7;
   VAR_9 += 32;
  }
 } else {
  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
   *VAR_9++ |= VAR_7;
   for (VAR_1 = 1; VAR_1 < VAR_3; VAR_1++)
    *VAR_9++ = 0xffffffff;
   *VAR_9 |= VAR_8;
   VAR_9 += (32 - VAR_3);
  }
 }
}
