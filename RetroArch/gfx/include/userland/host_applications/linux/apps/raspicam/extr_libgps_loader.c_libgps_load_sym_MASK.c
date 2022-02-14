
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 void* FUNC_1 (void*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(void **VAR_1, void *VAR_2, char *VAR_3)
{
   char *VAR_4;

   *VAR_1 = FUNC_1(VAR_2, VAR_3);
   if ((VAR_4 = FUNC_0()) != ((void*)0))
   {
      FUNC_2(VAR_0, "%s\n", VAR_4);
      return -1;
   }
   return 0;
}
