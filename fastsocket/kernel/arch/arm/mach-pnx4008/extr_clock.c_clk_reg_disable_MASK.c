
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int enable_shift; scalar_t__ enable_reg; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct clk *VAR_0)
{
 if (VAR_0->enable_reg)
  FUNC_1(FUNC_0(VAR_0->enable_reg) &
        ~(1 << VAR_0->enable_shift), VAR_0->enable_reg);
}
