
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

__attribute__((used)) static char *FUNC_1(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 if (*VAR_0 == '[') {

  VAR_2 = FUNC_0(VAR_0, ']');
  if (VAR_2 != ((void*)0) && ++VAR_2 < VAR_1 && *VAR_2 == ':')
   return VAR_2 + 1;
 } else {

  VAR_2 = FUNC_0(VAR_0, ':');
  if (VAR_2 != ((void*)0) && VAR_2 < VAR_1)
   return VAR_2 + 1;
 }
 return ((void*)0);
}
