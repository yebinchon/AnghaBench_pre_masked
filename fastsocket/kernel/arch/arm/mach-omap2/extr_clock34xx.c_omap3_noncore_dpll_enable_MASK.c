
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpll_data {TYPE_1__* clk_ref; TYPE_1__* clk_bypass; } ;
struct clk {scalar_t__ rate; TYPE_1__* parent; struct dpll_data* dpll_data; } ;
struct TYPE_2__ {scalar_t__ rate; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk VAR_1 ;
 scalar_t__ FUNC_3 (struct clk*) ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_2)
{
 int VAR_3;
 struct dpll_data *VAR_4;

 if (VAR_2 == &VAR_1)
  return -VAR_0;

 VAR_4 = VAR_2->dpll_data;
 if (!VAR_4)
  return -VAR_0;

 if (VAR_2->rate == VAR_4->clk_bypass->rate) {
  FUNC_0(VAR_2->parent != VAR_4->clk_bypass);
  VAR_3 = FUNC_1(VAR_2);
 } else {
  FUNC_0(VAR_2->parent != VAR_4->clk_ref);
  VAR_3 = FUNC_2(VAR_2);
 }

 if (!VAR_3)
  VAR_2->rate = FUNC_3(VAR_2);

 return VAR_3;
}
