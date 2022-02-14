
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
   if (VAR_2 == 0)
  return (0);
 do {
  if (*VAR_0 != *VAR_1++)
   return (*(unsigned char *)VAR_0 - *(unsigned char *)--VAR_1);
  if (*VAR_0++ == 0)
   break;
 } while (--VAR_2 != 0);
 return (0);
}
