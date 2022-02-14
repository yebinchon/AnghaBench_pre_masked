
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static int FUNC_1(u16 VAR_1, u8 *VAR_2, int VAR_3, u8 *VAR_4, u8 VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 u8 VAR_9[4] = { 0x47, 0x00, 0x00, 0x10 };

 VAR_8 = (VAR_0 - 4) - VAR_5;
 if (VAR_3)
  VAR_9[1] = 0x40;
 if (VAR_8)
  VAR_9[3] = 0x30;
 VAR_9[1] |= (u8)((VAR_1 & 0x1F00) >> 8);
 VAR_9[2] |= (u8)(VAR_1 & 0x00FF);
 VAR_9[3] |= ((*VAR_2)++ & 0x0F);
 FUNC_0(VAR_4, VAR_9, 4);
 VAR_7 += 4;

 if (VAR_8) {
  VAR_4[4] = VAR_8 - 1;
  VAR_7++;
  if (VAR_8 > 1) {
   VAR_4[5] = 0x00;
   VAR_7++;
  }
  for (VAR_6 = 6; VAR_6 < VAR_8 + 4; VAR_6++) {
   VAR_4[VAR_6] = 0xFF;
   VAR_7++;
  }
 }

 return VAR_7;
}
