
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {struct clk* parent; } ;



struct clk *FUNC_0(struct clk *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 return VAR_0->parent;
}
