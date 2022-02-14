
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpll_data {int enable_mask; int control_reg; } ;
struct clk {unsigned long rate; struct clk* parent; struct dpll_data* dpll_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_1)
{
 const struct dpll_data *VAR_2;
 unsigned long VAR_3;
 u32 VAR_4;
 struct clk *VAR_5;


 VAR_5 = VAR_1->parent;
 while (VAR_5 && !VAR_5->dpll_data)
  VAR_5 = VAR_5->parent;


 FUNC_0(!VAR_5);

 VAR_2 = VAR_5->dpll_data;

 FUNC_0(!VAR_2->enable_mask);

 VAR_4 = FUNC_2(VAR_2->control_reg) & VAR_2->enable_mask;
 VAR_4 >>= FUNC_1(VAR_2->enable_mask);
 if (VAR_4 != VAR_0)
  VAR_3 = VAR_1->parent->rate;
 else
  VAR_3 = VAR_1->parent->rate * 2;
 return VAR_3;
}
