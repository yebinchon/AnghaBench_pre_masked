
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* uregs; } ;


 struct pt_regs* FUNC_0 () ;

__attribute__((used)) static inline void
FUNC_1(const unsigned int VAR_0, const unsigned long VAR_1)
{
 struct pt_regs *VAR_2 = FUNC_0();
 VAR_2->uregs[VAR_0] = VAR_1;
}
