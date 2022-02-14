
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (int) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (unsigned char) ;

const char *
FUNC_6 (const char *VAR_0, size_t VAR_1)
{
  size_t VAR_2 = 0;
  int VAR_3 = 1;
  char *VAR_4;
  char *VAR_5;
  size_t VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
    if (FUNC_0 ((unsigned char) VAR_0[VAR_6]))
      {
 ++VAR_2;

 if (FUNC_1 ((unsigned char) VAR_0[VAR_6]))
   VAR_3 = 0;
      }

  VAR_4 = (char *) FUNC_3 ((VAR_3 ? 3 : 0) + VAR_2 + 1);

  if (VAR_4 != ((void*)0))
    {
      if (VAR_3)
 VAR_5 = FUNC_4 (VAR_4, "iso");
      else
 VAR_5 = VAR_4;

      for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
 if (FUNC_1 ((unsigned char) VAR_0[VAR_6]))
   *VAR_5++ = FUNC_5 ((unsigned char) VAR_0[VAR_6]);
 else if (FUNC_2 ((unsigned char) VAR_0[VAR_6]))
   *VAR_5++ = VAR_0[VAR_6];

      *VAR_5 = '\0';
    }

  return (const char *) VAR_4;
}
