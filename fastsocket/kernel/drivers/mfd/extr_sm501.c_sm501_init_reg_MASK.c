
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_reg_init {unsigned long mask; unsigned long set; } ;
struct sm501_devdata {scalar_t__ regs; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct sm501_devdata *VAR_0,
      unsigned long VAR_1,
      struct sm501_reg_init *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_0->regs + VAR_1);
 VAR_3 &= ~VAR_2->mask;
 VAR_3 |= VAR_2->set;
 FUNC_1(VAR_3, VAR_0->regs + VAR_1);
}
