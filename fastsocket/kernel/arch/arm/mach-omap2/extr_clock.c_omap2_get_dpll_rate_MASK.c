
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long long u32 ;
struct dpll_data {long long enable_mask; long long mult_mask; long long div1_mask; TYPE_2__* clk_ref; int mult_div1_reg; TYPE_1__* clk_bypass; int control_reg; } ;
struct clk {struct dpll_data* dpll_data; } ;
struct TYPE_4__ {scalar_t__ rate; } ;
struct TYPE_3__ {long long rate; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 long long FUNC_0 (long long) ;
 long long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (long long,long long) ;

u32 FUNC_5(struct clk *VAR_4)
{
 long long VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 struct dpll_data *VAR_9;

 VAR_9 = VAR_4->dpll_data;
 if (!VAR_9)
  return 0;


 VAR_8 = FUNC_1(VAR_9->control_reg);
 VAR_8 &= VAR_9->enable_mask;
 VAR_8 >>= FUNC_0(VAR_9->enable_mask);

 if (FUNC_2()) {
  if (VAR_8 == VAR_1 ||
      VAR_8 == VAR_0)
   return VAR_9->clk_bypass->rate;
 } else if (FUNC_3()) {
  if (VAR_8 == VAR_3 ||
      VAR_8 == VAR_2)
   return VAR_9->clk_bypass->rate;
 }

 VAR_8 = FUNC_1(VAR_9->mult_div1_reg);
 VAR_6 = VAR_8 & VAR_9->mult_mask;
 VAR_6 >>= FUNC_0(VAR_9->mult_mask);
 VAR_7 = VAR_8 & VAR_9->div1_mask;
 VAR_7 >>= FUNC_0(VAR_9->div1_mask);

 VAR_5 = (long long)VAR_9->clk_ref->rate * VAR_6;
 FUNC_4(VAR_5, VAR_7 + 1);

 return VAR_5;
}
