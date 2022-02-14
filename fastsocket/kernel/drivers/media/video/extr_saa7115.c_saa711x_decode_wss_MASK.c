
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static int FUNC_0(u8 *VAR_0)
{
 static const int VAR_1[8] = {
  0, 0, 0, 1, 0, 1, 1, 1
 };
 unsigned char VAR_2;
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  int VAR_5 = VAR_1[VAR_0[VAR_4] & 7];
  int VAR_6 = VAR_1[(VAR_0[VAR_4] >> 3) & 7];

  if (VAR_5 == VAR_6)
   return -1;
  VAR_3 |= VAR_6 << VAR_4;
 }
 VAR_2 = VAR_3 & 15;
 VAR_2 ^= VAR_2 >> 2;
 VAR_2 ^= VAR_2 >> 1;

 if (!(VAR_2 & 1))
  return -1;

 return VAR_3;
}
