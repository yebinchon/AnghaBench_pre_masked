
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char const* VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,char*,char*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (size_t) ;
 int FUNC_9 (char*,char const*,size_t) ;
 int FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 (char*,size_t) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (char*,char*) ;
 size_t FUNC_14 (char const*) ;
 int FUNC_15 (int,int *) ;

__attribute__((used)) static const char *
FUNC_16 (void)
{
  const char *VAR_7;

  VAR_7 = VAR_6;
  if (VAR_7 == ((void*)0))
    {

      const char *VAR_8;
      const char *VAR_9 = "charset.alias";
      char *VAR_10;



      VAR_8 = FUNC_7 ("CHARSETALIASDIR");
      if (VAR_8 == ((void*)0) || VAR_8[0] == '\0')
        VAR_8 = FUNC_12 (VAR_3);


      {
        size_t VAR_11 = FUNC_14 (VAR_8);
        size_t VAR_12 = FUNC_14 (VAR_9);
        int VAR_13 = (VAR_11 > 0 && !FUNC_0 (VAR_8[VAR_11 - 1]));
        VAR_10 = (char *) FUNC_8 (VAR_11 + VAR_13 + VAR_12 + 1);
        if (VAR_10 != ((void*)0))
          {
            FUNC_9 (VAR_10, VAR_8, VAR_11);
            if (VAR_13)
              VAR_10[VAR_11] = VAR_0;
            FUNC_9 (VAR_10 + VAR_11 + VAR_13, VAR_9, VAR_12 + 1);
          }
      }

      if (VAR_10 == ((void*)0))

        VAR_7 = "";
      else
        {
          int VAR_14;
          VAR_14 = FUNC_10 (VAR_10,
                     VAR_5 | (VAR_2 ? VAR_4 : 0));
          if (VAR_14 < 0)

            VAR_7 = "";
          else
            {
              FILE *VAR_15;

              VAR_15 = FUNC_3 (VAR_14, "r");
              if (VAR_15 == ((void*)0))
                {

                  FUNC_1 (VAR_14);
                  VAR_7 = "";
                }
              else
                {

                  char *VAR_16 = ((void*)0);
                  size_t VAR_17 = 0;

                  for (;;)
                    {
                      int VAR_18;
                      char VAR_19[50+1];
                      char VAR_20[50+1];
                      size_t VAR_21, VAR_22;
                      char *VAR_23;

                      VAR_18 = FUNC_6 (VAR_15);
                      if (VAR_18 == VAR_1)
                        break;
                      if (VAR_18 == '\n' || VAR_18 == ' ' || VAR_18 == '\t')
                        continue;
                      if (VAR_18 == '#')
                        {

                          do
                            VAR_18 = FUNC_6 (VAR_15);
                          while (!(VAR_18 == VAR_1 || VAR_18 == '\n'));
                          if (VAR_18 == VAR_1)
                            break;
                          continue;
                        }
                      FUNC_15 (VAR_18, VAR_15);
                      if (FUNC_5 (VAR_15, "%50s %50s", VAR_19, VAR_20) < 2)
                        break;
                      VAR_21 = FUNC_14 (VAR_19);
                      VAR_22 = FUNC_14 (VAR_20);
                      VAR_23 = VAR_16;
                      if (VAR_17 == 0)
                        {
                          VAR_17 = VAR_21 + 1 + VAR_22 + 1;
                          VAR_16 = (char *) FUNC_8 (VAR_17 + 1);
                        }
                      else
                        {
                          VAR_17 += VAR_21 + 1 + VAR_22 + 1;
                          VAR_16 = (char *) FUNC_11 (VAR_16, VAR_17 + 1);
                        }
                      if (VAR_16 == ((void*)0))
                        {

                          VAR_17 = 0;
                          if (VAR_23 != ((void*)0))
                            FUNC_4 (VAR_23);
                          break;
                        }
                      FUNC_13 (VAR_16 + VAR_17 - (VAR_22 + 1) - (VAR_21 + 1), VAR_19);
                      FUNC_13 (VAR_16 + VAR_17 - (VAR_22 + 1), VAR_20);
                    }
                  FUNC_2 (VAR_15);
                  if (VAR_17 == 0)
                    VAR_7 = "";
                  else
                    {
                      *(VAR_16 + VAR_17) = '\0';
                      VAR_7 = VAR_16;
                    }
                }
            }

          FUNC_4 (VAR_10);
        }
      VAR_6 = VAR_7;
    }

  return VAR_7;
}
