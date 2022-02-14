
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dpll_data {int freqsel_mask; int mult_mask; int div1_mask; int mult_div1_reg; int control_reg; } ;
struct clk {struct dpll_data* dpll_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;

__attribute__((used)) static int FUNC_5(struct clk *VAR_0, u16 VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct dpll_data *VAR_4 = VAR_0->dpll_data;
 u32 VAR_5;


 FUNC_3(VAR_0);


 VAR_5 = FUNC_1(VAR_4->control_reg);
 VAR_5 &= ~VAR_4->freqsel_mask;
 VAR_5 |= VAR_3 << FUNC_0(VAR_4->freqsel_mask);
 FUNC_2(VAR_5, VAR_4->control_reg);


 VAR_5 = FUNC_1(VAR_4->mult_div1_reg);
 VAR_5 &= ~(VAR_4->mult_mask | VAR_4->div1_mask);
 VAR_5 |= VAR_1 << FUNC_0(VAR_4->mult_mask);
 VAR_5 |= (VAR_2 - 1) << FUNC_0(VAR_4->div1_mask);
 FUNC_2(VAR_5, VAR_4->mult_div1_reg);





 FUNC_4(VAR_0);

 return 0;
}
