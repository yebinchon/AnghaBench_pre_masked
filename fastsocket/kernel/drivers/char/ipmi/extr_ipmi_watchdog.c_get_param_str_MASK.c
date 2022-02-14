
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int arg; } ;
typedef int (* action_fn ) (int *,char*) ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, struct kernel_param *VAR_1)
{
 action_fn VAR_2 = (action_fn) VAR_1->arg;
 int VAR_3;

 VAR_3 = VAR_2(((void*)0), VAR_0);
 if (VAR_3)
  return VAR_3;
 return FUNC_0(VAR_0);
}
