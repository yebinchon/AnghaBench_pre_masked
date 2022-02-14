
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ ip; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

int FUNC_1(int VAR_0, struct pt_regs *VAR_1)
{
 if (VAR_0 == 3 && FUNC_0(VAR_1->ip - 1)) {
  VAR_1->ip -= 1;
  return 1;
 }
 return 0;
}
