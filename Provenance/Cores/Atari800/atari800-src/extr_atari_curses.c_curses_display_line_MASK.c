
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int** VAR_7 ;

void FUNC_0(int VAR_8, const UBYTE *VAR_9)
{
 int VAR_10;
 int *VAR_11;
 int VAR_12;
 if (VAR_1 < 32 || VAR_1 >= 224)
  return;
 VAR_10 = (VAR_1 >> 3) - 4;
 VAR_11 = &(VAR_7[VAR_10][0]);
 switch (VAR_8) {
 case 2:
 case 3:
 case 4:
 case 5:
  switch (VAR_0 & 3) {
  case 1:
   VAR_11 += 4;
   VAR_12 = 32;
   break;
  case 2:
   VAR_12 = 40;
   break;
  case 3:
   VAR_9 += 4;
   VAR_12 = 40;
   break;
  default:
   return;
  }
  do {
   static const int VAR_13[8] = {
    0x20,
    0x20,
    129,
    0,
    -0x80 + 0x20 + 128,
    -0x80 + 0x20 + 128,
    -0x80 + 129 + 128,
    -0x80 + 128
   };
   UBYTE VAR_14 = *VAR_9++;



   if (VAR_14 == 0x7f)
    *VAR_11 = '>' + 129;
   else if (VAR_14 == 0xff)
    *VAR_11 = '>' + 129 + 128;
   else
    *VAR_11 = VAR_14 + VAR_13[VAR_14 >> 5];
   VAR_11++;
  } while (--VAR_12);
  break;
 case 6:
 case 7:
  switch (VAR_0 & 3) {
  case 1:
   VAR_11 += 12;
   VAR_12 = 16;
   break;
  case 2:
   VAR_11 += 10;
   VAR_12 = 20;
   break;
  case 3:
   VAR_11 += 8;
   VAR_12 = 24;
   break;
  default:
   return;
  }
  {

   int VAR_15[4];
   VAR_15[0] = (VAR_2 & 0x0e) >= 0x0c ? 0x20 + 129 : 0x20;
   VAR_15[1] = (VAR_3 & 0x0e) >= 0x0c ? -0x40 + 0x20 + 129 : -0x40 + 0x20;
   VAR_15[2] = (VAR_4 & 0x0e) >= 0x0c ? -0x80 + 0x20 + 129 : -0x80 + 0x20;
   VAR_15[3] = (VAR_5 & 0x0e) >= 0x0c ? -0xc0 + 0x20 + 129 : -0xc0 + 0x20;
   do {
    *VAR_11++ = *VAR_9 + VAR_15[*VAR_9 >> 6];
    VAR_9++;
   } while (--VAR_12);
  }
  break;
 default:
  break;
 }
}
