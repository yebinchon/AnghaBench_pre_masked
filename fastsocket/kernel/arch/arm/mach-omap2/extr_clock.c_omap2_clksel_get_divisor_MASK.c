
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int clksel_mask; int clksel_reg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct clk*,int) ;

u32 FUNC_3(struct clk *VAR_0)
{
 u32 VAR_1;

 if (!VAR_0->clksel_mask)
  return 0;

 VAR_1 = FUNC_1(VAR_0->clksel_reg) & VAR_0->clksel_mask;
 VAR_1 >>= FUNC_0(VAR_0->clksel_mask);

 return FUNC_2(VAR_0, VAR_1);
}
