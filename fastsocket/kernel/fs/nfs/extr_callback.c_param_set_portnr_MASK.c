
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, struct kernel_param *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 if (!VAR_2)
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_2, 0, &VAR_4);
 if (VAR_5 == -VAR_0 || VAR_4 > VAR_1)
  return -VAR_0;
 *((unsigned int *)VAR_3->arg) = VAR_4;
 return 0;
}
