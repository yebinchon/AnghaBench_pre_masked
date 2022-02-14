
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static bool FUNC_4( const char *VAR_0, char **VAR_1 )
{
   if (*VAR_1)
      FUNC_0(*VAR_1);

   if (VAR_0)
   {
      size_t VAR_2 = FUNC_3(VAR_0) + 1;

      *VAR_1 = (char *)FUNC_1(VAR_2);
      if (!*VAR_1)
         return 0;

      FUNC_2(*VAR_1, VAR_0, VAR_2);
   } else
      *VAR_1 = ((void*)0);

   return 1;
}
