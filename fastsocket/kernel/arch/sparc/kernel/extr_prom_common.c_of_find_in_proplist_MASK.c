
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 while (VAR_2 > 0) {
  int VAR_3;

  if (!FUNC_0(VAR_0, VAR_1))
   return 1;
  VAR_3 = FUNC_1(VAR_0) + 1;
  VAR_0 += VAR_3;
  VAR_2 -= VAR_3;
 }
 return 0;
}
