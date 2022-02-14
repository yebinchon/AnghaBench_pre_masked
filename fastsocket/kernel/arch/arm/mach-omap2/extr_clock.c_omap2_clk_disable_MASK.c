
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ usecount; scalar_t__ clkdm; struct clk* parent; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (scalar_t__,struct clk*) ;

void FUNC_2(struct clk *VAR_0)
{
 if (VAR_0->usecount > 0 && !(--VAR_0->usecount)) {
  FUNC_0(VAR_0);
  if (VAR_0->parent)
   FUNC_2(VAR_0->parent);
  if (VAR_0->clkdm)
   FUNC_1(VAR_0->clkdm, VAR_0);

 }
}
