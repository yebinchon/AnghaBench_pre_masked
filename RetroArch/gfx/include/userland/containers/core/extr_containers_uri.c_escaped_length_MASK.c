
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int RESERVED_CHARS_TABLE_T ;


 scalar_t__ FUNC_0 (char,int ) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static uint32_t FUNC_2( const char *VAR_0, RESERVED_CHARS_TABLE_T VAR_1 )
{
   uint32_t VAR_2;
   uint32_t VAR_3 = 0;
   char VAR_4;

   for (VAR_2 = FUNC_1(VAR_0); VAR_2 > 0; VAR_2--)
   {
      VAR_4 = *VAR_0++;
      if (FUNC_0(VAR_4, VAR_1))
      {

         VAR_3 += 3;
      } else {
         VAR_3++;
      }
   }

   return VAR_3;
}
