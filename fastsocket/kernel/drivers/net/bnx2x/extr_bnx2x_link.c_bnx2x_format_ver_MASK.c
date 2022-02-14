
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1, u8 *VAR_2, u16 *VAR_3)
{
 u8 *VAR_4 = VAR_2;
 u32 VAR_5 = 0xf0000000;
 u8 VAR_6 = 8*4;
 u8 VAR_7;
 u8 VAR_8 = 1;
 if (*VAR_3 < 10) {

  *VAR_4 = '\0';
  (*VAR_3)--;
  return -VAR_0;
 }
 while (VAR_6 > 0) {

  VAR_6 -= 4;
  VAR_7 = ((VAR_1 & VAR_5) >> VAR_6);
  if (VAR_7 == 0 && VAR_8) {
   VAR_5 = VAR_5 >> 4;
   continue;
  } else if (VAR_7 < 0xa)
   *VAR_4 = VAR_7 + '0';
  else
   *VAR_4 = VAR_7 - 0xa + 'a';
  VAR_8 = 0;
  VAR_4++;
  (*VAR_3)--;
  VAR_5 = VAR_5 >> 4;
  if (VAR_6 == 4*4) {
   *VAR_4 = '.';
   VAR_4++;
   (*VAR_3)--;
   VAR_8 = 1;
  }
 }
 return 0;
}
