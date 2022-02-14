
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int *,int *,unsigned int) ;

void FUNC_1(u8 *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 u32 *VAR_3 = (u32 *)VAR_0;
 u32 *VAR_4 = (u32 *)VAR_1;

 for (; VAR_2 >= 4; VAR_2 -= 4)
  *VAR_3++ ^= *VAR_4++;

 FUNC_0((u8 *)VAR_3, (u8 *)VAR_4, VAR_2);
}
