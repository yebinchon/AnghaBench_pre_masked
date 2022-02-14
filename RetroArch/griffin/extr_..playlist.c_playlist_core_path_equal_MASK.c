
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entry_real_core_path ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_1, const char *VAR_2)
{
   char VAR_3[VAR_0];

   VAR_3[0] = '\0';


   if (FUNC_1(VAR_1) || FUNC_1(VAR_2))
      return 0;


   FUNC_4(VAR_3, VAR_2, sizeof(VAR_3));
   if (!FUNC_2(VAR_3, "DETECT"))
      FUNC_0(VAR_3, sizeof(VAR_3), 1);

   if (FUNC_1(VAR_3))
      return 0;






   if (FUNC_2(VAR_1, VAR_3))
      return 1;


   return 0;
}
