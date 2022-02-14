
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4 (const char *VAR_0, size_t VAR_1)
{
 char *VAR_2 = (char *) ((void*)0);
 size_t VAR_3;

 if (VAR_0 == (const char *) ((void*)0))
  return (char *) ((void*)0);

 VAR_3 = FUNC_3 (VAR_0);
 if (VAR_3 == 0)
  return FUNC_2 ("");
 if (VAR_1 > VAR_3)
  VAR_1 = VAR_3;

 VAR_2 = (char *) FUNC_0 (VAR_3 + 1);
 FUNC_1 (VAR_2, VAR_0, VAR_1);
 VAR_2[VAR_1] = '\0';
 return VAR_2;
}
