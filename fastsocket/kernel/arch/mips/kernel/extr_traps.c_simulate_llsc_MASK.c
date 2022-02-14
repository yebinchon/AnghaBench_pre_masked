
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct pt_regs*,unsigned int) ;
 int FUNC_1 (struct pt_regs*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pt_regs *VAR_3, unsigned int VAR_4)
{
 if ((VAR_4 & VAR_1) == VAR_0)
  return FUNC_0(VAR_3, VAR_4);
 if ((VAR_4 & VAR_1) == VAR_2)
  return FUNC_1(VAR_3, VAR_4);

 return -1;
}
