
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,int,char const*) ;

void __attribute__((noinline))
FUNC_2(
 const char *VAR_1,
 int VAR_2,
 const char *VAR_3
      )
{
 if (!VAR_0) {
  FUNC_0("%s:%d non-fatal Assertion: %s", VAR_1, VAR_2, VAR_3);
  return;
 }

 FUNC_1("%s:%d Assertion failed: %s", VAR_1, VAR_2, VAR_3);
}
