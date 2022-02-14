
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* u_regs; } ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;

void FUNC_1(struct pt_regs *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = VAR_2->u_regs[VAR_1];
 if(((VAR_3 + 0x38) & VAR_0) != (VAR_3 & VAR_0))
  FUNC_0(VAR_3 + 0x38, 0);
 FUNC_0(VAR_3, 0);
}
