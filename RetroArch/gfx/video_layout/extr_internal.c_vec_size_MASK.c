
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,size_t) ;

bool FUNC_1(void **VAR_0, size_t VAR_1, int VAR_2)
{
   const int VAR_3 = 4;

   if (--VAR_2 % VAR_3 == 0)
   {
      void *VAR_4 = FUNC_0(*VAR_0, VAR_1 * (VAR_2 + VAR_3));
      if (!VAR_4)
         return 0;
      *VAR_0 = VAR_4;
   }

   return 1;
}
