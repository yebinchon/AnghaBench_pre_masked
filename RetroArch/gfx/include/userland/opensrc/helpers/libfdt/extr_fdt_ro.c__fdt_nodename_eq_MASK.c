
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* FUNC_0 (void const*,scalar_t__,int) ;
 int FUNC_1 (char const*,char,int) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const void *VAR_1, int VAR_2,
       const char *VAR_3, int VAR_4)
{
 const char *VAR_5 = FUNC_0(VAR_1, VAR_2 + VAR_0, VAR_4+1);

 if (! VAR_5)

  return 0;

 if (FUNC_2(VAR_5, VAR_3, VAR_4) != 0)
  return 0;

 if (VAR_5[VAR_4] == '\0')
  return 1;
 else if (!FUNC_1(VAR_3, '@', VAR_4) && (VAR_5[VAR_4] == '@'))
  return 1;
 else
  return 0;
}
