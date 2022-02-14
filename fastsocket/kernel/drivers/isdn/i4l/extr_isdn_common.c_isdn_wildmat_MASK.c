
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, char *VAR_1)
{
 register int VAR_2;
 register int VAR_3;
 register int VAR_4;
 register int VAR_5 = 1;

 if (!(*VAR_0) && !(*VAR_1))
  return(1);
 for (; *VAR_1; VAR_0++, VAR_1++)
  switch (*VAR_1) {
   case '\\':




    VAR_1++;
   default:
    if (*VAR_0 != *VAR_1)
     return (*VAR_0 == '\0')?2:1;
    continue;
   case '?':

    if (*VAR_0 == '\0')
     return (2);
    continue;
   case '*':
    VAR_5 = 0;

    return (*++VAR_1 ? FUNC_0(VAR_0, VAR_1) : 0);
   case '[':

    if ((VAR_4 = (VAR_1[1] == '^')))
     VAR_1++;
    for (VAR_2 = 0, VAR_3 = 0; *++VAR_1 && (*VAR_1 != ']'); VAR_2 = *VAR_1)

     if (*VAR_1 == '-' ? *VAR_0 <= *++VAR_1 && *VAR_0 >= VAR_2 : *VAR_0 == *VAR_1)
      VAR_3 = 1;
    if (VAR_3 == VAR_4)
     return (1);
    continue;
  }
 return (*VAR_0 == '\0')?0:VAR_5;
}
