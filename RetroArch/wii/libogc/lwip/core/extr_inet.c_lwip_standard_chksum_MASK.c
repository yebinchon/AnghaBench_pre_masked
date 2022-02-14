
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static u16_t
FUNC_1(void *VAR_0, u16_t VAR_1)
{
  u32_t VAR_2;
  u16_t VAR_3;
  u8_t *VAR_4;

  VAR_2 = 0;

  VAR_4 = (u8_t*)VAR_0;
  while (VAR_1 > 1)
  {


    VAR_3 = (*VAR_4) << 8;
    VAR_4++;

    VAR_3 |= (*VAR_4);
    VAR_4++;
    VAR_2 += VAR_3;
    VAR_1 -= 2;
  }
  if (VAR_1 > 0)
  {

    VAR_3 = (*VAR_4) << 8;
    VAR_2 += VAR_3;
  }

  VAR_2 = (VAR_2 >> 16) + (VAR_2 & 0x0000ffffUL);
  if ((VAR_2 & 0xffff0000) != 0) {
    VAR_2 = (VAR_2 >> 16) + (VAR_2 & 0x0000ffffUL);
  }



  return FUNC_0((u16_t)VAR_2);
}
