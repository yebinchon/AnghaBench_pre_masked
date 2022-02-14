
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned int* uregs; } ;


 struct pt_regs* FUNC_0 () ;
 unsigned int const VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_1(const unsigned int VAR_1)
{







 struct pt_regs *VAR_2 = FUNC_0();
 unsigned int VAR_3 = VAR_2->uregs[VAR_1];
 if (VAR_0 == VAR_1)
  VAR_3 -= 4;
 return VAR_3;
}
