
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char const VAR_0 ;
 int FUNC_0 (int *,char*,char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char const,int *) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, FILE *VAR_2)



{
   for (; *VAR_1; ++VAR_1)
      if (FUNC_1(VAR_0 & *VAR_1))
         FUNC_3(*VAR_1, VAR_2);

      else if (FUNC_2(VAR_0 & *VAR_1))
         FUNC_3('_', VAR_2);

      else
         FUNC_0(VAR_2, "\\%.3o", *VAR_1);
}
