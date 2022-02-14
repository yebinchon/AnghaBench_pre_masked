
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

bool FUNC_2(const char *VAR_0, int VAR_1)
{
 if (VAR_1 == 0) {
  VAR_1 = FUNC_0(VAR_0);
 }

 if ( FUNC_1(VAR_0, "atmp", 4) == 0
  || (VAR_1 > 4 && FUNC_1(VAR_0+VAR_1-4, ".bak", 4) == 0)
  || (VAR_1 > 4 && FUNC_1(VAR_0+VAR_1-4, ".tmp", 4) == 0)) {
  return 1;
 }

 return 0;
}
