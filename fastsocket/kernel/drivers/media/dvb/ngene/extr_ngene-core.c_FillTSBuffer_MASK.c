
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int) ;

void FUNC_1(void *VAR_1, int VAR_2, u32 VAR_3)
{
 u32 *VAR_4 = VAR_1;

 FUNC_0(VAR_1, 0xff, VAR_2);
 while (VAR_2 > 0) {
  if (VAR_3 & VAR_0)
   *VAR_4 = 0x471FFF10;
  else
   *VAR_4 = 0x10FF1F47;
  VAR_4 += (188 / 4);
  VAR_2 -= 188;
 }
}
