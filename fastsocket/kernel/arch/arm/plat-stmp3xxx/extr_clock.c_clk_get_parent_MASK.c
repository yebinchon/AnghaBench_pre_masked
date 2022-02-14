
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {struct clk* parent; } ;


 int FUNC_0 (struct clk*) ;
 scalar_t__ FUNC_1 (int) ;

struct clk *FUNC_2(struct clk *VAR_0)
{
 if (FUNC_1(!FUNC_0(VAR_0)))
  return ((void*)0);
 return VAR_0->parent;
}
