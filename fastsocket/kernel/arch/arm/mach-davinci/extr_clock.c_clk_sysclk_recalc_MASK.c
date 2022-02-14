
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pll_data {int input_rate; scalar_t__ base; } ;
struct clk {int rate; int flags; scalar_t__ div_reg; TYPE_1__* parent; scalar_t__ pll_data; } ;
struct TYPE_2__ {int rate; struct pll_data* pll_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_3)
{
 u32 VAR_4, VAR_5;
 struct pll_data *VAR_6;


 if (VAR_3->pll_data)
  return;

 if (FUNC_0(!VAR_3->parent))
  return;

 VAR_3->rate = VAR_3->parent->rate;


 if (FUNC_0(!VAR_3->parent->pll_data))
  return;

 VAR_6 = VAR_3->parent->pll_data;


 if (VAR_3->flags & VAR_2)
  VAR_3->rate = VAR_6->input_rate;

 if (!VAR_3->div_reg)
  return;

 VAR_4 = FUNC_1(VAR_6->base + VAR_3->div_reg);
 if (VAR_4 & VAR_0) {
  VAR_5 = (VAR_4 & VAR_1) + 1;
  if (VAR_5)
   VAR_3->rate /= VAR_5;
 }
}
