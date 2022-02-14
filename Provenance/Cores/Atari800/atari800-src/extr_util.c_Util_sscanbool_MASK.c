
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0)
{
 if (*VAR_0 == '0' && VAR_0[1] == '\0')
  return 0;
 if (*VAR_0 == '1' && VAR_0[1] == '\0')
  return 1;
 return -1;
}
