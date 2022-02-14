
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* mode ) (struct clk*,int) ;int users; struct clk* parent; } ;


 int FUNC_0 (struct clk*,int) ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_0)
{
 if (VAR_0->parent)
  FUNC_1(VAR_0->parent);
 if (VAR_0->users++ == 0 && VAR_0->mode)
  VAR_0->mode(VAR_0, 1);
}
