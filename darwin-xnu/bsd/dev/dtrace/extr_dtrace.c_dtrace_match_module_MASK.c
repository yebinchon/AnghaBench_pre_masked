
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, const char *VAR_1, int VAR_2)
{
#pragma unused(depth)
 size_t VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1, VAR_0, VAR_3) != 0)
  return (0);

 if (VAR_0[VAR_3] == '.' || VAR_0[VAR_3] == '\0')
  return (1);

 return (0);
}
