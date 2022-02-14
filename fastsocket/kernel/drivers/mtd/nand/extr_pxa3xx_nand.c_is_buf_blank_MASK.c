
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline int FUNC_0(uint8_t *VAR_0, size_t VAR_1)
{
 for (; VAR_1 > 0; VAR_1--)
  if (*VAR_0++ != 0xff)
   return 0;
 return 1;
}
