
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {int flags; int clksel_mask; int rate; TYPE_1__* parent; int name; int clksel_reg; int clksel; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct clk*,struct clk*,int*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*,struct clk*) ;
 int FUNC_6 (char*,int ,int ,int) ;

int FUNC_7(struct clk *VAR_2, struct clk *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;

 if (VAR_2->flags & VAR_0)
  return -VAR_1;

 if (!VAR_2->clksel)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_3, VAR_2, &VAR_4);
 if (!VAR_6)
  return -VAR_1;


 VAR_5 = FUNC_1(VAR_2->clksel_reg);
 VAR_5 &= ~VAR_2->clksel_mask;
 VAR_5 |= VAR_4 << FUNC_0(VAR_2->clksel_mask);
 FUNC_2(VAR_5, VAR_2->clksel_reg);
 VAR_5 = FUNC_1(VAR_2->clksel_reg);

 FUNC_4(VAR_2);

 FUNC_5(VAR_2, VAR_3);


 VAR_2->rate = VAR_3->rate;

 if (VAR_6 > 0)
  VAR_2->rate /= VAR_6;

 FUNC_6("clock: set parent of %s to %s (new rate %ld)\n",
   VAR_2->name, VAR_2->parent->name, VAR_2->rate);

 return 0;
}
