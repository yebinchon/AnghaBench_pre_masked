
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DTBLOB_T ;


 void* FUNC_0 (int *,int,char*,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int FUNC_2(DTBLOB_T *VAR_0, int VAR_1)
{
   if (VAR_1 >= 0)
   {
      const void *VAR_2 = FUNC_0(VAR_0, VAR_1, "status", ((void*)0));
      if (VAR_2 &&
          ((FUNC_1((const char *)VAR_2, "okay") == 0) ||
           (FUNC_1((const char *)VAR_2, "ok") == 0)))
         return 1;
   }
   return 0;
}
