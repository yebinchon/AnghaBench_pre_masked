
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static void FUNC_4(char *VAR_0, int VAR_1, const char *VAR_2)
{
 FUNC_3(VAR_0 + VAR_1, VAR_2);
 if (FUNC_2(VAR_0))
  return;
 if (FUNC_1(VAR_0, 0777) < 0)
  FUNC_0("failed to create: %s\n", VAR_0);
}
