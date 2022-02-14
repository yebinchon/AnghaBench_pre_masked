
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void*
FUNC_0(const void *VAR_0, int VAR_1, int VAR_2)
{
 const unsigned char VAR_3 = VAR_1;
 const unsigned char *VAR_4;

 for (VAR_4 = VAR_0; 0 < VAR_2; ++VAR_4, --VAR_2)
  if (*VAR_4 == VAR_3)
   return (void *)VAR_4;
 return ((void*)0);
}
