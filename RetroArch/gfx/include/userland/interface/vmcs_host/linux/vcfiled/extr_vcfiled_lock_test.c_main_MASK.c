
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int ) ;

int FUNC_7(int VAR_1, const char **VAR_2)
{
   if (VAR_1 != 3)
   {
      FUNC_4(VAR_2[0]);
   }
   const char *VAR_3 = VAR_2[2];
   if (FUNC_3(VAR_2[1], "lock") == 0)
   {
      int VAR_4 = FUNC_6(VAR_3, VAR_0);
      if (VAR_4)
      {
         FUNC_1("failed to lock %s\n", VAR_3);
         FUNC_0(1);
      }
      FUNC_2(300);
   }
   else if (FUNC_3(VAR_2[1], "check") == 0)
   {
      FUNC_1("%s\n",
             FUNC_5(VAR_3) ?
             "running" : "not running");
   }
   else
   {
      FUNC_4(VAR_2[0]);
   }
   return 0;
}
