
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intfstream_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char const**) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(intfstream_t *VAR_1, char *VAR_2)
{
  const char *VAR_3 = ((void*)0);


  if (FUNC_5(VAR_1, &VAR_3) < 0)
  {

    if (FUNC_4(VAR_1, VAR_2))
    {

      FUNC_0("%s '%s'\n", FUNC_6(VAR_0), VAR_2);
      return 0;
    }


    return 0;
  }

  if (FUNC_7(VAR_3, "psp"))
  {
    if (FUNC_3(VAR_1, VAR_2) == 0)
      return 0;
    FUNC_0("%s '%s'\n", FUNC_6(VAR_0), VAR_2);
  }
  else if (FUNC_7(VAR_3, "ps1"))
  {
    if (FUNC_2(VAR_1, VAR_2) == 0)
      return 0;
    FUNC_0("%s '%s'\n", FUNC_6(VAR_0), VAR_2);
  }
  else if (FUNC_7(VAR_3, "gc"))
  {
    if (FUNC_1(VAR_1, VAR_2) == 0)
      return 0;
    FUNC_0("%s '%s'\n", FUNC_6(VAR_0), VAR_2);
  }
  else {
    return 0;
  }

  return 1;
}
