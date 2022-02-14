
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int RESERVED_CHARS_TABLE_T ;


 scalar_t__ FUNC_0 (char,int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 char FUNC_2 (char) ;

__attribute__((used)) static uint32_t FUNC_3( const char *VAR_0, char *VAR_1,
      RESERVED_CHARS_TABLE_T VAR_2 )
{
   uint32_t VAR_3;
   uint32_t VAR_4 = 0;

   if (!VAR_0)
      return 0;

   for (VAR_3 = FUNC_1(VAR_0); VAR_3 > 0; VAR_3--)
   {
      char VAR_5 = *VAR_0++;

      if (FUNC_0(VAR_5, VAR_2))
      {
         VAR_1[VAR_4++] = '%';
         VAR_1[VAR_4++] = FUNC_2((VAR_5 >> 4) & 0xF);
         VAR_1[VAR_4++] = FUNC_2(VAR_5 & 0xF);
      } else {
         VAR_1[VAR_4++] = VAR_5;
      }
   }

   return VAR_4;
}
