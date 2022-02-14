
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef scalar_t__ u32_t ;
typedef int u16_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u32_t
FUNC_1(void *VAR_0, u16_t VAR_1)
{
  u16_t *VAR_2 = VAR_0;
  u32_t VAR_3;

  for(VAR_3 = 0; VAR_1 > 1; VAR_1 -= 2) {
    VAR_3 += *VAR_2++;
  }


  if (VAR_1 == 1) {
    VAR_3 += FUNC_0((u16_t)(*(u8_t *)VAR_0) << 8);
  }

  return VAR_3;

}
