
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct clk {unsigned long clksel_mask; unsigned long rate; TYPE_1__* parent; int clksel_reg; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (struct clk*) ;
 unsigned long FUNC_4 (struct clk*,unsigned long,unsigned long*) ;
 unsigned long FUNC_5 (struct clk*,unsigned long) ;

int FUNC_6(struct clk *VAR_1, unsigned long VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6 = 0;

 if (!VAR_1->clksel_mask)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_1, VAR_2, &VAR_6);
 if (VAR_5 != VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_5(VAR_1, VAR_6);
 if (VAR_4 == ~0)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1->clksel_reg);
 VAR_3 &= ~VAR_1->clksel_mask;
 VAR_3 |= VAR_4 << FUNC_0(VAR_1->clksel_mask);
 FUNC_2(VAR_3, VAR_1->clksel_reg);
 VAR_3 = FUNC_1(VAR_1->clksel_reg);

 VAR_1->rate = VAR_1->parent->rate / VAR_6;

 FUNC_3(VAR_1);

 return 0;
}
