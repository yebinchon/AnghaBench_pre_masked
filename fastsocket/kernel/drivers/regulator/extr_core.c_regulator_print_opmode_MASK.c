
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;






 int FUNC_0 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 131:
  return FUNC_0(VAR_0, "fast\n");
 case 129:
  return FUNC_0(VAR_0, "normal\n");
 case 130:
  return FUNC_0(VAR_0, "idle\n");
 case 128:
  return FUNC_0(VAR_0, "standby\n");
 }
 return FUNC_0(VAR_0, "unknown\n");
}
