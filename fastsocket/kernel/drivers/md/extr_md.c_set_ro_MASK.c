
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char**,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, struct kernel_param *VAR_3)
{
 char *VAR_4;
 int VAR_5 = FUNC_0(VAR_2, &VAR_4, 10);
 if (*VAR_2 && (*VAR_4 == '\0' || *VAR_4 == '\n')) {
  VAR_1 = VAR_5;
  return 0;
 }
 return -VAR_0;
}
