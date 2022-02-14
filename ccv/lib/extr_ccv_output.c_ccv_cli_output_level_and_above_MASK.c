
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 int VAR_0 ;

int FUNC_0(int VAR_1)
{
 if (VAR_1 == VAR_0)
  return VAR_0;
 int VAR_2;
 uint32_t VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < 32; VAR_2++)
  if (VAR_1 <= (1u << VAR_2))
   VAR_3 |= 1u << VAR_2;
 return (int)VAR_3;
}
