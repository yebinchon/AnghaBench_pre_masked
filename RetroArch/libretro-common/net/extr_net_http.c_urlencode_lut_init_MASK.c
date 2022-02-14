
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int* VAR_0 ;
 int VAR_1 ;

void FUNC_1(void)
{
   unsigned VAR_2;

   VAR_1 = 1;

   for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
   {
      VAR_0[VAR_2] = FUNC_0(VAR_2) || VAR_2 == '*' || VAR_2 == '-' || VAR_2 == '.' || VAR_2 == '_' || VAR_2 == '/' ? VAR_2 : 0;
   }
}
