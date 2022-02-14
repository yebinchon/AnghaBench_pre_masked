
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cp ;
typedef int buf ;
typedef int ULONG ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int*,int*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 char* FUNC_2 () ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ,int *) ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char const*,char) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const*) ;

const char *
FUNC_11 (void)
{
  const char *VAR_2;
  const char *VAR_3;
  const char *VAR_4 = ((void*)0);
  if (VAR_4 == ((void*)0) || VAR_4[0] == '\0')
    {
      VAR_4 = FUNC_3 ("LC_ALL");
      if (VAR_4 == ((void*)0) || VAR_4[0] == '\0')
        {
          VAR_4 = FUNC_3 ("LC_CTYPE");
          if (VAR_4 == ((void*)0) || VAR_4[0] == '\0')
            VAR_4 = FUNC_3 ("LANG");
        }
    }




  VAR_2 = VAR_4;
  if (VAR_2 == ((void*)0))

    VAR_2 = "";


  for (VAR_3 = FUNC_2 ();
       *VAR_3 != '\0';
       VAR_3 += FUNC_10 (VAR_3) + 1, VAR_3 += FUNC_10 (VAR_3) + 1)
    if (FUNC_9 (VAR_2, VAR_3) == 0
        || (VAR_3[0] == '*' && VAR_3[1] == '\0'))
      {
        VAR_2 = VAR_3 + FUNC_10 (VAR_3) + 1;
        break;
      }




  if (VAR_2[0] == '\0')
    VAR_2 = "ASCII";

  return VAR_2;
}
