
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int r ;



__attribute__((used)) static void FUNC_0(const unsigned int VAR_0[16][8],
         unsigned char VAR_1[16][1024],
         unsigned char VAR_2[16][256])
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned char *VAR_8, *VAR_9;
 const unsigned int *VAR_10;


 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  VAR_8 = VAR_1[VAR_3];
  VAR_9 = VAR_2[VAR_3];
  VAR_10 = VAR_0[VAR_3];

  for (VAR_4 = 0; VAR_4 < 8; VAR_4++, VAR_10++, VAR_8 += 128) {

   for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
    if (VAR_5 == 0)
     VAR_6 = 1;
    else if (VAR_5 >= 1 && VAR_5 < 3)
     VAR_6 = (VAR_10[0] >> 15) & 7;
    else if (VAR_5 >= 3 && VAR_5 < 6)
     VAR_6 = (VAR_10[0] >> 12) & 7;
    else if (VAR_5 >= 6 && VAR_5 < 10)
     VAR_6 = (VAR_10[0] >> 9) & 7;
    else if (VAR_5 >= 10 && VAR_5 < 13)
     VAR_6 = (VAR_10[0] >> 6) & 7;
    else if (VAR_5 >= 13 && VAR_5 < 15)
     VAR_6 = (VAR_10[0] >> 3) & 7;
    else
     VAR_6 = (VAR_10[0]) & 7;
    if (VAR_5 == 0)
     *VAR_9++ = 8;
    else
     *VAR_9++ = VAR_4 - VAR_6;
    *VAR_9++ = VAR_6;

    VAR_7 = 1 << VAR_6;
    VAR_8[VAR_5 + 0x00] = (1 * VAR_7) + 0x80;
    VAR_8[VAR_5 + 0x10] = (2 * VAR_7) + 0x80;
    VAR_8[VAR_5 + 0x20] = (3 * VAR_7) + 0x80;
    VAR_8[VAR_5 + 0x30] = (4 * VAR_7) + 0x80;
    VAR_8[VAR_5 + 0x40] = (-1 * VAR_7) + 0x80;
    VAR_8[VAR_5 + 0x50] = (-2 * VAR_7) + 0x80;
    VAR_8[VAR_5 + 0x60] = (-3 * VAR_7) + 0x80;
    VAR_8[VAR_5 + 0x70] = (-4 * VAR_7) + 0x80;
   }
  }
 }
}
