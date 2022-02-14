
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clksrc_clk {int divider_shift; int reg_divider; } ;
struct clk {int parent; } ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 struct clksrc_clk* FUNC_2 (struct clk*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_0)
{
 struct clksrc_clk *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2 = FUNC_1(VAR_0->parent);
 u32 VAR_3 = FUNC_0(VAR_1->reg_divider);

 VAR_3 >>= VAR_1->divider_shift;
 VAR_3 &= 0xf;
 VAR_3++;

 VAR_2 /= VAR_3;
 return VAR_2;
}
