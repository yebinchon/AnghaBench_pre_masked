
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 double FUNC_3 (char const*,char**) ;

__attribute__((used)) static double
FUNC_4(const char *VAR_1)
{
   if (FUNC_2(VAR_1, "filled") == 0)
      return 0;

   else
   {
      char *VAR_2 = ((void*)0);
      double VAR_3 = FUNC_3(VAR_1, &VAR_2);

      if (VAR_2 != ((void*)0) && *VAR_2 == 0 && VAR_3 > 0)
         return VAR_3;
   }

   FUNC_1(VAR_0, "genpng: invalid line width %s\n", VAR_1);
   FUNC_0(1);
}
