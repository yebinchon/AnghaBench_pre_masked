
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int eax; int ebx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct smm_regs*) ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{
 struct smm_regs VAR_3 = { .eax = VAR_0, };

 VAR_3.ebx = VAR_2 & 0xff;
 return FUNC_0(&VAR_3) ? : (VAR_3.eax & 0xffff) * VAR_1;
}
