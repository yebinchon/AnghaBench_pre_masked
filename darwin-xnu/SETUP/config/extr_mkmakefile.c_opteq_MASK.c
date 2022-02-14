
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 char const FUNC_1 (char const) ;

int
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 char VAR_2, VAR_3;

 for (; ; VAR_0++, VAR_1++) {
  if (*VAR_0 != *VAR_1) {
   VAR_2 = FUNC_0(*VAR_0) ? FUNC_1(*VAR_0) : *VAR_0;
   VAR_3 = FUNC_0(*VAR_1) ? FUNC_1(*VAR_1) : *VAR_1;
   if (VAR_2 != VAR_3)
    return (0);
  }
  if (*VAR_0 == 0)
   return (1);
 }
}
