
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char const*,int) ;

__attribute__((used)) static void FUNC_1( const char *VAR_0, uint32_t VAR_1, char *VAR_2 )
{
   uint32_t VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      char VAR_4 = *VAR_0++;

      if (VAR_4 == '%' && (VAR_3 + 2) < VAR_1 )
      {
         VAR_4 = (char)(FUNC_0(VAR_0, 2) & 0xFF);
         VAR_0 += 2;
         VAR_3 += 2;
      }
      *VAR_2++ = VAR_4;
   }

   *VAR_2 = '\0';
}
