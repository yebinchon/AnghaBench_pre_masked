
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int ebx; int eax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct smm_regs*) ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3)
{
 struct smm_regs VAR_4 = { .eax = VAR_1, };

 VAR_3 = (VAR_3 < 0) ? 0 : ((VAR_3 > VAR_0) ? VAR_0 : VAR_3);
 VAR_4.ebx = (VAR_2 & 0xff) | (VAR_3 << 8);

 return FUNC_1(&VAR_4) ? : FUNC_0(VAR_2);
}
