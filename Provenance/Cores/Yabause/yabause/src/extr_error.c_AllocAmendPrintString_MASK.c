
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, const char *VAR_1)
{
   char *VAR_2;

   if ((VAR_2 = (char *)FUNC_2(FUNC_4(VAR_0) + FUNC_4(VAR_1) + 2)) == ((void*)0))
      return;

   FUNC_3(VAR_2, "%s%s\n", VAR_0, VAR_1);
   FUNC_0(VAR_2);

   FUNC_1(VAR_2);
}
