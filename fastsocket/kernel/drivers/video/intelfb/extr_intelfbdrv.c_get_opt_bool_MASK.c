
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,int *,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static __inline__ int FUNC_3(const char *VAR_0, const char *VAR_1,
       int *VAR_2)
{
 if (!VAR_2)
  return 0;

 if (FUNC_0(VAR_0, VAR_1)) {
  if (VAR_0[FUNC_2(VAR_1)] == '=')
   *VAR_2 = FUNC_1(VAR_0 + FUNC_2(VAR_1) + 1,
           ((void*)0), 0);
  else
   *VAR_2 = 1;
 } else {
  if (FUNC_0(VAR_0, "no") && FUNC_0(VAR_0 + 2, VAR_1))
   *VAR_2 = 0;
  else
   return 0;
 }
 return 1;
}
