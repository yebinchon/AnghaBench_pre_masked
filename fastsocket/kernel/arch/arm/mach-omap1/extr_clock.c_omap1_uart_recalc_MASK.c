
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned int enable_bit; int enable_reg; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0->enable_reg);
 return VAR_1 & VAR_0->enable_bit ? 48000000 : 12000000;
}
