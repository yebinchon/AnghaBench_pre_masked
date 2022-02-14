
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_0 ;
 double FUNC_2 (char const*,char**) ;

__attribute__((used)) static double
FUNC_3(const char *VAR_1)
{
   char *VAR_2 = ((void*)0);
   double VAR_3 = FUNC_2(VAR_1, &VAR_2);

   if (VAR_2 != ((void*)0) && *VAR_2 == 0)
      return VAR_3;

   FUNC_1(VAR_0, "genpng: invalid coordinate value %s\n", VAR_1);
   FUNC_0(1);
}
