
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* FUNC_0 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static __attribute__((constructor)) void
FUNC_5 ()
{
  char *VAR_8 = FUNC_0 ("UNIXROOT");
  char *VAR_9 = FUNC_0 ("GNULOCALEDIR");

  VAR_4 = VAR_9;
  if (!VAR_4)
    {
      if (VAR_8)
        {
          size_t VAR_10 = FUNC_4 (VAR_8);
          VAR_4 = (char *) FUNC_1 (VAR_10 + FUNC_4 (VAR_0) + 1);
          FUNC_2 (VAR_4, VAR_8, VAR_10);
          FUNC_2 (VAR_4 + VAR_10, VAR_0, FUNC_4 (VAR_0) + 1);
        }
      else
        VAR_4 = VAR_0;
    }

  VAR_5 = VAR_9;
  if (!VAR_5)
    {
      if (VAR_8)
        {
          size_t VAR_11 = FUNC_4 (VAR_8);
          VAR_5 = (char *) FUNC_1 (VAR_11 + FUNC_4 (VAR_2) + 1);
          FUNC_2 (VAR_5, VAR_8, VAR_11);
          FUNC_2 (VAR_5 + VAR_11, VAR_2, FUNC_4 (VAR_2) + 1);
        }
     else
        VAR_5 = VAR_2;
    }

  VAR_6 = VAR_9;
  if (!VAR_6)
    {
      if (VAR_8)
        {
          size_t VAR_12 = FUNC_4 (VAR_8);
          VAR_6 = (char *) FUNC_1 (VAR_12 + FUNC_4 (VAR_1) + 1);
          FUNC_2 (VAR_6, VAR_8, VAR_12);
          FUNC_2 (VAR_6 + VAR_12, VAR_1, FUNC_4 (VAR_1) + 1);
        }
      else
        VAR_6 = VAR_1;
    }

  if (FUNC_4 (VAR_6) <= VAR_3)
    FUNC_3 (VAR_7, VAR_6);
}
