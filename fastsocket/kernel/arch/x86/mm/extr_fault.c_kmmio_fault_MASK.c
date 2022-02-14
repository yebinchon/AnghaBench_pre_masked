
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct pt_regs *VAR_0, unsigned long VAR_1)
{
 if (FUNC_2(FUNC_0()))
  if (FUNC_1(VAR_0, VAR_1) == 1)
   return -1;
 return 0;
}
