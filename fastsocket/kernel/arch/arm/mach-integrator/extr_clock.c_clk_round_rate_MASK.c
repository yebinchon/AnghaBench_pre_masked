
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icst525_vco {int dummy; } ;
struct clk {int params; } ;


 int FUNC_0 (int ,struct icst525_vco) ;
 struct icst525_vco FUNC_1 (int ,unsigned long) ;

long FUNC_2(struct clk *VAR_0, unsigned long VAR_1)
{
 struct icst525_vco VAR_2;
 VAR_2 = FUNC_1(VAR_0->params, VAR_1 / 1000);
 return FUNC_0(VAR_0->params, VAR_2) * 1000;
}
