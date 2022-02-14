
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dpll_data {int enable_mask; int control_reg; } ;
struct clk {struct dpll_data* dpll_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_0, u8 VAR_1)
{
 const struct dpll_data *VAR_2;
 u32 VAR_3;

 VAR_2 = VAR_0->dpll_data;

 VAR_3 = FUNC_1(VAR_2->control_reg);
 VAR_3 &= ~VAR_2->enable_mask;
 VAR_3 |= VAR_1 << FUNC_0(VAR_2->enable_mask);
 FUNC_2(VAR_3, VAR_2->control_reg);
}
