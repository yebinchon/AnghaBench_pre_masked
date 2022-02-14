
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(void)
{
  int VAR_0 = 0;
  char VAR_1[256];
  FUNC_0(VAR_1, sizeof(VAR_1), "%0*d%s", 2, 9, "foo");
  VAR_0 += FUNC_2(VAR_1, "09foo");

  FUNC_0(VAR_1, sizeof(VAR_1), "%*.*s", 5, 2, "foo");
  VAR_0 += FUNC_2(VAR_1, "   fo");

  FUNC_0(VAR_1, sizeof(VAR_1), "%*.*s", 2, 5, "foo");
  VAR_0 += FUNC_2(VAR_1, "foo");

  FUNC_0(VAR_1, sizeof(VAR_1), "%*.*s", 0, 10, "foo");
  VAR_0 += FUNC_2(VAR_1, "foo");

  FUNC_0(VAR_1, sizeof(VAR_1), "%-10s", "foo");
  VAR_0 += FUNC_2(VAR_1, "foo       ");

  FUNC_0(VAR_1, sizeof(VAR_1), "%10s", "foo");
  VAR_0 += FUNC_2(VAR_1, "       foo");

  FUNC_0(VAR_1, sizeof(VAR_1), "%*.*s", -10, -10, "foo");
  VAR_0 += FUNC_2(VAR_1, "foo       ");

  if(!VAR_0)
    FUNC_1("All curl_mprintf() strings tests OK!\n");
  else
    FUNC_1("Some curl_mprintf() string tests Failed!\n");

  return VAR_0;
}
