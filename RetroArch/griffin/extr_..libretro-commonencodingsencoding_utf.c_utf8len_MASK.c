
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(const char *VAR_0)
{
   size_t VAR_1 = 0;

   if (!VAR_0)
      return 0;

   while (*VAR_0)
   {
      if ((*VAR_0 & 0xC0) != 0x80)
         VAR_1++;
      VAR_0++;
   }
   return VAR_1;
}
