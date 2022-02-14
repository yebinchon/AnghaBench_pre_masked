
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ usecount; struct clk* parent; } ;


 int FUNC_0 (struct clk*) ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_0)
{
 if (VAR_0->usecount > 0 && !(--VAR_0->usecount)) {
  FUNC_0(VAR_0);
  if (VAR_0->parent)
   FUNC_1(VAR_0->parent);
 }
}
