
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static void FUNC_0(u16 VAR_0, u16 VAR_1, u16 VAR_2, u16 *VAR_3, u16 *VAR_4, u16 *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 signed int VAR_8 = (signed int) VAR_0;
 unsigned int VAR_9 = (VAR_1 - 32768) * 2;
 unsigned int VAR_10 = VAR_2;
 unsigned int VAR_11;
 if (VAR_1 < 32768) {

  *VAR_3 = VAR_2;
  *VAR_4 = VAR_2;
  *VAR_5 = VAR_2;
  return;
 }
 if (VAR_2 <= (0xFFFF/8)) {

  *VAR_3 = 0;
  *VAR_4 = 0;
  *VAR_5 = 0;
  return;
 }






 VAR_6 = (VAR_8 + 10923) & 0xFFFF;
 VAR_6 = VAR_6*3 >> 16;
 VAR_0 -= VAR_6 * 21845;
 VAR_8 = VAR_0;
 VAR_8 *= 3;
 VAR_7 = VAR_10*VAR_9 >> 16;
 VAR_11 = VAR_10 - VAR_7;
 if (VAR_8 >= 0) {
  unsigned int VAR_12 = VAR_10 - (VAR_7 * (32769 - VAR_8) >> 15);
  switch (VAR_6) {
  case 0:
   *VAR_3 = VAR_10;
   *VAR_4 = VAR_12;
   *VAR_5 = VAR_11;
   break;
  case 1:
   *VAR_3 = VAR_11;
   *VAR_4 = VAR_10;
   *VAR_5 = VAR_12;
   break;
  case 2:
   *VAR_3 = VAR_12;
   *VAR_4 = VAR_11;
   *VAR_5 = VAR_10;
   break;
  }
 } else {
  unsigned int VAR_13 = VAR_10 - (VAR_7 * (32769 + VAR_8) >> 15);
  switch (VAR_6) {
  case 0:
   *VAR_3 = VAR_10;
   *VAR_4 = VAR_11;
   *VAR_5 = VAR_13;
   break;
  case 1:
   *VAR_3 = VAR_13;
   *VAR_4 = VAR_10;
   *VAR_5 = VAR_11;
   break;
  case 2:
   *VAR_3 = VAR_11;
   *VAR_4 = VAR_13;
   *VAR_5 = VAR_10;
   break;
  }
 }
}
