
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



inline uint16_t
FUNC_0(uint16_t VAR_0)
{
 uint16_t VAR_1;

 VAR_1 = 1;
 if (VAR_0 > 2) {
  VAR_1 += (VAR_0 - 2) / 5;
  if ((VAR_0 - 2) % 5)
   VAR_1++;
 }
 return VAR_1;
}
