
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int FUNC_0 (char const*,struct kernel_param*) ;
 int FUNC_1 (unsigned int*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, struct kernel_param *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1((unsigned *)VAR_1->arg);

 return 0;
}
