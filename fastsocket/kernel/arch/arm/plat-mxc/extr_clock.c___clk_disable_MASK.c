
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* disable ) (struct clk*) ;int usecount; struct clk* secondary; struct clk* parent; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_0)
{
 if (VAR_0 == ((void*)0) || FUNC_0(VAR_0))
  return;

 FUNC_2(VAR_0->parent);
 FUNC_2(VAR_0->secondary);

 if (!(--VAR_0->usecount) && VAR_0->disable)
  VAR_0->disable(VAR_0);
}
