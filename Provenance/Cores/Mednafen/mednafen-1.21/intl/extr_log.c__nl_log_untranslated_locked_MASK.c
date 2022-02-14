
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;
 int * VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,char const*,char const*) ;
 int FUNC_6 (char,int *) ;
 char* FUNC_7 (char const*,int ) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static inline void
FUNC_11 (const char *VAR_3, const char *VAR_4,
                             const char *VAR_5, const char *VAR_6, int VAR_7)
{
  FILE *VAR_8;
  const char *VAR_9;


  if (VAR_2 == ((void*)0) || FUNC_8 (VAR_3, VAR_2) != 0)
    {

      if (VAR_2 != ((void*)0))
        {
          if (VAR_1 != ((void*)0))
            {
              FUNC_0 (VAR_1);
              VAR_1 = ((void*)0);
            }
          FUNC_3 (VAR_2);
          VAR_2 = ((void*)0);
        }

      VAR_2 = (char *) FUNC_4 (FUNC_10 (VAR_3) + 1);
      if (VAR_2 == ((void*)0))
        return;
      FUNC_9 (VAR_2, VAR_3);
      VAR_1 = FUNC_1 (VAR_3, "a");
      if (VAR_1 == ((void*)0))
        return;
    }
  VAR_8 = VAR_1;

  FUNC_2 (VAR_8, "domain ");
  FUNC_5 (VAR_8, VAR_4, VAR_4 + FUNC_10 (VAR_4));
  VAR_9 = FUNC_7 (VAR_5, VAR_0);
  if (VAR_9 != ((void*)0))
    {

      FUNC_2 (VAR_8, "\nmsgctxt ");
      FUNC_5 (VAR_8, VAR_5, VAR_9);
      VAR_5 = VAR_9 + 1;
    }
  FUNC_2 (VAR_8, "\nmsgid ");
  FUNC_5 (VAR_8, VAR_5, VAR_5 + FUNC_10 (VAR_5));
  if (VAR_7)
    {
      FUNC_2 (VAR_8, "\nmsgid_plural ");
      FUNC_5 (VAR_8, VAR_6, VAR_6 + FUNC_10 (VAR_6));
      FUNC_2 (VAR_8, "\nmsgstr[0] \"\"\n");
    }
  else
    FUNC_2 (VAR_8, "\nmsgstr \"\"\n");
  FUNC_6 ('\n', VAR_8);
}
