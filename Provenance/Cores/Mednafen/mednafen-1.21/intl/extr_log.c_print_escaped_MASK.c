
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char const,int *) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_0, const char *VAR_1, const char *VAR_2)
{
  FUNC_1 ('"', VAR_0);
  for (; VAR_1 != VAR_2; VAR_1++)
    if (*VAR_1 == '\n')
      {
        FUNC_0 ("\\n\"", VAR_0);
        if (VAR_1 + 1 == VAR_2)
          return;
        FUNC_0 ("\n\"", VAR_0);
      }
    else
      {
        if (*VAR_1 == '"' || *VAR_1 == '\\')
          FUNC_1 ('\\', VAR_0);
        FUNC_1 (*VAR_1, VAR_0);
      }
  FUNC_1 ('"', VAR_0);
}
