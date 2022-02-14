
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*) ;

bool FUNC_4(const char *VAR_0, const char *VAR_1)
{
   int VAR_2 = 0;
   if (FUNC_2(VAR_1))
      FUNC_1(VAR_1);

   VAR_2 = FUNC_3(VAR_0, VAR_1);
   if (!VAR_2)
      return 1;

   FUNC_0("Error %d renaming file %s\n", VAR_2, VAR_0);
   return 0;
}
