
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, struct kernel_param *VAR_3)
{
 char *VAR_4;
 int VAR_5 = FUNC_0(VAR_2, &VAR_4, 0);
 int VAR_6 = VAR_5 * VAR_1;
 if (VAR_4 == VAR_2 || *VAR_4 || VAR_5 < 0 || VAR_6 < VAR_5)
  return -VAR_0;
 *((int *)VAR_3->arg) = VAR_6;
 return 0;
}
