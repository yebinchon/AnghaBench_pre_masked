
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int busy_bit; int busy_reg; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct clk *VAR_0)
{
 return FUNC_0(VAR_0->busy_reg) & (1 << VAR_0->busy_bit);
}
