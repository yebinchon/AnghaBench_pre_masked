
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0( char *VAR_0 )
{
   char VAR_1;

   while ((VAR_1 = *VAR_0) != '\0')
   {
      if (VAR_1 >= 'A' && VAR_1 <= 'Z')
         *VAR_0 = VAR_1 - 'A' + 'a';
      VAR_0++;
   }
}
