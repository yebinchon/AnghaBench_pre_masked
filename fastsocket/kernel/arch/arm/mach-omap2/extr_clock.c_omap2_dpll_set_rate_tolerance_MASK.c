
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* dpll_data; } ;
struct TYPE_2__ {unsigned int rate_tolerance; } ;


 int VAR_0 ;

int FUNC_0(struct clk *VAR_1, unsigned int VAR_2)
{
 if (!VAR_1 || !VAR_1->dpll_data)
  return -VAR_0;

 VAR_1->dpll_data->rate_tolerance = VAR_2;

 return 0;
}
