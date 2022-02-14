
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icst525_vco {int dummy; } ;
struct clk {int rate; int (* setvco ) (struct clk*,struct icst525_vco) ;int params; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct icst525_vco) ;
 struct icst525_vco FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct clk*,struct icst525_vco) ;

int FUNC_3(struct clk *VAR_1, unsigned long VAR_2)
{
 int VAR_3 = -VAR_0;

 if (VAR_1->setvco) {
  struct icst525_vco VAR_4;

  VAR_4 = FUNC_1(VAR_1->params, VAR_2 / 1000);
  VAR_1->rate = FUNC_0(VAR_1->params, VAR_4) * 1000;
  VAR_1->setvco(VAR_1, VAR_4);
  VAR_3 = 0;
 }
 return VAR_3;
}
