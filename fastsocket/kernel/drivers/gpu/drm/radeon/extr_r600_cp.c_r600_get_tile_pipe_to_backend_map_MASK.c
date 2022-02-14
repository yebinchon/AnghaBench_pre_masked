
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_2,
          u32 VAR_3,
          u32 VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9[VAR_1];
 u32 VAR_10;
 u32 VAR_11;

 if (VAR_2 > VAR_1)
  VAR_2 = VAR_1;
 if (VAR_2 < 1)
  VAR_2 = 1;
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 if (VAR_3 < 1)
  VAR_3 = 1;

 VAR_6 = 0;
 VAR_7 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_0; ++VAR_11) {
  if (((VAR_4 >> VAR_11) & 1) == 0) {
   VAR_6 |= (1 << VAR_11);
   ++VAR_7;
  }
  if (VAR_7 == VAR_3)
   break;
 }

 if (VAR_7 == 0) {
  VAR_6 = 1;
  VAR_7 = 1;
 }

 if (VAR_7 != VAR_3)
  VAR_3 = VAR_7;

 FUNC_0((uint8_t *)&VAR_9[0], 0, sizeof(u32) * VAR_1);
 switch (VAR_2) {
 case 1:
  VAR_9[0] = 0;
  break;
 case 2:
  VAR_9[0] = 0;
  VAR_9[1] = 1;
  break;
 case 3:
  VAR_9[0] = 0;
  VAR_9[1] = 1;
  VAR_9[2] = 2;
  break;
 case 4:
  VAR_9[0] = 0;
  VAR_9[1] = 1;
  VAR_9[2] = 2;
  VAR_9[3] = 3;
  break;
 case 5:
  VAR_9[0] = 0;
  VAR_9[1] = 1;
  VAR_9[2] = 2;
  VAR_9[3] = 3;
  VAR_9[4] = 4;
  break;
 case 6:
  VAR_9[0] = 0;
  VAR_9[1] = 2;
  VAR_9[2] = 4;
  VAR_9[3] = 5;
  VAR_9[4] = 1;
  VAR_9[5] = 3;
  break;
 case 7:
  VAR_9[0] = 0;
  VAR_9[1] = 2;
  VAR_9[2] = 4;
  VAR_9[3] = 6;
  VAR_9[4] = 1;
  VAR_9[5] = 3;
  VAR_9[6] = 5;
  break;
 case 8:
  VAR_9[0] = 0;
  VAR_9[1] = 2;
  VAR_9[2] = 4;
  VAR_9[3] = 6;
  VAR_9[4] = 1;
  VAR_9[5] = 3;
  VAR_9[6] = 5;
  VAR_9[7] = 7;
  break;
 }

 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  while (((1 << VAR_10) & VAR_6) == 0)
   VAR_10 = (VAR_10 + 1) % VAR_0;

  VAR_5 |= (u32)(((VAR_10 & 3) << (VAR_9[VAR_8] * 2)));

  VAR_10 = (VAR_10 + 1) % VAR_0;
 }

 return VAR_5;
}
