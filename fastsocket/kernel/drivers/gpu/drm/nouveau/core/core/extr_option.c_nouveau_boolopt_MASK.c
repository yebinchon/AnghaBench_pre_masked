
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*,int*) ;
 int FUNC_1 (char const*,char*,int) ;

bool
FUNC_2(const char *VAR_0, const char *VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_0 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (VAR_0) {
  if (!FUNC_1(VAR_0, "0", VAR_3) ||
      !FUNC_1(VAR_0, "no", VAR_3) ||
      !FUNC_1(VAR_0, "off", VAR_3) ||
      !FUNC_1(VAR_0, "false", VAR_3))
   VAR_2 = 0;
  else
  if (!FUNC_1(VAR_0, "1", VAR_3) ||
      !FUNC_1(VAR_0, "yes", VAR_3) ||
      !FUNC_1(VAR_0, "on", VAR_3) ||
      !FUNC_1(VAR_0, "true", VAR_3))
   VAR_2 = 1;
 }

 return VAR_2;
}
