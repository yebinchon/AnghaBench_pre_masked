
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct pt_regs *VAR_4, unsigned int VAR_5)
{
 if ((VAR_5 & VAR_1) == VAR_2 && (VAR_5 & VAR_0) == VAR_3)
  return 0;

 return -1;
}
