
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

const char *
FUNC_2 (int VAR_0, const char *VAR_1)
{
  const char *VAR_2;


  VAR_2 = FUNC_0 ("LC_ALL");
  if (VAR_2 != ((void*)0) && VAR_2[0] != '\0')
    return VAR_2;

  VAR_2 = FUNC_0 (VAR_1);
  if (VAR_2 != ((void*)0) && VAR_2[0] != '\0')
    return VAR_2;

  VAR_2 = FUNC_0 ("LANG");
  if (VAR_2 != ((void*)0) && VAR_2[0] != '\0')
    {
        return VAR_2;
    }

  return ((void*)0);
}
