
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_window32 {unsigned long* locals; } ;
struct pt_regs {unsigned long* u_regs; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline unsigned long *FUNC_0(unsigned int VAR_1, struct pt_regs *VAR_2)
{
 struct reg_window32 *VAR_3;

 if(VAR_1 < 16)
  return &VAR_2->u_regs[VAR_1];
 VAR_3 = (struct reg_window32 *) VAR_2->u_regs[VAR_0];
 return &VAR_3->locals[VAR_1 - 16];
}
