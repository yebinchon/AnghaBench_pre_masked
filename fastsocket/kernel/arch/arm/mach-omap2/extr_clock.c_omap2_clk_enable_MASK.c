
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int usecount; scalar_t__ clkdm; struct clk* parent; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (scalar_t__,struct clk*) ;
 int FUNC_3 (scalar_t__,struct clk*) ;

int FUNC_4(struct clk *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->usecount++ == 0) {
  if (VAR_0->clkdm)
   FUNC_3(VAR_0->clkdm, VAR_0);

  if (VAR_0->parent) {
   VAR_1 = FUNC_4(VAR_0->parent);
   if (VAR_1)
    goto err;
  }

  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1) {
   if (VAR_0->parent)
    FUNC_1(VAR_0->parent);

   goto err;
  }
 }
 return VAR_1;

err:
 if (VAR_0->clkdm)
  FUNC_2(VAR_0->clkdm, VAR_0);
 VAR_0->usecount--;
 return VAR_1;
}
