
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 () ;
 char* FUNC_1 (int,char const*) ;
 char* FUNC_2 (int,char const*) ;

const char *
FUNC_3 (int VAR_0, const char *VAR_1)
{
  const char *VAR_2;

  VAR_2 = FUNC_2 (VAR_0, VAR_1);
  if (VAR_2 != ((void*)0))
    return VAR_2;

  VAR_2 = FUNC_1 (VAR_0, VAR_1);
  if (VAR_2 != ((void*)0))
    return VAR_2;

  return FUNC_0 ();
}
