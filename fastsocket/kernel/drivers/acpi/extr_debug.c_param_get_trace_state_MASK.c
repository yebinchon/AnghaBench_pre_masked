
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_2, struct kernel_param *VAR_3)
{
 if (!VAR_1)
  return FUNC_0(VAR_2, "disable");
 else {
  if (VAR_0 & 1)
   return FUNC_0(VAR_2, "1");
  else
   return FUNC_0(VAR_2, "enable");
 }
 return 0;
}
