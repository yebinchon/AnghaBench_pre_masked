
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;

void FUNC_0(void *VAR_1, int VAR_2, int VAR_3, int VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned short *VAR_8;
 unsigned short VAR_9 = 0xffff;

 VAR_8 = (unsigned short *)VAR_1 + VAR_3 + VAR_4 * VAR_2;
 for (VAR_6 = 0; ; VAR_6++, VAR_8 += 8)
 {
  char VAR_10 = VAR_5[VAR_6];
  if (VAR_10 == 0)
   break;
  if (VAR_10 == ' ')
   continue;

  for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
  {
   unsigned char VAR_11 = VAR_0[VAR_10 * 8 + VAR_7];
   unsigned short *VAR_12 = VAR_8 + VAR_7 * VAR_2;
   unsigned char VAR_13, VAR_14 = 0;

   if (VAR_11&0x80) VAR_12[0] = VAR_9;
   if (VAR_11&0x40) VAR_12[1] = VAR_9;
   if (VAR_11&0x20) VAR_12[2] = VAR_9;
   if (VAR_11&0x10) VAR_12[3] = VAR_9;
   if (VAR_11&0x08) VAR_12[4] = VAR_9;
   if (VAR_11&0x04) VAR_12[5] = VAR_9;
   if (VAR_11&0x02) VAR_12[6] = VAR_9;
   if (VAR_11&0x01) VAR_12[7] = VAR_9;


   if (VAR_7 > 0)
    VAR_14 = VAR_0[VAR_10 * 8 + VAR_7 - 1];

   for (VAR_13 = 0x80; VAR_13 != 0; VAR_13 >>= 1, VAR_12++)
    if (!(VAR_11 & (VAR_13 >> 1)) && ((VAR_14 | VAR_11) & VAR_13))
     VAR_12[1] = (VAR_12[1] >> 1) & 0x39ef;
  }
 }
}
