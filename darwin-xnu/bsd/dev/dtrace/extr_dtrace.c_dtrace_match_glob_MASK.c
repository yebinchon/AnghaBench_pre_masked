
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 const char *VAR_4;
 char VAR_5, VAR_6;
 int VAR_7;

 if (VAR_3 > VAR_0)
  return (-1);

 if (VAR_1 == ((void*)0))
  VAR_1 = "";

top:
 VAR_4 = VAR_1;
 VAR_5 = *VAR_1++;

 if (VAR_2 == ((void*)0))
  return (0);

 if ((VAR_6 = *VAR_2++) == '\0')
  return (VAR_5 == '\0');

 switch (VAR_6) {
 case '[': {
  int VAR_8 = 0, VAR_9 = 0;
  char VAR_10 = '\0';

  if (VAR_5 == '\0')
   return (0);

  if (*VAR_2 == '!') {
   VAR_9 = 1;
   VAR_2++;
  }

  if ((VAR_6 = *VAR_2++) == '\0')
   return (0);

  do {
   if (VAR_6 == '-' && VAR_10 != '\0' && *VAR_2 != ']') {
    if ((VAR_6 = *VAR_2++) == '\0')
     return (0);
    if (VAR_6 == '\\' && (VAR_6 = *VAR_2++) == '\0')
     return (0);

    if (VAR_9) {
     if (VAR_5 < VAR_10 || VAR_5 > VAR_6)
      VAR_8++;
     else
      return (0);
    } else if (VAR_10 <= VAR_5 && VAR_5 <= VAR_6)
     VAR_8++;

   } else if (VAR_6 == '\\' && (VAR_6 = *VAR_2++) == '\0')
    return (0);

   VAR_10 = VAR_6;

   if (VAR_9) {
    if (VAR_5 != VAR_6)
     VAR_8++;
    else
     return (0);
   } else if (VAR_5 == VAR_6)
    VAR_8++;

   if ((VAR_6 = *VAR_2++) == '\0')
    return (0);

  } while (VAR_6 != ']');

  if (VAR_8)
   goto top;

  return (0);
 }

 case '\\':
  if ((VAR_6 = *VAR_2++) == '\0')
   return (0);


 default:
  if (VAR_6 != VAR_5)
   return (0);


 case '?':
  if (VAR_5 != '\0')
   goto top;
  return (0);

 case '*':
  while (*VAR_2 == '*')
   VAR_2++;

  if (*VAR_2 == '\0')
   return (1);

  for (VAR_1 = VAR_4; *VAR_1 != '\0'; VAR_1++) {
   if ((VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3 + 1)) != 0)
    return (VAR_7);
  }

  return (0);
 }
}
