
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct dyn_ftrace {int ip; } ;


 int FUNC_0 (struct dyn_ftrace*,unsigned long) ;
 int FUNC_1 (int ,int *,char*,int ) ;
 char* FUNC_2 () ;

int FUNC_3(struct module *VAR_0,
      struct dyn_ftrace *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_4 = FUNC_2();
 return FUNC_1(VAR_1->ip, ((void*)0), VAR_4, 0);
}
