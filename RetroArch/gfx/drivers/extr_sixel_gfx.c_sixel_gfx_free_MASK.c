
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sixel_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
   sixel_t *VAR_3 = (sixel_t*)VAR_2;

   FUNC_2("\033\\");

   if (VAR_0)
   {
      FUNC_1(VAR_0);
      VAR_0 = ((void*)0);
   }

   if (VAR_1)
   {
      FUNC_1(VAR_1);
      VAR_1 = ((void*)0);
   }

   FUNC_0();

   if (VAR_3)
      FUNC_1(VAR_3);
}
