
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 unsigned char* VAR_0 ;

void FUNC_1(unsigned char *VAR_1, size_t *VAR_2,
      unsigned char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 size_t VAR_6 = 0;
 size_t VAR_7 = 0;
 unsigned char VAR_8[3];

 if (VAR_4 == 0) {
  (*VAR_2) = 0;
  goto out;
 }
 VAR_5 = (VAR_4 / 3);
 if ((VAR_4 % 3) == 0) {
  FUNC_0(VAR_8, (&VAR_3[VAR_4 - 3]), 3);
 } else {
  VAR_5++;
  VAR_8[2] = 0x00;
  switch (VAR_4 % 3) {
  case 1:
   VAR_8[0] = VAR_3[VAR_4 - 1];
   VAR_8[1] = 0x00;
   break;
  case 2:
   VAR_8[0] = VAR_3[VAR_4 - 2];
   VAR_8[1] = VAR_3[VAR_4 - 1];
  }
 }
 (*VAR_2) = (VAR_5 * 4);
 if (!VAR_1)
  goto out;
 while (VAR_6 < VAR_5) {
  unsigned char *VAR_9;
  unsigned char VAR_10[4];

  if (VAR_6 == (VAR_5 - 1))
   VAR_9 = VAR_8;
  else
   VAR_9 = &VAR_3[VAR_6 * 3];
  VAR_10[0] = ((VAR_9[0] >> 2) & 0x3F);
  VAR_10[1] = (((VAR_9[0] << 4) & 0x30)
    | ((VAR_9[1] >> 4) & 0x0F));
  VAR_10[2] = (((VAR_9[1] << 2) & 0x3C)
    | ((VAR_9[2] >> 6) & 0x03));
  VAR_10[3] = (VAR_9[2] & 0x3F);
  VAR_1[VAR_7++] = VAR_0[VAR_10[0]];
  VAR_1[VAR_7++] = VAR_0[VAR_10[1]];
  VAR_1[VAR_7++] = VAR_0[VAR_10[2]];
  VAR_1[VAR_7++] = VAR_0[VAR_10[3]];
  VAR_6++;
 }
out:
 return;
}
