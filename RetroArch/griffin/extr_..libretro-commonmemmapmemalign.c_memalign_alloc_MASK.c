
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;

void *FUNC_1(size_t VAR_0, size_t VAR_1)
{
   void **VAR_2 = ((void*)0);
   uintptr_t VAR_3 = 0;
   void *VAR_4 = (void*)FUNC_0(VAR_0 + VAR_1 + sizeof(uintptr_t));
   if (!VAR_4)
      return ((void*)0);

   VAR_3 = ((uintptr_t)VAR_4 + sizeof(uintptr_t) + VAR_0)
      & ~(VAR_0 - 1);
   VAR_2 = (void**)VAR_3;
   VAR_2[-1] = VAR_4;

   return (void*)VAR_3;
}
