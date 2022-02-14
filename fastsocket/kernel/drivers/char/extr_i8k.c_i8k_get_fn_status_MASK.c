
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int eax; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smm_regs*) ;

__attribute__((used)) static int FUNC_1(void)
{
 struct smm_regs VAR_6 = { .eax = VAR_2, };
 int VAR_7;

 if ((VAR_7 = FUNC_0(&VAR_6)) < 0)
  return VAR_7;

 switch ((VAR_6.eax >> VAR_1) & VAR_0) {
 case 128:
  return VAR_5;
 case 130:
  return VAR_3;
 case 129:
  return VAR_4;
 default:
  return 0;
 }
}
