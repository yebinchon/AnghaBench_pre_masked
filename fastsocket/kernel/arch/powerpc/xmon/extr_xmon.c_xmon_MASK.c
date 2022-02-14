
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*,int ) ;

int FUNC_2(struct pt_regs *VAR_0)
{
 struct pt_regs VAR_1;

 if (VAR_0 == ((void*)0)) {
  FUNC_0(&VAR_1);
  VAR_0 = &VAR_1;
 }

 return FUNC_1(VAR_0, 0);
}
