
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 void** VAR_0 ;

int
FUNC_0(u8 *VAR_1, int VAR_2, u8 *VAR_3, u32 *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0;

 if (!VAR_2)
  return 0;


 if (*VAR_4) {
  *VAR_3++ = VAR_0[(((*VAR_4)<<8)&0xff00) | (*VAR_1++)];
  VAR_2--;
  VAR_7++;
 }

 VAR_5 = VAR_2 >> 1;

 while (VAR_6 < VAR_5) {
  *VAR_3++ = VAR_0[(VAR_1[0]<<8) | (VAR_1[1])];
  VAR_1 += 2;
  VAR_6++;
  VAR_7++;
 }


 if (VAR_2 & 1)
  *VAR_4 = 0x100 + *VAR_1;
 else
  *VAR_4 = 0;

 return VAR_7;
}
