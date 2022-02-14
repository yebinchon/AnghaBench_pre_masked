
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0)
{
 int VAR_1;
 if (*VAR_0 == '\0')
  return -1;
 VAR_1 = 0;
 for (;;) {
  if (*VAR_0 >= '0' && *VAR_0 <= '9')
   VAR_1 = 16 * VAR_1 + *VAR_0 - '0';
  else if (*VAR_0 >= 'A' && *VAR_0 <= 'F')
   VAR_1 = 16 * VAR_1 + *VAR_0 - 'A' + 10;
  else if (*VAR_0 >= 'a' && *VAR_0 <= 'f')
   VAR_1 = 16 * VAR_1 + *VAR_0 - 'a' + 10;
  else if (*VAR_0 == '\0')
   return VAR_1;
  else
   return -1;
  VAR_0++;
 }
}
