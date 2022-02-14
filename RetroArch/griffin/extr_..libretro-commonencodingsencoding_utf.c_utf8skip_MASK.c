
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



const char *FUNC_0(const char *VAR_0, size_t VAR_1)
{
   const uint8_t *VAR_2 = (const uint8_t*)VAR_0;
   if (!VAR_1)
      return VAR_0;
   do
   {
      VAR_2++;
      while ((*VAR_2 & 0xC0)==0x80) VAR_2++;
      VAR_1--;
   } while(VAR_1);
   return (const char*)VAR_2;
}
