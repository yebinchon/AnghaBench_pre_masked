
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int dummy; } ;
struct clk {int clkdm_name; int name; struct clockdomain* clkdm; } ;


 struct clockdomain* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;

void FUNC_2(struct clk *VAR_0)
{
 struct clockdomain *VAR_1;

 if (!VAR_0->clkdm_name)
  return;

 VAR_1 = FUNC_0(VAR_0->clkdm_name);
 if (VAR_1) {
  FUNC_1("clock: associated clk %s to clkdm %s\n",
    VAR_0->name, VAR_0->clkdm_name);
  VAR_0->clkdm = VAR_1;
 } else {
  FUNC_1("clock: could not associate clk %s to "
    "clkdm %s\n", VAR_0->name, VAR_0->clkdm_name);
 }
}
