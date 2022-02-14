
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long (* get_rate ) (struct clk*) ;struct clk* parent; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 unsigned long FUNC_1 (struct clk*) ;

unsigned long FUNC_2(struct clk *VAR_0)
{
 if (VAR_0 == ((void*)0) || FUNC_0(VAR_0))
  return 0UL;

 if (VAR_0->get_rate)
  return VAR_0->get_rate(VAR_0);

 return FUNC_2(VAR_0->parent);
}
