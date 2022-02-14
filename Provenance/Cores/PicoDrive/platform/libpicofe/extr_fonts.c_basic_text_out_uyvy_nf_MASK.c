
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;

void FUNC_0(void *VAR_1, int VAR_2, int VAR_3, int VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned short *VAR_8;

 VAR_8 = (unsigned short *)VAR_1 + VAR_3 + VAR_4 * VAR_2;
 for (VAR_6 = 0; ; VAR_6++, VAR_8 += 8)
 {
  char VAR_9 = VAR_5[VAR_6];
  if (VAR_9 == 0)
   break;
  if (VAR_9 == ' ')
   continue;

  for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
  {
   unsigned char VAR_10 = VAR_0[VAR_9 * 8 + VAR_7];
   unsigned char *VAR_11 = (void *)(VAR_8 + VAR_7 * VAR_2);
   unsigned char VAR_12, VAR_13 = 0;

   if (VAR_10&0x80) VAR_11[0 * 2 + 1] = 235;
   if (VAR_10&0x40) VAR_11[1 * 2 + 1] = 235;
   if (VAR_10&0x20) VAR_11[2 * 2 + 1] = 235;
   if (VAR_10&0x10) VAR_11[3 * 2 + 1] = 235;
   if (VAR_10&0x08) VAR_11[4 * 2 + 1] = 235;
   if (VAR_10&0x04) VAR_11[5 * 2 + 1] = 235;
   if (VAR_10&0x02) VAR_11[6 * 2 + 1] = 235;
   if (VAR_10&0x01) VAR_11[7 * 2 + 1] = 235;


   if (VAR_7 > 0)
    VAR_13 = VAR_0[VAR_9 * 8 + VAR_7 - 1];

   for (VAR_12 = 0x80; VAR_12 != 0; VAR_12 >>= 1, VAR_11 += 2)
    if (!(VAR_10 & (VAR_12 >> 1)) && ((VAR_13 | VAR_10) & VAR_12))
     VAR_11[1] /= 2;
  }
 }
}
