
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,int const*,int) ;

size_t FUNC_1(char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3)
{
   const uint8_t *VAR_4 = (const uint8_t*)VAR_2;
   const uint8_t *VAR_5 = VAR_4;

   if (!VAR_2)
      return 0;

   while (*VAR_4 && VAR_3-- > 0)
   {
      VAR_4++;
      while ((*VAR_4 & 0xC0) == 0x80) VAR_4++;
   }

   if ((size_t)(VAR_4 - VAR_5) > VAR_1-1 )
   {
      VAR_4 = VAR_5 + VAR_1-1;
      while ((*VAR_4 & 0xC0) == 0x80) VAR_4--;
   }

   FUNC_0(VAR_0, VAR_5, VAR_4-VAR_5);
   VAR_0[VAR_4-VAR_5] = '\0';

   return VAR_4-VAR_5;
}
