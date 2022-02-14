
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (unsigned int) ;

uint32_t FUNC_1(unsigned int VAR_0, int VAR_1,
          int VAR_2)
{
 uint32_t VAR_3 = 0;

 if (FUNC_0(VAR_0) == 0)
  return 0;
 if (VAR_1) {
  VAR_3 |= 0x1 << (16 + VAR_0);
  if (VAR_2)
   VAR_3 |= 0x1 << (24 + VAR_0);
 } else
  VAR_3 |= 0x1 << (24 + VAR_0);

 return VAR_3;
}
