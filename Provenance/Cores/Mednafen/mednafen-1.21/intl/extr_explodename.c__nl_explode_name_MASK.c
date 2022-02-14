
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

int
FUNC_5 (char *VAR_4,
    const char **VAR_5, const char **VAR_6,
    const char **VAR_7, const char **VAR_8,
    const char **VAR_9)
{
  char *VAR_10;
  int VAR_11;

  *VAR_6 = ((void*)0);
  *VAR_7 = ((void*)0);
  *VAR_8 = ((void*)0);
  *VAR_9 = ((void*)0);



  VAR_11 = 0;
  *VAR_5 = VAR_10 = VAR_4;
  VAR_10 = FUNC_0 (*VAR_5);

  if (*VAR_5 == VAR_10)


    VAR_10 = FUNC_3 (*VAR_5, '\0');
  else
    {
      if (VAR_10[0] == '_')
 {

   VAR_10[0] = '\0';
   *VAR_7 = ++VAR_10;

   while (VAR_10[0] != '\0' && VAR_10[0] != '.' && VAR_10[0] != '@')
     ++VAR_10;

   VAR_11 |= VAR_3;
 }

      if (VAR_10[0] == '.')
 {

   VAR_10[0] = '\0';
   *VAR_8 = ++VAR_10;

   while (VAR_10[0] != '\0' && VAR_10[0] != '@')
     ++VAR_10;

   VAR_11 |= VAR_0;

   if (*VAR_8 != VAR_10 && (*VAR_8)[0] != '\0')
     {
       *VAR_9 = FUNC_1 (*VAR_8,
          VAR_10 - *VAR_8);
       if (*VAR_9 == ((void*)0))
  return -1;
       else if (FUNC_4 (*VAR_8, *VAR_9) == 0)
  FUNC_2 ((char *) *VAR_9);
       else
  VAR_11 |= VAR_2;
     }
 }
    }

  if (VAR_10[0] == '@')
    {

      VAR_10[0] = '\0';
      *VAR_6 = ++VAR_10;

      if (VAR_10[0] != '\0')
 VAR_11 |= VAR_1;
    }

  if (*VAR_7 != ((void*)0) && (*VAR_7)[0] == '\0')
    VAR_11 &= ~VAR_3;

  if (*VAR_8 != ((void*)0) && (*VAR_8)[0] == '\0')
    VAR_11 &= ~VAR_0;

  return VAR_11;
}
