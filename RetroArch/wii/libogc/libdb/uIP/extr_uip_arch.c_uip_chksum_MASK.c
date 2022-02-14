
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 scalar_t__ FUNC_0 (int ) ;

u16_t FUNC_1(u16_t *VAR_0, u32_t VAR_1)
{
  u32_t VAR_2;

  for(VAR_2 = 0;VAR_1 > 1;VAR_1 -= 2) {
    VAR_2 += *VAR_0++;
  }


  if(VAR_1==1) {
    VAR_2 += FUNC_0((u16_t)((((u8_t *)VAR_0)[0]&0xff)<<8));
  }
  while(VAR_2>>16) VAR_2 = (VAR_2&0xffffUL)+(VAR_2>>16);

  return (u16_t)VAR_2;
}
