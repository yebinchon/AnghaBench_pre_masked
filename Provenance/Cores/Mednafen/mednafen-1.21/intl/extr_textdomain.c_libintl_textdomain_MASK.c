
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;

char *
FUNC_8 (const char *VAR_4)
{
  char *VAR_5;
  char *VAR_6;


  if (VAR_4 == ((void*)0))
    return (char *) VAR_0;

  FUNC_2 (VAR_3);

  VAR_6 = (char *) VAR_0;


  if (VAR_4[0] == '\0'
      || FUNC_5 (VAR_4, VAR_1) == 0)
    {
      VAR_0 = VAR_1;
      VAR_5 = (char *) VAR_0;
    }
  else if (FUNC_5 (VAR_4, VAR_6) == 0)


    VAR_5 = VAR_6;
  else
    {






      size_t VAR_7 = FUNC_7 (VAR_4) + 1;
      VAR_5 = (char *) FUNC_3 (VAR_7);
      if (VAR_5 != ((void*)0))
 FUNC_4 (VAR_5, VAR_4, VAR_7);


      if (VAR_5 != ((void*)0))
 VAR_0 = VAR_5;
    }




  if (VAR_5 != ((void*)0))
    {
      ++VAR_2;

      if (VAR_6 != VAR_5 && VAR_6 != VAR_1)
 FUNC_0 (VAR_6);
    }

  FUNC_1 (VAR_3);

  return VAR_5;
}
