
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* enable ) (struct clk*) ;int usecount; struct clk* secondary; struct clk* parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_1)
{
 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_2(VAR_1->parent);
 FUNC_2(VAR_1->secondary);

 if (VAR_1->usecount++ == 0 && VAR_1->enable)
  VAR_1->enable(VAR_1);

 return 0;
}
