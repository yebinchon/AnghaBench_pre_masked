
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int global_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char const*,int ) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(void *VAR_1)
{
   global_t *VAR_2 = (global_t*)VAR_1;
   if (FUNC_5(VAR_0))
   {
      FUNC_1("[config] Loading default config.\n");
   }

   {
      const char *VAR_3 = FUNC_4(VAR_0);
      FUNC_1("[config] loading config from: %s.\n", VAR_3);

      if (!FUNC_3(VAR_2, VAR_3, FUNC_2()))
      {
         FUNC_0("[config] couldn't find config at path: \"%s\"\n",
               VAR_3);
      }
   }
}
