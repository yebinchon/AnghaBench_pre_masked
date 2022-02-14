
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;

char *
FUNC_4 (const char *VAR_0)
{
 char *VAR_1, *VAR_2;

 VAR_1 = FUNC_1 ((const char *) ((void*)0));
 if (VAR_1 == (char *) ((void*)0)) {

  if (VAR_0 != (const char *) ((void*)0))
   return FUNC_3 (VAR_0);
  else
   return (char *) ((void*)0);
 }

 VAR_2 = FUNC_0 (VAR_1, "share");
 FUNC_2 (VAR_1);
 return VAR_2;
}
