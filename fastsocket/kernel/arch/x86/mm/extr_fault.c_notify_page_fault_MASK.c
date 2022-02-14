
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 scalar_t__ FUNC_0 (struct pt_regs*,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct pt_regs*) ;

__attribute__((used)) static inline int FUNC_6(struct pt_regs *VAR_0)
{
 int VAR_1 = 0;


 if (FUNC_2() && !FUNC_5(VAR_0)) {
  FUNC_3();
  if (FUNC_1() && FUNC_0(VAR_0, 14))
   VAR_1 = 1;
  FUNC_4();
 }

 return VAR_1;
}
