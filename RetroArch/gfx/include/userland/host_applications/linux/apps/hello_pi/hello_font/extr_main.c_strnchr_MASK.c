
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(const char *VAR_0, size_t VAR_1, char VAR_2)
{
   const char *VAR_3 = VAR_0 + VAR_1;
   do {
      if (*VAR_0 == VAR_2) {
         return VAR_0;
      }
   } while (++VAR_0 < VAR_3);
   return ((void*)0);
}
