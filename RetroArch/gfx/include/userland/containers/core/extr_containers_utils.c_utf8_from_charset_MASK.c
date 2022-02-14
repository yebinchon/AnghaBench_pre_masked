
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef char uint16_t ;


 int FUNC_0 (char const*,char*) ;

int FUNC_1(const char *VAR_0, char *VAR_1, unsigned int VAR_2,
                      const void *VAR_3, unsigned int VAR_4)
{
   unsigned int VAR_5;
   const uint16_t *VAR_6 = (const uint16_t *)VAR_3;
   const uint8_t *VAR_7 = (const uint8_t *)VAR_3;

   if(VAR_2 < 1) return 1;
   if(!FUNC_0(VAR_0, "UTF16-LE")) goto utf16le;
   if(!FUNC_0(VAR_0, "UTF8")) goto utf8;
   else return 1;

 utf16le:
   for(VAR_5 = 0; VAR_5 < VAR_4 / 2 && VAR_6[VAR_5] && VAR_5 < VAR_2 - 1; VAR_5++)
   {
      VAR_1[VAR_5] = VAR_6[VAR_5];
   }
   VAR_1[VAR_5] = 0;
   return 0;

 utf8:
   for(VAR_5 = 0; VAR_5 < VAR_4 && VAR_7[VAR_5] && VAR_5 < VAR_2 - 1; VAR_5++)
   {
      VAR_1[VAR_5] = VAR_7[VAR_5];
   }
   VAR_1[VAR_5] = 0;
   return 0;
}
