
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int DTBLOB_T ;


 int FUNC_0 (char*,char const*) ;
 int * FUNC_1 (int *,int) ;
 int * FUNC_2 (char const*,char*) ;

DTBLOB_T *FUNC_3(const char *VAR_0, int VAR_1)
{
   FILE *VAR_2 = FUNC_2(VAR_0, "rb");
   if (VAR_2)
      return FUNC_1(VAR_2, VAR_1);
   FUNC_0("Failed to open '%s'", VAR_0);
   return ((void*)0);
}
