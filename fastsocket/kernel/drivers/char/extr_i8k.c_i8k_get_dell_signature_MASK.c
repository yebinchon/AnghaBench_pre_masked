
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int eax; int edx; } ;


 int FUNC_0 (struct smm_regs*) ;

__attribute__((used)) static int FUNC_1(int VAR_0)
{
 struct smm_regs VAR_1 = { .eax = VAR_0, };
 int VAR_2;

 if ((VAR_2 = FUNC_0(&VAR_1)) < 0)
  return VAR_2;

 return VAR_1.eax == 1145651527 && VAR_1.edx == 1145392204 ? 0 : -1;
}
