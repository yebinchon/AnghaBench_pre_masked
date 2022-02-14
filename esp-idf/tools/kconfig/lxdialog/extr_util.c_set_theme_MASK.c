
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0)
{
 int VAR_1 = 1;
 if (!VAR_0)
  FUNC_1();
 else if (FUNC_3(VAR_0, "classic") == 0)
  FUNC_2();
 else if (FUNC_3(VAR_0, "bluetitle") == 0)
  FUNC_1();
 else if (FUNC_3(VAR_0, "blackbg") == 0)
  FUNC_0();
 else if (FUNC_3(VAR_0, "mono") == 0)
  VAR_1 = 0;

 return VAR_1;
}
