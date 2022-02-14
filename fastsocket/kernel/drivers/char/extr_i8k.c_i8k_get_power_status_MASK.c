
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int eax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smm_regs*) ;

__attribute__((used)) static int FUNC_1(void)
{
 struct smm_regs VAR_4 = { .eax = VAR_3, };
 int VAR_5;

 if ((VAR_5 = FUNC_0(&VAR_4)) < 0)
  return VAR_5;

 return (VAR_4.eax & 0xff) == VAR_2 ? VAR_0 : VAR_1;
}
