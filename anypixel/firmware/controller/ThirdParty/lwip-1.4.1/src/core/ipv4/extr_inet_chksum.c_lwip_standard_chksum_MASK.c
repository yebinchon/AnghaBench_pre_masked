
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
typedef scalar_t__ u16_t ;
typedef int mem_ptr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16_t
FUNC_2(void *VAR_0, int VAR_1)
{
  u8_t *VAR_2 = (u8_t *)VAR_0;
  u16_t *VAR_3, VAR_4 = 0;
  u32_t VAR_5 = 0;
  int VAR_6 = ((mem_ptr_t)VAR_2 & 1);


  if (VAR_6 && VAR_1 > 0) {
    ((u8_t *)&VAR_4)[1] = *VAR_2++;
    VAR_1--;
  }


  VAR_3 = (u16_t *)(void *)VAR_2;
  while (VAR_1 > 1) {
    VAR_5 += *VAR_3++;
    VAR_1 -= 2;
  }


  if (VAR_1 > 0) {
    ((u8_t *)&VAR_4)[0] = *(u8_t *)VAR_3;
  }


  VAR_5 += VAR_4;



  VAR_5 = FUNC_0(VAR_5);
  VAR_5 = FUNC_0(VAR_5);


  if (VAR_6) {
    VAR_5 = FUNC_1(VAR_5);
  }

  return (u16_t)VAR_5;
}
