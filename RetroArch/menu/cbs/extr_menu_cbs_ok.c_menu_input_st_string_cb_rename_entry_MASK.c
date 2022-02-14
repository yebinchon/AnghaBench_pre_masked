
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {char* label; int member_0; } ;


 int FUNC_0 (int *,int ,struct playlist_entry*) ;
 int FUNC_1 () ;
 char* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0,
      const char *VAR_1)
{
   if (VAR_1 && *VAR_1)
   {
      const char *VAR_2 = FUNC_2();

      if (!FUNC_4(VAR_2))
      {
         struct playlist_entry VAR_3 = {0};


         VAR_3.label = (char*)VAR_2;

         FUNC_0(((void*)0),
               FUNC_3(),
               &VAR_3);
      }
   }

   FUNC_1();
}
