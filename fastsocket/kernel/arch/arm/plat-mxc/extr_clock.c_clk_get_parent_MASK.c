
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {struct clk* parent; } ;


 scalar_t__ FUNC_0 (struct clk*) ;

struct clk *FUNC_1(struct clk *VAR_0)
{
 struct clk *VAR_1 = ((void*)0);

 if (VAR_0 == ((void*)0) || FUNC_0(VAR_0))
  return VAR_1;

 return VAR_0->parent;
}
