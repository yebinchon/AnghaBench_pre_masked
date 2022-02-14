
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, const char *VAR_1)
{




 while (*VAR_0 && *VAR_1 && *VAR_0 == *VAR_1) {
  VAR_0++;
  VAR_1++;
 }
 if (*VAR_0 == '\n')
  VAR_0++;
 if (*VAR_1 || *VAR_0)
  return 0;
 return 1;
}
